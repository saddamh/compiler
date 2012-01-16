
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
     DIGIT = 258,
     VARIABLE = 259,
     READ = 260,
     WRITE = 261,
     BGIN = 262,
     END = 263,
     DECL = 264,
     ENDDECL = 265,
     INTEGER = 266,
     AND = 267,
     OR = 268,
     NOT = 269,
     GT = 270,
     GE = 271,
     LT = 272,
     LE = 273,
     EQ = 274,
     NE = 275,
     FALS = 276,
     TRU = 277
   };
#endif
/* Tokens.  */
#define DIGIT 258
#define VARIABLE 259
#define READ 260
#define WRITE 261
#define BGIN 262
#define END 263
#define DECL 264
#define ENDDECL 265
#define INTEGER 266
#define AND 267
#define OR 268
#define NOT 269
#define GT 270
#define GE 271
#define LT 272
#define LE 273
#define EQ 274
#define NE 275
#define FALS 276
#define TRU 277




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 11 "calc.y"

	int Num;
	char ch;
	struct tnode* Node;



/* Line 1676 of yacc.c  */
#line 104 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


