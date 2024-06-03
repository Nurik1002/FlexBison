/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    NUM = 259,                     /* NUM  */
    lparen = 260,                  /* lparen  */
    rparen = 261,                  /* rparen  */
    functype = 262,                /* functype  */
    freturn = 263,                 /* freturn  */
    cif = 264,                     /* cif  */
    celse = 265,                   /* celse  */
    dqual = 266,                   /* dqual  */
    nequal = 267,                  /* nequal  */
    percent = 268,                 /* percent  */
    lessequal = 269,               /* lessequal  */
    cand = 270,                    /* cand  */
    cor = 271,                     /* cor  */
    ctrue = 272,                   /* ctrue  */
    cfalse = 273,                  /* cfalse  */
    plus = 274,                    /* plus  */
    celif = 275,                   /* celif  */
    ravno = 276,                   /* ravno  */
    less = 277,                    /* less  */
    delenie = 278,                 /* delenie  */
    add = 279,                     /* add  */
    cprint = 280,                  /* cprint  */
    cint = 281,                    /* cint  */
    cinput = 282                   /* cinput  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENTIFIER 258
#define NUM 259
#define lparen 260
#define rparen 261
#define functype 262
#define freturn 263
#define cif 264
#define celse 265
#define dqual 266
#define nequal 267
#define percent 268
#define lessequal 269
#define cand 270
#define cor 271
#define ctrue 272
#define cfalse 273
#define plus 274
#define celif 275
#define ravno 276
#define less 277
#define delenie 278
#define add 279
#define cprint 280
#define cint 281
#define cinput 282

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 10 "file.y"

    int num;
    char var[10];
    char code[1024];
    

#line 128 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
