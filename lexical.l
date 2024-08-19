%{
#include "synt.tab.h"
#include "SymTab.c"

extern FILE *yyin;
extern FILE *yyout;


int lineno = 1;
extern YYSTYPE yylval;

%}

alpha       [a-zA-Z]
num         [0-9]
sym         [^\n\t\r\f\v0-9a-zA-Z]
alnum       {alpha}|{num}
print       [ -~]

ID          {alpha}+{alnum}*
ICONST      "0"|[0-9]{num}*
STRING      \"{print}*\"


%%

"char"|"CHAR"           { yylval.var_type = malloc(yyleng * sizeof(char));
                          strcpy(yylval.var_type, yytext);
                          return Key_CHAR; }
"int"|"INT"             { yylval.var_type = malloc(yyleng * sizeof(char));
                          strcpy(yylval.var_type, yytext);
                          return Key_INT; }
"float"|"FLOAT"         { yylval.var_type = malloc(yyleng * sizeof(char));
                          strcpy(yylval.var_type, yytext);
                          return Key_FLOAT; }
"Mat"|"MAT"             { yylval.var_type = malloc(yyleng * sizeof(char));
                          strcpy(yylval.var_type, yytext);
                          return Key_MAT; }
"if"|"IF"               { return Key_IF; }
"else"|"ELSE"           { return Key_ELSE; }
"while"|"WHILE"         { return Key_WHILE; }
"for"|"FOR"             { return Key_FOR; }
"continue"|"CONTINUE"   { return Key_CONTINUE; }
"break"|"BREAK"         { return Key_BREAK; }
"void"|"VOID"           { return Key_VOID; }
"main"|"MAIN"           { return Key_MAIN; }
"return"|"RETURN"       { return Key_RETURN; }
"#include"              { return Key_INCLUDE; }
"using"                 { return Key_USING; }
"namespace"             { return Key_NAMESPACE; }
"at<uchar>"             { return Key_ATUCHAR; }
"CV_8UC1"               { return Key_CV_8UC1; }

"+"|"-"             { return ADDOP; }
"*"	                { return MULOP; }
"/"	                { return DIVOP; }
"++"|"--"           { return INCR; }
"||"                { return OROP; }
"&&"	            { return ANDOP; }
"!"	                { return NOTOP; }
"=="|"!="           { return EQUOP; }
">"|"<"|">="|"<="   { return RELOP; }

"("      { return LPAREN; }
")"      { return RPAREN; }
"]"      { return RBRACK; }
"["      { return LBRACK; }
"{"      { return LBRACE; }
"}"      { return RBRACE; }
";"      { return SEMI; }
"."      { return DOT; }
":"      { return COL; }
","      { return COMMA; }
"="      { return ASSIGN; }
"&"      { return REFER; }

{ID}         { if (yyleng <=15){
                   insert(yytext, strlen(yytext), 0, lineno);
                   yylval.var_name = malloc(yyleng * sizeof(char));
                   strcpy(yylval.var_name, yytext);
                   return ID;}
               else printf ("ERROR AT LINE %d, ID IS TOO LONG! \n" , lineno);
            }

{ICONST}     { yylval.integer = atoi(yytext);
               return ICONST; }

{STRING}     { yylval.var_name = malloc(yyleng * sizeof(char));
			   strcpy(yylval.var_type, yytext);
               return STRING; }

"\n"		   { lineno += 1; }
[ \t]

. { printf("Unrecognized character at line : %d \n" , lineno); }




