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
/* "%code requires" blocks.  */
#line 12 "pro2.y"

    #include "node.h"

#line 53 "y.tab.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    DOCTYPE = 258,                 /* DOCTYPE  */
    HTML_OPEN = 259,               /* HTML_OPEN  */
    HTML_CLOSE = 260,              /* HTML_CLOSE  */
    HEAD_OPEN = 261,               /* HEAD_OPEN  */
    HEAD_CLOSE = 262,              /* HEAD_CLOSE  */
    TITLE_OPEN = 263,              /* TITLE_OPEN  */
    TITLE_CLOSE = 264,             /* TITLE_CLOSE  */
    BODY_OPEN = 265,               /* BODY_OPEN  */
    BODY_CLOSE = 266,              /* BODY_CLOSE  */
    P_CLOSE = 267,                 /* P_CLOSE  */
    DIV_CLOSE = 268,               /* DIV_CLOSE  */
    H1_CLOSE = 269,                /* H1_CLOSE  */
    META = 270,                    /* META  */
    IMG = 271,                     /* IMG  */
    COMMENT = 272,                 /* COMMENT  */
    STYLE_OPEN = 273,              /* STYLE_OPEN  */
    STYLE_CLOSE = 274,             /* STYLE_CLOSE  */
    TABLE_OPEN = 275,              /* TABLE_OPEN  */
    TABLE_CLOSE = 276,             /* TABLE_CLOSE  */
    TR_OPEN = 277,                 /* TR_OPEN  */
    TR_CLOSE = 278,                /* TR_CLOSE  */
    TH_OPEN = 279,                 /* TH_OPEN  */
    TH_CLOSE = 280,                /* TH_CLOSE  */
    TD_OPEN = 281,                 /* TD_OPEN  */
    TD_CLOSE = 282,                /* TD_CLOSE  */
    UL_OPEN = 283,                 /* UL_OPEN  */
    UL_CLOSE = 284,                /* UL_CLOSE  */
    OL_OPEN = 285,                 /* OL_OPEN  */
    OL_CLOSE = 286,                /* OL_CLOSE  */
    LI_OPEN = 287,                 /* LI_OPEN  */
    LI_CLOSE = 288,                /* LI_CLOSE  */
    TEXT = 289,                    /* TEXT  */
    INLINE_CSS_P = 290,            /* INLINE_CSS_P  */
    INLINE_CSS_DIV = 291,          /* INLINE_CSS_DIV  */
    INLINE_CSS_H1 = 292            /* INLINE_CSS_H1  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define DOCTYPE 258
#define HTML_OPEN 259
#define HTML_CLOSE 260
#define HEAD_OPEN 261
#define HEAD_CLOSE 262
#define TITLE_OPEN 263
#define TITLE_CLOSE 264
#define BODY_OPEN 265
#define BODY_CLOSE 266
#define P_CLOSE 267
#define DIV_CLOSE 268
#define H1_CLOSE 269
#define META 270
#define IMG 271
#define COMMENT 272
#define STYLE_OPEN 273
#define STYLE_CLOSE 274
#define TABLE_OPEN 275
#define TABLE_CLOSE 276
#define TR_OPEN 277
#define TR_CLOSE 278
#define TH_OPEN 279
#define TH_CLOSE 280
#define TD_OPEN 281
#define TD_CLOSE 282
#define UL_OPEN 283
#define UL_CLOSE 284
#define OL_OPEN 285
#define OL_CLOSE 286
#define LI_OPEN 287
#define LI_CLOSE 288
#define TEXT 289
#define INLINE_CSS_P 290
#define INLINE_CSS_DIV 291
#define INLINE_CSS_H1 292

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "pro2.y"

    char *str;
    Node *node;

#line 152 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
