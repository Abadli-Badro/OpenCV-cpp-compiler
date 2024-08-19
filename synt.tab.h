
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 25 "synt.y"

	int integer;
	char* var_name;
	char* var_type;




/* Line 1676 of yacc.c  */
#line 105 "synt.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


