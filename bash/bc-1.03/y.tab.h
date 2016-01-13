/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NEWLINE = 258,
    AND = 259,
    OR = 260,
    NOT = 261,
    STRING = 262,
    NAME = 263,
    NUMBER = 264,
    MUL_OP = 265,
    ASSIGN_OP = 266,
    REL_OP = 267,
    INCR_DECR = 268,
    Define = 269,
    Break = 270,
    Quit = 271,
    Length = 272,
    Return = 273,
    For = 274,
    If = 275,
    While = 276,
    Sqrt = 277,
    Else = 278,
    Scale = 279,
    Ibase = 280,
    Obase = 281,
    Auto = 282,
    Read = 283,
    Warranty = 284,
    Halt = 285,
    Last = 286,
    Continue = 287,
    Print = 288,
    Limits = 289,
    UNARY_MINUS = 290
  };
#endif
/* Tokens.  */
#define NEWLINE 258
#define AND 259
#define OR 260
#define NOT 261
#define STRING 262
#define NAME 263
#define NUMBER 264
#define MUL_OP 265
#define ASSIGN_OP 266
#define REL_OP 267
#define INCR_DECR 268
#define Define 269
#define Break 270
#define Quit 271
#define Length 272
#define Return 273
#define For 274
#define If 275
#define While 276
#define Sqrt 277
#define Else 278
#define Scale 279
#define Ibase 280
#define Obase 281
#define Auto 282
#define Read 283
#define Warranty 284
#define Halt 285
#define Last 286
#define Continue 287
#define Print 288
#define Limits 289
#define UNARY_MINUS 290

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 38 "bc.y" /* yacc.c:1909  */

	char	 *s_value;
	char	  c_value;
	int	  i_value;
	arg_list *a_value;
       

#line 132 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
