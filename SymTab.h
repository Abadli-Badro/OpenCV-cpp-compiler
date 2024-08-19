#ifndef SYMTAB_H_INCLUDED
#define SYMTAB_H_INCLUDED

#define SIZE 211
#define MAXTOKENLEN 40

/* token types */
#define NONE -1
#define UNDEF 0
#define INT_TYPE 1
#define FLOAT_TYPE 2
#define CHAR_TYPE 3
#define LOGIC_TYPE 4
#define ARRAY_TYPE 5
#define FUNCTION_TYPE 6
#define VOID_TYPE 7
#define MAT_TYPE 8

/* how parameter is passed */
#define BY_VALUE 1
#define BY_REFER 2

// struct that represents an entry in the symbol table
typedef struct {
    char st_name[MAXTOKENLEN];
    int st_size;
    // to store value and sometimes more information
    int st_ival;
    float st_fval;
    char *st_sval;

    int st_type;
    int inf_type;   // for arrays (info type) and functions (return type)
    // array stuff
    int *i_vals;
    double *f_vals;
    char **s_vals;
    int array_size;

    int num_of_pars;
} list_t;

/* the hash table */
static list_t hash_table[SIZE];

// Function Declarations
void init_hash_table(); // initialize hash table
int hash(char *key); // hash function
void insert(char *name, int len, int type, int lineno); // insert entry

list_t *search(char *name); // search for entry

void symtab_dump(FILE *of); // dump file

typedef struct {
char oper[100];
char op1[100];
char op2[100];
char res[100];

}qdr;

qdr quad[1000];

extern int qc;

#endif // SYMTAB_H_INCLUDED
