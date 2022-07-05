/* A Bison parser, made by GNU Bison 3.7.5.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    TOKEN_BOOLEANTYPE = 258,       /* TOKEN_BOOLEANTYPE  */
    TOKEN_BREAKSTMT = 259,         /* TOKEN_BREAKSTMT  */
    TOKEN_CALLOUT = 260,           /* TOKEN_CALLOUT  */
    TOKEN_CLASS = 261,             /* TOKEN_CLASS  */
    TOKEN_CONTINUESTMT = 262,      /* TOKEN_CONTINUESTMT  */
    TOKEN_ELSECONDITION = 263,     /* TOKEN_ELSECONDITION  */
    TOKEN_LOOP = 264,              /* TOKEN_LOOP  */
    TOKEN_IFCONDITION = 265,       /* TOKEN_IFCONDITION  */
    TOKEN_INTTYPE = 266,           /* TOKEN_INTTYPE  */
    TOKEN_RETURN = 267,            /* TOKEN_RETURN  */
    TOKEN_VOIDTYPE = 268,          /* TOKEN_VOIDTYPE  */
    TOKEN_PROGRAMCLASS = 269,      /* TOKEN_PROGRAMCLASS  */
    TOKEN_MAINFUNC = 270,          /* TOKEN_MAINFUNC  */
    TOKEN_ID = 271,                /* TOKEN_ID  */
    TOKEN_ASSIGNOP = 272,          /* TOKEN_ASSIGNOP  */
    TOKEN_MINUSASSIGNOP = 273,     /* TOKEN_MINUSASSIGNOP  */
    TOKEN_PLUSASSIGNOP = 274,      /* TOKEN_PLUSASSIGNOP  */
    TOKEN_LOGICOP = 275,           /* TOKEN_LOGICOP  */
    TOKEN_EQUALITYOP = 276,        /* TOKEN_EQUALITYOP  */
    TOKEN_NONEQUALITYOP = 277,     /* TOKEN_NONEQUALITYOP  */
    TOKEN_LEQOP = 278,             /* TOKEN_LEQOP  */
    TOKEN_GEQOP = 279,             /* TOKEN_GEQOP  */
    TOKEN_LESSOP = 280,            /* TOKEN_LESSOP  */
    TOKEN_GREATEROP = 281,         /* TOKEN_GREATEROP  */
    TOKEN_ANDOP = 282,             /* TOKEN_ANDOP  */
    TOKEN_OROP = 283,              /* TOKEN_OROP  */
    TOKEN_MODULSOP = 284,          /* TOKEN_MODULSOP  */
    TOKEN_DIVISIONOP = 285,        /* TOKEN_DIVISIONOP  */
    TOKEN_MULTIPLEOP = 286,        /* TOKEN_MULTIPLEOP  */
    TOKEN_MINUSOP = 287,           /* TOKEN_MINUSOP  */
    TOKEN_PLUSOP = 288,            /* TOKEN_PLUSOP  */
    TOKEN_LCB = 289,               /* TOKEN_LCB  */
    TOKEN_RCB = 290,               /* TOKEN_RCB  */
    TOKEN_LB = 291,                /* TOKEN_LB  */
    TOKEN_RB = 292,                /* TOKEN_RB  */
    TOKEN_LP = 293,                /* TOKEN_LP  */
    TOKEN_RP = 294,                /* TOKEN_RP  */
    TOKEN_SEMICOLON = 295,         /* TOKEN_SEMICOLON  */
    TOKEN_COMMA = 296,             /* TOKEN_COMMA  */
    TOKEN_STRINGCONST = 297,       /* TOKEN_STRINGCONST  */
    TOKEN_CHARCONST = 298,         /* TOKEN_CHARCONST  */
    TOKEN_HEXADECIMALCONST = 299,  /* TOKEN_HEXADECIMALCONST  */
    TOKEN_DECIMALCONST = 300,      /* TOKEN_DECIMALCONST  */
    TOKEN_BOOLEANCONST = 301       /* TOKEN_BOOLEANCONST  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 27 "parser.y"

  int number;
  char* str;
  struct var *var;
  struct func *func;
  struct expression *expression;
  struct loc *loc;
  struct argument *argument;
  vector<string> *types;
  vector<struct argument> *arguments;

#line 122 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
