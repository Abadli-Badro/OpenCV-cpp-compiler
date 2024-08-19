#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symtab.h"

//list_t hash_table[SIZE]; // Declaration of the static array hash table

void init_hash_table(){
    int i;
    for(i = 0; i < SIZE; i++) {
        hash_table[i].st_type = NONE; // Initialize all types to NONE
        //hash_table[i].next = NULL; // Initialize all next pointers to NULL
    }
}

// DJB2 HASH FUNCTION IMPLEMENTATION
int hash(char *key) {
    unsigned long hashval = 5381;
    int c;

    while ((c = *key++) != '\0') {
        hashval = ((hashval << 5) + hashval) + c;
    }

    return hashval % SIZE;
}

void insert(char *name, int len, int type, int lineno) {
    int hashval = hash(name);

    if (hash_table[hashval].st_type != NONE) return; // If already occupied, do nothing

    else if (hash_table[hashval].st_type == NONE){
            // Initialize the new entry
        strncpy(hash_table[hashval].st_name, name, len);
        hash_table[hashval].st_type = type;
        hash_table[hashval].st_size = 0;
    }
    //printf("Inserted %s for the first time with linenumber %d!\n", name, lineno); // error checking
}

list_t *search(char *name) {
    int hashval = hash(name);
    return &hash_table[hashval]; // Always return the pointer to the entry, even if it's UNDEF
}

void symtab_dump(FILE *of) {
    int i;
    fprintf(of,"------------ ------ ------------ \n");
    fprintf(of,"Name         Type   Initial Value   \n");
    fprintf(of,"------------ ------ ------------ \n");
    for (i = 0; i < SIZE; ++i) {
        if (hash_table[i].st_type != NONE) {
            fprintf(of,"%-12s ",hash_table[i].st_name);
            if (hash_table[i].st_type == INT_TYPE) {fprintf(of,"%-7s","int"); fprintf(of,"%-12s ",hash_table[i].st_ival);}
            else if (hash_table[i].st_type == FLOAT_TYPE) {fprintf(of,"%-7s","float"); fprintf(of,"%-12s ",hash_table[i].st_fval);}
            else if (hash_table[i].st_type == CHAR_TYPE) {fprintf(of,"%-7s","char"); fprintf(of,"%-12s ",hash_table[i].st_sval);}
            else if (hash_table[i].st_type == MAT_TYPE) {fprintf(of,"%-7s","matrice");}


            else if (hash_table[i].st_type == ARRAY_TYPE){
                fprintf(of,"array of ");
                if (hash_table[i].inf_type == INT_TYPE)           fprintf(of,"%-7s","int");
                else if (hash_table[i].inf_type == FLOAT_TYPE)     fprintf(of,"%-7s","float");
                else if (hash_table[i].inf_type == CHAR_TYPE)      fprintf(of,"%-7s","char");
                else if (hash_table[i].inf_type == MAT_TYPE)      fprintf(of,"%-7s","matrice");
                else fprintf(of,"%-7s","undef");
            }
            else if (hash_table[i].st_type == FUNCTION_TYPE){
                fprintf(of,"%-7s","function returns ");
                if (hash_table[i].inf_type == INT_TYPE)           fprintf(of,"%-7s","int");
                else if (hash_table[i].inf_type == FLOAT_TYPE)     fprintf(of,"%-7s","float");
                else if (hash_table[i].inf_type == CHAR_TYPE)      fprintf(of,"%-7s","char");
                else if (hash_table[i].inf_type == VOID_TYPE)      fprintf(of,"%-7s","void");
                else fprintf(of,"%-7s","undef");
            }
            else fprintf(of,"%-7s","undef"); // if UNDEF or 0
            fprintf(of,"\n");
        }
    }
}

int isDeclared(char* name , int lineno){
    int hashval = hash(name);
    list_t *l = search(name);
    if (l->st_type == UNDEF){
        printf("ERROR! Usage of %s without declaration at line %d! \n",l->st_name , lineno);
        return 1;
    }
    return 0;
}

void print_symbol_table() {
    FILE *output_file = stdout; // Output to stdout by default
    symtab_dump(output_file);
}

void quadr(char opr[],char op1[],char op2[],char res[])
{

    strcpy(quad[qc].oper , opr);
    strcpy(quad[qc].op1 , op1);
    strcpy(quad[qc].op2 , op2);
    strcpy(quad[qc].res , res);

    qc++;

}

void ajour_quad(int num_quad, int colon_quad, char val [])
{
    if (colon_quad==0) strcpy(quad[num_quad].oper , val);
    else if (colon_quad==1) strcpy(quad[num_quad].op1 , val);
    else if (colon_quad==2) strcpy(quad[num_quad].op2 , val);
    else if (colon_quad==3) strcpy(quad[num_quad].res , val);

}

void afficher_qdr()
{
    printf("*********************LesQuadruplets***********************\n");

    int i;

    for(i=0;i<qc;i++)

    {

    printf("\n %d - ( %s , %s , %s , %s )",i,quad[i].oper,quad[i].op1,quad[i].op2,quad[i].res);
    printf("\n---------------------------------------------------\n");

}
}
