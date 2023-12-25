
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
     INT = 258,
     INDENT = 259,
     DEDENT = 260,
     INDENT_ERROR = 261,
     NUMBER = 262,
     FLOAT = 263,
     DEF = 264,
     STRING = 265,
     ID = 266,
     MAIN = 267,
     TRUE_TOKEN = 268,
     FALSE_TOKEN = 269,
     NONE = 270,
     AND = 271,
     INT_KEYWORD = 272,
     FLOAT_KEYWORD = 273,
     STRING_KEYWORD = 274,
     BOOL_KEYWORD = 275,
     LIST_KEYWORD = 276,
     AS = 277,
     ASSERT = 278,
     ASYNC = 279,
     AWAIT = 280,
     BREAK = 281,
     CLASS = 282,
     CONTINUE = 283,
     DEL = 284,
     INPUT = 285,
     ELIF = 286,
     ELSE = 287,
     EXCEPT = 288,
     FINALLY = 289,
     FOR = 290,
     FROM = 291,
     GLOBAL = 292,
     IF = 293,
     PASS = 294,
     RAISE = 295,
     RETURN = 296,
     TRY = 297,
     WHILE = 298,
     YIELD = 299,
     CASE = 300,
     PRINT = 301,
     WITH = 302,
     MATCH = 303,
     DOT = 304,
     COMMENT = 305,
     RANGE = 306,
     IMPORT = 307,
     IN = 308,
     IS = 309,
     LAMDA = 310,
     NONLOCAL = 311,
     NOT = 312,
     NULL_TOKEN = 313,
     OR = 314,
     PLUS = 315,
     NEWLINE = 316,
     GREATER_THAN = 317,
     LESS_THAN = 318,
     LESS_THAN_OR_EQUAL = 319,
     GREATER_THAN_OR_EQUAL = 320,
     AT = 321,
     DOUBLE_STAR = 322,
     ARROW = 323,
     NOT_EQUAL = 324,
     EQUAL = 325,
     FLOOR_DIVISION = 326,
     MODULUS = 327,
     EXPONENTIATION = 328,
     LEFT_BRACKET = 329,
     RIGHT_BRACKET = 330,
     LEFT_CURLY_BRACE = 331,
     RIGHT_CURLY_BRACE = 332,
     PLUS_ASSIGN = 333,
     MINUS_ASSIGN = 334,
     TIMES_ASSIGN = 335,
     DIVIDE_ASSIGN = 336,
     MODULO_ASSIGN = 337,
     POWER_ASSIGN = 338,
     AND_ASSIGN = 339,
     OR_ASSIGN = 340,
     XOR_ASSIGN = 341,
     LEFT_SHIFT_ASSIGN = 342,
     RIGHT_SHIFT_ASSIGN = 343,
     ASSIGN = 344,
     MINUS = 345,
     MULTIPLY = 346,
     DIVIDE = 347,
     COLON = 348,
     COMA = 349,
     LEFT_P = 350,
     RIGHT_P = 351
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 14 "parser.y"

     char* str_val;
         int int_val;
         float float_val;



/* Line 1676 of yacc.c  */
#line 156 "parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


