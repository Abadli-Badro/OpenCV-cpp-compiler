%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "SymTab.h"

    extern FILE *yyout;
    extern FILE *yyin;
    extern int lineno;
    extern int yylex();
    void yyerror();

    char* typename;
    char* name;
    int array = 0;
    int opencv = 0;
    int deb_else=0;

    int qc=1;
    int Fin_if=0;
    char tmp [20];
%}

%union
{
	int integer;
	char* var_name;
	char* var_type;

}

%token <var_type>Key_CHAR Key_INT Key_FLOAT Key_MAT Key_IF Key_ELSE Key_WHILE Key_FOR Key_CONTINUE Key_BREAK Key_VOID Key_MAIN Key_RETURN Key_INCLUDE Key_USING Key_NAMESPACE Key_CV_8UC1 Key_ATUCHAR
%token ADDOP MULOP DIVOP INCR OROP ANDOP NOTOP EQUOP RELOP
%token LPAREN RPAREN LBRACK RBRACK LBRACE RBRACE SEMI DOT COL COMMA ASSIGN REFER
%token <var_name>ID
%token <integer>ICONST
%token STRING

%%

program: includes usings Key_INT Key_MAIN LPAREN RPAREN LBRACE declarations statements Key_RETURN ICONST SEMI RBRACE functions;

includes: includes include | include;
include: Key_INCLUDE RELOP ID RELOP |Key_INCLUDE RELOP ID DIVOP ID DOT ID RELOP {if(strcmp($3,"opencv2")==0)printf("INCLUDED OPENCV!\n"); opencv = 1;};

usings: usings using | using;
using: Key_USING Key_NAMESPACE ID SEMI;

declarations: declarations declaration | declaration;
declaration: type names SEMI {typename = "NONE"; array = 0;}    //resetting all the flags after each declaration
| type array names SEMI {array = 0;};                           //int x; or int x,y,z;

type: Key_INT {typename = strdup(yylval.var_name);}|            //Setting all the flags
Key_CHAR {typename = strdup(yylval.var_name);}| Key_FLOAT {typename = strdup(yylval.var_name);}|
Key_MAT {typename = strdup(yylval.var_name); array=1;}| Key_VOID {typename = strdup(yylval.var_name);};

names: variable init | names COMMA variable init;
init: ASSIGN init_value | init_Mat | /* epsilon */ ;                                                                              //declarations can be either with init value or not
init_value: constant | array_init;
array_init: LBRACE values RBRACE;                                                                                    //Arrays : {val1, val2, val3 ...}
init_Mat:{typename = "NONE";} LPAREN call_params RPAREN {if(opencv == 0){ printf("ERROR MISSING OPENCV INCLUSION!\n"); yyerror();}}; //in opencv Mat is declared the same way as a function call so we use the definition below for that

values: values COMMA constant | constant; //for array init

variable: ID {
                int hashval = hash(yylval.var_name);
                list_t *l = search(yylval.var_name);
                if (strcmp(typename , "NONE") == 1 || strcmp(typename , "Mat") == 0){
                    typename[0] = tolower(typename[0]);

                    int type;
                    switch (typename[0]) {
                        case 'i':
                            type = INT_TYPE; // Integer
                            break;
                        case 'c':
                            type = CHAR_TYPE; // Character
                            break;
                        case 'f':
                            type = FLOAT_TYPE; // Float
                            break;
                        case 'm':
                            type = MAT_TYPE; // Matrice
                            break;
                        default:
                            type = UNDEF; // Undefined type
                    }
                    if (l->st_type == UNDEF){
                        l->st_type = type;
                        if(array == 1){ l->st_type = MAT_TYPE; l->inf_type = type; }
                        printf("The variable %s , type %d , HASH = %d \n", l->st_name , l->st_type , hashval);
                    }
                    else{printf("Semantic error: double declation of %s, at line %d\n", l->st_name, lineno); yyerror();}
                }
}
;                                                                                                          //x or *x
array: array LBRACK expression RBRACK { array=1;}
| LBRACK expression RBRACK            { array=1;};


statements: statements statement | statement;

statement:
if_statement | for_statement | while_statement | assigment |
Key_CONTINUE SEMI | Key_BREAK SEMI | function_call SEMI;

if_statement: Key_IF LPAREN expression RPAREN tail else_if_block else_block ;
else_if_block:
   else_if_block Key_ELSE Key_IF LPAREN expression RPAREN tail |
   Key_ELSE Key_IF LPAREN expression RPAREN tail  |
   /* epsilon */ ;
else_block: Key_ELSE tail | /* epsilon */ ;

for_statement: Key_FOR LPAREN assigment expression SEMI expression RPAREN tail ;

while_statement: Key_WHILE LPAREN expression RPAREN tail ;

tail: LBRACE statements RBRACE ;

constant: ICONST;
assigment: ID ASSIGN expression SEMI {
if(isDeclared($1 , lineno) == 1) yyerror();

ajour_quad(qc, 1, $1);
ajour_quad(qc, 0, "=");
qc++;
}
| ID DOT Key_ATUCHAR LPAREN call_params RPAREN ASSIGN expression SEMI
{if(isDeclared($1 , lineno) == 1) yyerror();};

expression:
    expression ADDOP expression {ajour_quad(qc, 0, "+"); ajour_quad(qc, 2, "temp"); qc++;}|
    expression MULOP expression {qc++;ajour_quad(qc, 0, "*"); ajour_quad(qc, 2, "temp"); qc++;}|
    expression DIVOP expression {qc++;ajour_quad(qc, 0, "/"); ajour_quad(qc, 2, "temp"); qc++;}|
    expression INCR {qc++;ajour_quad(qc, 0, "++");}|
    INCR expression |
    expression OROP expression {ajour_quad(qc, 0, "||");qc++;}|
    expression ANDOP expression {ajour_quad(qc, 0, "&&");qc++;}|
    NOTOP expression {ajour_quad(qc, 0, "!");qc++;}|
    expression EQUOP expression {ajour_quad(qc, 0, "==");qc++;}|
    expression RELOP expression |
    LPAREN expression RPAREN |
    ID {if(isDeclared($1 , lineno) == 1) yyerror(); ajour_quad(qc, 1, $1);qc++;}|
    ID DOT Key_ATUCHAR LPAREN call_params RPAREN {if(isDeclared($1 , lineno) == 1) yyerror();ajour_quad(qc, 1, $1);}|
    ICONST {int num = $1; char str[20]; sprintf(str, "%d", num); ajour_quad(qc, 2, str);}|
    function_call
;

functions: functions function | function;

function: function_head function_body | /* epsilon */ ;
function_head: type ID LPAREN param_empty RPAREN {
    printf("FUNCTION %s ", $2);
    printf("%s \n", typename);
    int hashval = hash($2);
    list_t *l = search($2);
    l->st_type = FUNCTION_TYPE;

    if (strcmp(typename , "NONE") == 1){
                    typename[0] = tolower(typename[0]);

                    int type;
                    switch (typename[0]) {
                        case 'i':
                            type = INT_TYPE; // Integer
                            break;
                        case 'c':
                            type = CHAR_TYPE; // Character
                            break;
                        case 'f':
                            type = FLOAT_TYPE; // Float
                            break;
                        case 'v':
                            type = VOID_TYPE; // void
                            break;
                        default:
                            type = UNDEF; // Undefined type
                    }
                    l->inf_type = type;
                }

};
param_empty: parameters | /* epsilon */;
parameters: parameters COMMA parameter | parameter | /* empty */ ;
parameter : type variable;
function_body: LBRACE declarations statements return_empty RBRACE;
return_empty: Key_RETURN SEMI | /*epsilon*/;

//Calling the functions
function_call: ID LPAREN call_params RPAREN;
call_params: call_param | STRING | /* epsilon */;
call_param : call_param COMMA var| var;
var: ID {if(isDeclared($1 , lineno) == 1) yyerror();} | STRING | ICONST | key;

key: Key_CV_8UC1 | /* epsilon */;


sign: ADDOP | /* epsilon */ ;
//reference: REFER | /* epsilon */ ;
%%
void yyerror ()
{
  fprintf(stderr, "Syntax error at line %d\n", lineno);
  exit(1);
}

yywrap()
{}

int main (int argc, char *argv[]){

    // initialize symbol table
	init_hash_table();

    int flag;
    yyin = fopen(argv[1], "r");
    flag = yyparse();
    fclose(yyin);

    // symbol table dump
	yyout = fopen("symtab_dump.out", "w");

	print_symbol_table();
	printf("\n--------------------------------------------------------------\n");
	afficher_qdr();

	symtab_dump(yyout);
	fclose(yyout);
    return flag;
}
