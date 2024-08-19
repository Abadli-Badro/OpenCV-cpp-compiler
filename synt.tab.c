
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "synt.y"

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


/* Line 189 of yacc.c  */
#line 97 "synt.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     Key_CHAR = 258,
     Key_INT = 259,
     Key_FLOAT = 260,
     Key_MAT = 261,
     Key_IF = 262,
     Key_ELSE = 263,
     Key_WHILE = 264,
     Key_FOR = 265,
     Key_CONTINUE = 266,
     Key_BREAK = 267,
     Key_VOID = 268,
     Key_MAIN = 269,
     Key_RETURN = 270,
     Key_INCLUDE = 271,
     Key_USING = 272,
     Key_NAMESPACE = 273,
     Key_CV_8UC1 = 274,
     Key_ATUCHAR = 275,
     ADDOP = 276,
     MULOP = 277,
     DIVOP = 278,
     INCR = 279,
     OROP = 280,
     ANDOP = 281,
     NOTOP = 282,
     EQUOP = 283,
     RELOP = 284,
     LPAREN = 285,
     RPAREN = 286,
     LBRACK = 287,
     RBRACK = 288,
     LBRACE = 289,
     RBRACE = 290,
     SEMI = 291,
     DOT = 292,
     COL = 293,
     COMMA = 294,
     ASSIGN = 295,
     REFER = 296,
     ID = 297,
     ICONST = 298,
     STRING = 299
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 25 "synt.y"

	int integer;
	char* var_name;
	char* var_type;




/* Line 214 of yacc.c  */
#line 186 "synt.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 198 "synt.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   309

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNRULES -- Number of states.  */
#define YYNSTATES  201

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    18,    21,    23,    28,    37,    40,    42,
      47,    50,    52,    56,    61,    63,    65,    67,    69,    71,
      74,    79,    82,    84,    85,    87,    89,    93,    94,    99,
     103,   105,   107,   112,   116,   119,   121,   123,   125,   127,
     129,   132,   135,   138,   146,   154,   161,   162,   165,   166,
     175,   181,   185,   187,   192,   202,   206,   210,   214,   217,
     220,   224,   228,   231,   235,   239,   243,   245,   252,   254,
     256,   259,   261,   264,   265,   271,   273,   274,   278,   280,
     281,   284,   290,   293,   294,   299,   301,   303,   304,   308,
     310,   312,   314,   316,   318,   320
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      46,     0,    -1,    47,    49,     4,    14,    30,    31,    34,
      51,    63,    15,    43,    36,    35,    74,    -1,    47,    48,
      -1,    48,    -1,    16,    29,    42,    29,    -1,    16,    29,
      42,    23,    42,    37,    42,    29,    -1,    49,    50,    -1,
      50,    -1,    17,    18,    42,    36,    -1,    51,    52,    -1,
      52,    -1,    53,    54,    36,    -1,    53,    62,    54,    36,
      -1,     4,    -1,     3,    -1,     5,    -1,     6,    -1,    13,
      -1,    61,    55,    -1,    54,    39,    61,    55,    -1,    40,
      56,    -1,    58,    -1,    -1,    71,    -1,    57,    -1,    34,
      60,    35,    -1,    -1,    59,    30,    83,    31,    -1,    60,
      39,    71,    -1,    71,    -1,    42,    -1,    62,    32,    73,
      33,    -1,    32,    73,    33,    -1,    63,    64,    -1,    64,
      -1,    65,    -1,    68,    -1,    69,    -1,    72,    -1,    11,
      36,    -1,    12,    36,    -1,    82,    36,    -1,     7,    30,
      73,    31,    70,    66,    67,    -1,    66,     8,     7,    30,
      73,    31,    70,    -1,     8,     7,    30,    73,    31,    70,
      -1,    -1,     8,    70,    -1,    -1,    10,    30,    72,    73,
      36,    73,    31,    70,    -1,     9,    30,    73,    31,    70,
      -1,    34,    63,    35,    -1,    43,    -1,    42,    40,    73,
      36,    -1,    42,    37,    20,    30,    83,    31,    40,    73,
      36,    -1,    73,    21,    73,    -1,    73,    22,    73,    -1,
      73,    23,    73,    -1,    73,    24,    -1,    24,    73,    -1,
      73,    25,    73,    -1,    73,    26,    73,    -1,    27,    73,
      -1,    73,    28,    73,    -1,    73,    29,    73,    -1,    30,
      73,    31,    -1,    42,    -1,    42,    37,    20,    30,    83,
      31,    -1,    43,    -1,    82,    -1,    74,    75,    -1,    75,
      -1,    76,    80,    -1,    -1,    53,    42,    30,    77,    31,
      -1,    78,    -1,    -1,    78,    39,    79,    -1,    79,    -1,
      -1,    53,    61,    -1,    34,    51,    63,    81,    35,    -1,
      15,    36,    -1,    -1,    42,    30,    83,    31,    -1,    84,
      -1,    44,    -1,    -1,    84,    39,    85,    -1,    85,    -1,
      42,    -1,    44,    -1,    43,    -1,    86,    -1,    19,    -1,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    41,    41,    43,    43,    44,    44,    46,    46,    47,
      49,    49,    50,    51,    53,    54,    54,    55,    55,    57,
      57,    58,    58,    58,    59,    59,    60,    61,    61,    63,
      63,    65,    97,    98,   101,   101,   104,   104,   104,   104,
     105,   105,   105,   107,   109,   110,   110,   112,   112,   114,
     116,   118,   120,   121,   128,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     149,   149,   151,   151,   152,   183,   183,   184,   184,   184,
     185,   186,   187,   187,   190,   191,   191,   191,   192,   192,
     193,   193,   193,   193,   195,   195
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "Key_CHAR", "Key_INT", "Key_FLOAT",
  "Key_MAT", "Key_IF", "Key_ELSE", "Key_WHILE", "Key_FOR", "Key_CONTINUE",
  "Key_BREAK", "Key_VOID", "Key_MAIN", "Key_RETURN", "Key_INCLUDE",
  "Key_USING", "Key_NAMESPACE", "Key_CV_8UC1", "Key_ATUCHAR", "ADDOP",
  "MULOP", "DIVOP", "INCR", "OROP", "ANDOP", "NOTOP", "EQUOP", "RELOP",
  "LPAREN", "RPAREN", "LBRACK", "RBRACK", "LBRACE", "RBRACE", "SEMI",
  "DOT", "COL", "COMMA", "ASSIGN", "REFER", "ID", "ICONST", "STRING",
  "$accept", "program", "includes", "include", "usings", "using",
  "declarations", "declaration", "type", "names", "init", "init_value",
  "array_init", "init_Mat", "$@1", "values", "variable", "array",
  "statements", "statement", "if_statement", "else_if_block", "else_block",
  "for_statement", "while_statement", "tail", "constant", "assigment",
  "expression", "functions", "function", "function_head", "param_empty",
  "parameters", "parameter", "function_body", "return_empty",
  "function_call", "call_params", "call_param", "var", "key", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    47,    47,    48,    48,    49,    49,    50,
      51,    51,    52,    52,    53,    53,    53,    53,    53,    54,
      54,    55,    55,    55,    56,    56,    57,    59,    58,    60,
      60,    61,    62,    62,    63,    63,    64,    64,    64,    64,
      64,    64,    64,    65,    66,    66,    66,    67,    67,    68,
      69,    70,    71,    72,    72,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      74,    74,    75,    75,    76,    77,    77,    78,    78,    78,
      79,    80,    81,    81,    82,    83,    83,    83,    84,    84,
      85,    85,    85,    85,    86,    86
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    14,     2,     1,     4,     8,     2,     1,     4,
       2,     1,     3,     4,     1,     1,     1,     1,     1,     2,
       4,     2,     1,     0,     1,     1,     3,     0,     4,     3,
       1,     1,     4,     3,     2,     1,     1,     1,     1,     1,
       2,     2,     2,     7,     7,     6,     0,     2,     0,     8,
       5,     3,     1,     4,     9,     3,     3,     3,     2,     2,
       3,     3,     2,     3,     3,     3,     1,     6,     1,     1,
       2,     1,     2,     0,     5,     1,     0,     3,     1,     0,
       2,     5,     2,     0,     4,     1,     1,     0,     3,     1,
       1,     1,     1,     1,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     4,     0,     1,     0,     3,     0,
       8,     0,     0,     0,     7,     0,     5,     0,     0,     0,
       9,     0,     0,     0,     0,     0,     6,    15,    14,    16,
      17,    18,     0,    11,     0,     0,     0,     0,     0,     0,
       0,    10,     0,    35,    36,    37,    38,    39,     0,     0,
      31,     0,    23,     0,     0,     0,     0,    40,    41,    87,
       0,     0,     0,    34,    42,     0,     0,     0,    66,    68,
       0,    69,    12,     0,     0,    19,    22,     0,     0,     0,
       0,     0,     0,     0,    94,    90,    92,    86,     0,    85,
      89,    93,     0,     0,     0,    59,    62,     0,     0,     0,
       0,     0,    58,     0,     0,     0,     0,    33,    23,     0,
      52,    21,    25,    24,    87,     0,    13,     0,     0,     0,
      84,    95,    87,    53,     0,    65,     0,    55,    56,    57,
      60,    61,    63,    64,    20,     0,    30,     0,    32,     0,
      46,    50,     0,    91,    88,     0,    73,    87,    26,     0,
      28,     0,     0,    48,     0,     0,     0,     2,    71,     0,
       0,    29,    51,     0,     0,    43,     0,     0,     0,    70,
       0,    72,    67,     0,     0,    47,    49,     0,    76,     0,
       0,     0,    54,     0,     0,    75,    78,    83,     0,     0,
      80,    74,     0,     0,     0,    45,     0,    77,    82,    81,
      44
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     9,    10,    32,    33,    34,    51,
      75,   111,   112,    76,    77,   135,    52,    53,    42,    43,
      44,   153,   165,    45,    46,   140,   113,    47,    70,   157,
     158,   159,   184,   185,   186,   171,   194,    71,    88,    89,
      90,    91
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -135
static const yytype_int16 yypact[] =
{
      12,   -22,    61,   114,  -135,    38,  -135,    78,  -135,    20,
    -135,    55,    52,    97,  -135,    62,  -135,    86,   120,    77,
    -135,    89,   110,   128,   125,   263,  -135,  -135,  -135,  -135,
    -135,  -135,    29,  -135,   -24,   154,   155,   168,   147,   160,
      39,  -135,    53,  -135,  -135,  -135,  -135,  -135,   170,    82,
    -135,    -9,    37,    50,    82,    82,   167,  -135,  -135,    84,
     197,    82,   177,  -135,  -135,    82,    82,    82,   116,  -135,
     153,  -135,  -135,   186,    74,  -135,  -135,   209,    82,     7,
     179,   190,   105,    82,  -135,  -135,  -135,   192,   211,   214,
    -135,  -135,   220,   115,   225,   249,   249,   201,   244,    82,
      82,    82,  -135,    82,    82,    82,    82,  -135,    37,   236,
    -135,  -135,  -135,  -135,    84,   166,  -135,   246,   246,   135,
    -135,    91,    84,  -135,   247,  -135,   251,   249,   249,   249,
     249,   249,   249,   249,  -135,   158,  -135,   252,  -135,    90,
     276,  -135,    82,  -135,  -135,   254,   263,    84,  -135,   236,
    -135,    63,   279,   280,   212,   250,   245,   263,  -135,   255,
     260,  -135,  -135,   262,    59,  -135,   246,    82,   264,  -135,
     263,  -135,  -135,    82,   265,  -135,  -135,   144,    16,    29,
     223,    82,  -135,   186,   266,   257,  -135,    76,   246,   234,
    -135,  -135,   263,   267,   258,  -135,   246,  -135,  -135,  -135,
    -135
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -135,  -135,  -135,   295,  -135,   290,   130,   -31,  -134,   248,
     194,  -135,  -135,  -135,  -135,  -135,   -67,  -135,  -123,   -38,
    -135,  -135,  -135,  -135,  -135,  -107,  -104,   253,   -52,  -135,
     148,  -135,  -135,  -135,   112,  -135,  -135,   -32,   -97,  -135,
     185,  -135
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -96
static const yytype_int16 yytable[] =
{
      48,    41,    80,    81,    63,   136,   108,     5,    49,    93,
      48,   141,   156,    95,    96,    97,   151,   137,    50,    27,
      28,    29,    30,   156,    13,   145,   115,    72,     1,    31,
      73,   119,    27,    28,    29,    30,    35,     7,    36,    37,
      38,    39,    31,   116,   183,   161,    73,   127,   128,   129,
     160,   130,   131,   132,   133,   -79,   187,   175,   183,   176,
      35,     6,    36,    37,    38,    39,   174,   -27,    62,    59,
      35,    40,    36,    37,    38,    39,    60,    74,    15,    61,
      11,   195,    78,    35,    16,    36,    37,    38,    39,   200,
     154,   193,    50,   139,    17,    40,    12,    35,   162,    36,
      37,    38,    39,    84,    19,    40,    65,    48,   109,    66,
      84,    18,    67,    63,    22,   177,   190,   110,    40,    48,
      23,   180,    20,   -95,    68,    69,    85,    86,    87,   189,
       1,     7,    40,    85,    86,   143,    99,   100,   101,   102,
     103,   104,    60,   105,   106,    61,    59,    48,    41,    63,
      21,   123,    24,    98,    26,    48,    99,   100,   101,   102,
     103,   104,    25,   105,   106,    99,   100,   101,   102,   103,
     104,   142,   105,   106,    99,   100,   101,   102,   103,   104,
     182,   105,   106,    57,    54,    55,   107,    99,   100,   101,
     102,   103,   104,   148,   105,   106,    58,   149,    56,   138,
      99,   100,   101,   102,   103,   104,    64,   105,   106,    82,
     117,    99,   100,   101,   102,   103,   104,    92,   105,   106,
      94,   118,    99,   100,   101,   102,   103,   104,    50,   105,
     106,   -91,   125,    99,   100,   101,   102,   103,   104,   114,
     105,   106,   120,   166,    99,   100,   101,   102,   103,   104,
     122,   105,   106,   121,   188,    99,   100,   101,   102,   103,
     104,   124,   105,   106,   126,   196,    27,    28,    29,    30,
      99,   100,   101,   102,   103,   104,    31,   105,   106,   110,
     139,   147,   146,   150,   152,   155,   163,   168,   164,   170,
     167,   172,   173,   199,   178,   181,   192,   191,     8,    14,
     179,    79,   134,   198,   197,   169,   144,     0,     0,    83
};

static const yytype_int16 yycheck[] =
{
      32,    32,    54,    55,    42,   109,    73,    29,    32,    61,
      42,   118,   146,    65,    66,    67,   139,   114,    42,     3,
       4,     5,     6,   157,     4,   122,    78,    36,    16,    13,
      39,    83,     3,     4,     5,     6,     7,    17,     9,    10,
      11,    12,    13,    36,   178,   149,    39,    99,   100,   101,
     147,   103,   104,   105,   106,    39,   179,   164,   192,   166,
       7,     0,     9,    10,    11,    12,     7,    30,    15,    30,
       7,    42,     9,    10,    11,    12,    37,    40,    23,    40,
      42,   188,    32,     7,    29,     9,    10,    11,    12,   196,
     142,    15,    42,    34,    42,    42,    18,     7,    35,     9,
      10,    11,    12,    19,    42,    42,    24,   139,    34,    27,
      19,    14,    30,   151,    37,   167,   183,    43,    42,   151,
      31,   173,    36,    39,    42,    43,    42,    43,    44,   181,
      16,    17,    42,    42,    43,    44,    21,    22,    23,    24,
      25,    26,    37,    28,    29,    40,    30,   179,   179,   187,
      30,    36,    42,    37,    29,   187,    21,    22,    23,    24,
      25,    26,    34,    28,    29,    21,    22,    23,    24,    25,
      26,    36,    28,    29,    21,    22,    23,    24,    25,    26,
      36,    28,    29,    36,    30,    30,    33,    21,    22,    23,
      24,    25,    26,    35,    28,    29,    36,    39,    30,    33,
      21,    22,    23,    24,    25,    26,    36,    28,    29,    42,
      31,    21,    22,    23,    24,    25,    26,    20,    28,    29,
      43,    31,    21,    22,    23,    24,    25,    26,    42,    28,
      29,    39,    31,    21,    22,    23,    24,    25,    26,    30,
      28,    29,    31,    31,    21,    22,    23,    24,    25,    26,
      30,    28,    29,    39,    31,    21,    22,    23,    24,    25,
      26,    36,    28,    29,    20,    31,     3,     4,     5,     6,
      21,    22,    23,    24,    25,    26,    13,    28,    29,    43,
      34,    30,    35,    31,     8,    31,     7,    42,     8,    34,
      40,    31,    30,    35,    30,    30,    39,    31,     3,     9,
     170,    53,   108,    36,   192,   157,   121,    -1,    -1,    56
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,    46,    47,    48,    29,     0,    17,    48,    49,
      50,    42,    18,     4,    50,    23,    29,    42,    14,    42,
      36,    30,    37,    31,    42,    34,    29,     3,     4,     5,
       6,    13,    51,    52,    53,     7,     9,    10,    11,    12,
      42,    52,    63,    64,    65,    68,    69,    72,    82,    32,
      42,    54,    61,    62,    30,    30,    30,    36,    36,    30,
      37,    40,    15,    64,    36,    24,    27,    30,    42,    43,
      73,    82,    36,    39,    40,    55,    58,    59,    32,    54,
      73,    73,    42,    72,    19,    42,    43,    44,    83,    84,
      85,    86,    20,    73,    43,    73,    73,    73,    37,    21,
      22,    23,    24,    25,    26,    28,    29,    33,    61,    34,
      43,    56,    57,    71,    30,    73,    36,    31,    31,    73,
      31,    39,    30,    36,    36,    31,    20,    73,    73,    73,
      73,    73,    73,    73,    55,    60,    71,    83,    33,    34,
      70,    70,    36,    44,    85,    83,    35,    30,    35,    39,
      31,    63,     8,    66,    73,    31,    53,    74,    75,    76,
      83,    71,    35,     7,     8,    67,    31,    40,    42,    75,
      34,    80,    31,    30,     7,    70,    70,    73,    30,    51,
      73,    30,    36,    53,    77,    78,    79,    63,    31,    73,
      61,    31,    39,    15,    81,    70,    31,    79,    36,    35,
      70
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 6:

/* Line 1455 of yacc.c  */
#line 44 "synt.y"
    {if(strcmp((yyvsp[(3) - (8)].var_name),"opencv2")==0)printf("INCLUDED OPENCV!\n"); opencv = 1;;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 50 "synt.y"
    {typename = "NONE"; array = 0;;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 51 "synt.y"
    {array = 0;;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 53 "synt.y"
    {typename = strdup(yylval.var_name);;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 54 "synt.y"
    {typename = strdup(yylval.var_name);;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 54 "synt.y"
    {typename = strdup(yylval.var_name);;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 55 "synt.y"
    {typename = strdup(yylval.var_name); array=1;;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 55 "synt.y"
    {typename = strdup(yylval.var_name);;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 61 "synt.y"
    {typename = "NONE";;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 61 "synt.y"
    {if(opencv == 0){ printf("ERROR MISSING OPENCV INCLUSION!\n"); yyerror();};}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 65 "synt.y"
    {
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
;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 97 "synt.y"
    { array=1;;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 98 "synt.y"
    { array=1;;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 121 "synt.y"
    {
if(isDeclared((yyvsp[(1) - (4)].var_name) , lineno) == 1) yyerror();

ajour_quad(qc, 1, (yyvsp[(1) - (4)].var_name));
ajour_quad(qc, 0, "=");
qc++;
;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 129 "synt.y"
    {if(isDeclared((yyvsp[(1) - (9)].var_name) , lineno) == 1) yyerror();;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 132 "synt.y"
    {ajour_quad(qc, 0, "+"); ajour_quad(qc, 2, "temp"); qc++;;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 133 "synt.y"
    {qc++;ajour_quad(qc, 0, "*"); ajour_quad(qc, 2, "temp"); qc++;;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 134 "synt.y"
    {qc++;ajour_quad(qc, 0, "/"); ajour_quad(qc, 2, "temp"); qc++;;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 135 "synt.y"
    {qc++;ajour_quad(qc, 0, "++");;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 137 "synt.y"
    {ajour_quad(qc, 0, "||");qc++;;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 138 "synt.y"
    {ajour_quad(qc, 0, "&&");qc++;;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 139 "synt.y"
    {ajour_quad(qc, 0, "!");qc++;;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 140 "synt.y"
    {ajour_quad(qc, 0, "==");qc++;;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 143 "synt.y"
    {if(isDeclared((yyvsp[(1) - (1)].var_name) , lineno) == 1) yyerror(); ajour_quad(qc, 1, (yyvsp[(1) - (1)].var_name));qc++;;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 144 "synt.y"
    {if(isDeclared((yyvsp[(1) - (6)].var_name) , lineno) == 1) yyerror();ajour_quad(qc, 1, (yyvsp[(1) - (6)].var_name));;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 145 "synt.y"
    {int num = (yyvsp[(1) - (1)].integer); char str[20]; sprintf(str, "%d", num); ajour_quad(qc, 2, str);;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 152 "synt.y"
    {
    printf("FUNCTION %s ", (yyvsp[(2) - (5)].var_name));
    printf("%s \n", typename);
    int hashval = hash((yyvsp[(2) - (5)].var_name));
    list_t *l = search((yyvsp[(2) - (5)].var_name));
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

;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 193 "synt.y"
    {if(isDeclared((yyvsp[(1) - (1)].var_name) , lineno) == 1) yyerror();;}
    break;



/* Line 1455 of yacc.c  */
#line 1854 "synt.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 200 "synt.y"

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

