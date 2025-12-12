/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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

#ifndef YY_YY_BISON_TAB_H_INCLUDED
# define YY_YY_BISON_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     CALLHERCULES = 258,
     INCLUDE = 259,
     INTVAL = 260,
     FLOATVAL = 261,
     CHARVAL = 262,
     STRVAL = 263,
     BOOLVAL = 264,
     VARIABLE = 265,
     INT_TYPE = 266,
     FLOAT_TYPE = 267,
     STRING_TYPE = 268,
     CHAR_TYPE = 269,
     BOOL_TYPE = 270,
     VOID_TYPE = 271,
     IF = 272,
     ELSEIF = 273,
     ELSE = 274,
     RET = 275,
     CALL = 276,
     LARC = 277,
     RARC = 278,
     LBRACE = 279,
     RBRACE = 280,
     WHILE = 281,
     FOR = 282,
     PRINT = 283,
     PRECYCLE = 284,
     POWER = 285,
     GE = 286,
     LE = 287,
     EQ = 288,
     NE = 289,
     GT = 290,
     LT = 291,
     ASSIGN = 292,
     ADD = 293,
     SUB = 294,
     MUL = 295,
     DIV = 296,
     SEPARATOR = 297,
     ENUMERATOR = 298,
     COLON = 299,
     SPELL = 300,
     RETURN = 301,
     STAFF = 302,
     LEARNSPELL = 303,
     UNKNOWN = 304
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 14 "BISON.y"

	char* str;


/* Line 2058 of yacc.c  */
#line 111 "BISON.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_BISON_TAB_H_INCLUDED  */
