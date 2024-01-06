/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int yydebug=1;
void yyerror(const char *);
extern int yylex();


#line 77 "parser.cpp" /* yacc.c:339  */

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.hpp".  */
#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 11 "parser.y" /* yacc.c:355  */

      #include "python_ast_node.hpp"
      #include <iostream>
      #include <string>

#line 113 "parser.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 17 "parser.y" /* yacc.c:355  */

     char* str_val;
         int int_val;
         float float_val;
	     AstNode* astNode;
         IdentifierNode* idNode;
	int d;


#line 232 "parser.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 26 "parser.y" /* yacc.c:358  */

      extern int yylex();
      extern int yyparse();
      extern FILE *yyin;
      void yyerror(const char *);
      AstNode* root = NULL;
      int n_nodes = 0;

#line 255 "parser.cpp" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  117
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   938

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  107
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  99
/* YYNRULES -- Number of rules.  */
#define YYNRULES  288
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  455

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   351

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   100,     2,
       2,     2,    97,   104,     2,   105,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     101,     2,   102,     2,   103,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    99,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    98,     2,   106,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    78,    78,    79,    87,    91,    91,    99,   103,   110,
     115,   121,   122,   127,   128,   129,   130,   131,   132,   133,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   156,
     168,   180,   181,   184,   185,   186,   187,   188,   189,   192,
     193,   194,   198,   199,   200,   204,   209,   213,   220,   221,
     224,   231,   237,   238,   244,   245,   245,   247,   253,   254,
     257,   258,   262,   263,   267,   268,   269,   271,   273,   274,
     279,   280,   281,   284,   286,   288,   291,   292,   294,   295,
     297,   298,   299,   301,   302,   304,   305,   307,   308,   314,
     317,   322,   323,   324,   325,   325,   327,   328,   329,   333,
     334,   337,   338,   341,   342,   346,   347,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   364,   365,   369,
     370,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   390,   392,   393,   397,   398,   399,   400,   401,   404,
     405,   406,   407,   412,   412,   415,   419,   423,   424,   428,
     429,   430,   434,   436,   440,   441,   444,   449,   450,   450,
     452,   458,   459,   461,   463,   465,   468,   469,   473,   474,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   487,
     490,   491,   495,   496,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   515,   516,   517,   522,   523,   528,
     529,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   547,   548,   555,   556,   557,   564,   565,   575,
     579,   582,   583,   587,   591,   592,   597,   598,   603,   604,
     610,   611,   617,   618,   624,   625,   631,   632,   637,   638,
     639,   640,   641,   642,   643,   644,   645,   646,   650,   654,
     658,   662,   666,   670,   674,   678,   682,   686,   693,   694,
     700,   701,   706,   707,   712,   713,   714,   722,   723,   724,
     730,   731,   732,   733,   734,   735,   742,   743,   744,   745,
     751,   752,   757,   758,   759,   760,   761,   762,   763
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "INDENT", "DEDENT",
  "INDENT_ERROR", "NUMBER", "FLOAT", "DEF", "STRING", "ID", "MAIN",
  "TRUE_TOKEN", "FALSE_TOKEN", "NONE", "AND", "INT_KEYWORD",
  "FLOAT_KEYWORD", "STRING_KEYWORD", "BOOL_KEYWORD", "LIST_KEYWORD", "AS",
  "ASSERT", "ASYNC", "AWAIT", "BREAK", "CLASS", "CONTINUE", "DEL", "INPUT",
  "ELIF", "ELSE", "EXCEPT", "FINALLY", "FOR", "FROM", "GLOBAL", "IF",
  "PASS", "RAISE", "RETURN", "TRY", "WHILE", "YIELD", "CASE", "PRINT",
  "WITH", "MATCH", "DOT", "COMMENT", "RANGE", "IMPORT", "IN", "IS",
  "LAMDA", "NONLOCAL", "NOT", "NULL_TOKEN", "OR", "PLUS", "NEWLINE",
  "GREATER_THAN", "LESS_THAN", "LESS_THAN_OR_EQUAL",
  "GREATER_THAN_OR_EQUAL", "AT", "DOUBLE_STAR", "ARROW", "NOT_EQUAL",
  "EQUAL", "FLOOR_DIVISION", "MODULUS", "EXPONENTIATION", "LEFT_BRACKET",
  "RIGHT_BRACKET", "LEFT_CURLY_BRACE", "RIGHT_CURLY_BRACE", "PLUS_ASSIGN",
  "MINUS_ASSIGN", "TIMES_ASSIGN", "DIVIDE_ASSIGN", "MODULO_ASSIGN",
  "POWER_ASSIGN", "AND_ASSIGN", "OR_ASSIGN", "XOR_ASSIGN",
  "LEFT_SHIFT_ASSIGN", "RIGHT_SHIFT_ASSIGN", "ASSIGN", "MINUS", "MULTIPLY",
  "DIVIDE", "COLON", "COMA", "LEFT_P", "RIGHT_P", "'*'", "'|'", "'^'",
  "'&'", "'<'", "'>'", "'@'", "'+'", "'-'", "'~'", "$accept", "include",
  "block", "$@1", "stmts", "stmt", "simple_stmt", "compound_stmt",
  "function_def", "return_type", "types", "parameters",
  "default_parameters", "non_default_parameters", "default_parameter",
  "non_default_parameter", "function_call", "with_statement", "$@2",
  "with_statement_body", "with_body", "with_stmt_contents", "with_item",
  "inside_brackets", "try_stmt", "try1_stmt", "try2_stmt", "try3_stmt",
  "except_statement_plus_for_try1", "except_statement_plus_for_try2",
  "op_as", "op_expression_as", "op_finally", "while_statement",
  "for_statement", "$@3", "star_expressions", "star_expression",
  "for_block", "for_stmts", "for_stmt", "class_def", "id", "arguments",
  "args", "args_list", "$@4", "kwargs", "kwarg_list", "kwarg",
  "match_statement", "match_block", "case_statements", "case_statement",
  "if_statement", "$@5", "elif_statement", "else_statement", "if_block",
  "if_stmts", "if_stmt", "assignment", "single_assignment",
  "multi_assignment", "augmented_assignment", "targets", "target",
  "return_stmt", "yield_statement", "global_statement", "global_list",
  "nonlocal_statement", "nonlocal_list", "expressions", "expression",
  "disjunction", "conjunction", "inversion", "comparison",
  "compare_op_bitwise_or_pair", "eq_bitwise_or", "noteq_bitwise_or",
  "lte_bitwise_or", "lt_bitwise_or", "gte_bitwise_or", "gt_bitwise_or",
  "notin_bitwise_or", "in_bitwise_or", "isnot_bitwise_or", "is_bitwise_or",
  "bitwise_or", "bitwise_xor", "bitwise_and", "shift_expr", "sum", "term",
  "factor", "power", "atom", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,    42,   124,    94,
      38,    60,    62,    64,    43,    45,   126
};
# endif

#define YYPACT_NINF -342

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-342)))

#define YYTABLE_NINF -219

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     793,    24,   217,   165,  -342,    43,  -342,    12,    50,   527,
     542,    32,   527,   527,    12,   476,   527,    53,    12,   109,
     793,  -342,     7,  -342,   151,  -342,  -342,  -342,  -342,  -342,
    -342,  -342,  -342,  -342,  -342,    42,  -342,  -342,  -342,  -342,
    -342,  -342,    68,   -15,  -342,  -342,  -342,  -342,    60,   527,
     527,   527,   527,   527,   527,   527,   527,   527,   527,   527,
     527,   173,    12,   476,  -342,   370,  -342,     9,   142,  -342,
     111,  -342,  -342,  -342,  -342,  -342,  -342,  -342,   527,   605,
     605,   605,    33,   116,   194,  -342,  -342,   830,   118,   132,
     114,    73,    78,  -342,  -342,   167,   184,   157,  -342,   793,
     251,   192,    82,   157,    91,    15,   555,    11,  -342,   170,
    -342,    16,   243,   205,  -342,   174,    64,  -342,  -342,  -342,
    -342,  -342,   527,   527,    12,   258,   527,   527,   261,  -342,
    -342,  -342,  -342,  -342,  -342,  -342,  -342,  -342,  -342,  -342,
     177,   180,  -342,   186,    10,   136,   357,   392,    32,   188,
     420,   272,  -342,  -342,  -342,  -342,   818,   282,   203,   527,
     527,   527,   605,   564,   235,   605,   605,   605,   605,   605,
     605,   605,  -342,  -342,  -342,  -342,  -342,  -342,  -342,  -342,
    -342,  -342,  -342,   605,   605,   605,   605,   605,   605,   605,
     605,   605,   605,   605,   605,   527,   647,   793,   492,    32,
     259,   259,   843,   286,  -342,  -342,   105,   476,  -342,   555,
    -342,   527,    12,   288,  -342,   295,  -342,   157,   157,   142,
    -342,  -342,  -342,    87,   214,  -342,  -342,   219,   220,  -342,
     527,   527,   261,   505,    33,   222,   527,   527,   223,   225,
     224,  -342,  -342,    62,   221,   605,    82,   229,  -342,  -342,
    -342,   263,  -342,  -342,  -342,  -342,  -342,  -342,  -342,   713,
    -342,   266,   818,   527,    32,  -342,   300,    37,   194,  -342,
     242,   605,   242,   605,   242,   242,   242,   242,   242,   242,
     118,   132,   114,    73,    73,    78,    78,  -342,  -342,  -342,
    -342,  -342,  -342,  -342,  -342,   688,   527,    32,    79,  -342,
     310,   310,   121,   287,   291,   293,  -342,  -342,  -342,   315,
    -342,  -342,  -342,  -342,   294,   843,  -342,  -342,  -342,   253,
     262,   142,    42,  -342,   527,   314,   296,   261,   261,  -342,
    -342,   273,    82,   327,   527,  -342,  -342,  -342,  -342,    62,
     222,  -342,   372,   242,  -342,   505,  -342,  -342,  -342,  -342,
     738,    33,  -342,   338,   527,   242,   242,  -342,  -342,    79,
     344,   368,   297,  -342,    32,  -342,  -342,  -342,  -342,  -342,
    -342,  -342,  -342,   763,   360,   527,    54,   299,  -342,  -342,
    -342,  -342,  -342,  -342,  -342,   314,    32,  -342,  -342,  -342,
    -342,   296,  -342,   339,  -342,  -342,   302,  -342,  -342,   203,
     527,  -342,    27,   527,  -342,  -342,   527,  -342,  -342,    12,
    -342,  -342,   314,  -342,  -342,    32,   476,   384,  -342,   358,
      33,    32,  -342,    79,   142,  -342,  -342,    11,   115,   527,
     359,   365,   306,  -342,   390,    82,    33,  -342,   317,  -342,
      32,   305,  -342,   359,   365,    82,  -342,  -342,   374,   376,
      12,    14,   505,    82,  -342
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   216,     0,    13,     0,    14,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     7,     0,    10,    21,    19,    26,    25,    70,    71,
      72,    22,    23,    27,    24,    18,   154,    20,    11,   194,
     195,   196,     0,   212,    12,    15,    16,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     139,     0,     0,     0,   132,   134,   216,     0,   212,   221,
     220,   287,   288,   286,   285,   282,   283,   284,     0,     0,
       0,     0,     0,   229,   231,   233,   235,   237,   259,   261,
     263,   266,   269,   275,   279,   281,   285,   217,   226,     0,
       0,     0,     0,   219,     0,   285,     0,     0,    59,    60,
      63,     0,    65,     0,   224,   223,     0,     1,     8,    21,
       9,   155,     0,     0,     0,     0,     0,     0,    39,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
       0,   140,   143,     0,     0,     0,   285,   139,     0,   138,
       0,     0,   234,   276,   277,   278,     0,     0,   164,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   236,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    85,     0,
     164,   164,     0,     0,    89,   156,     0,     0,    54,     0,
     133,    67,     0,     0,   152,     0,   214,   199,   200,   213,
     215,   197,   198,    50,     0,    40,    41,    42,    47,    52,
       0,     0,    39,     0,     0,   285,     0,     0,     0,     0,
     146,   147,   131,     0,     0,     0,     0,    99,   102,   222,
     173,     0,   178,   177,   174,   175,   179,   176,   172,     0,
     168,     0,     0,     0,     0,   157,   160,     0,   230,   232,
     255,     0,   257,     0,   253,   251,   250,   252,   249,   248,
     258,   260,   262,   264,   265,   267,   268,   272,   273,   270,
     271,   274,   280,   227,     5,     0,     0,     0,    80,    75,
      87,    87,     0,     0,     0,     0,   115,   114,   112,     0,
     105,   116,   113,   111,     0,     0,    61,    58,    62,     0,
      68,    66,     0,   225,     0,     0,    31,     0,     0,   145,
     144,     0,     0,    57,     0,   151,   150,   135,   136,     0,
       0,   137,     0,   101,    91,     0,   171,   167,   169,   170,
       0,     0,   165,     0,     0,   256,   254,     6,     4,    80,
      76,     0,     0,    86,     0,    73,    74,   109,   110,   108,
     104,   106,   107,     0,     0,    67,     0,    48,    38,    33,
      34,    35,    36,    37,    51,     0,     0,    43,    44,    46,
      45,    31,    92,     0,   149,   148,     0,   100,   166,   164,
       0,   228,     0,    85,    77,    81,     0,    88,   103,     0,
      69,   153,     0,    32,    29,     0,     0,     0,   161,   163,
       0,     0,    78,    80,    64,    49,    30,     0,     0,     0,
       0,     0,     0,    56,     0,     0,     0,   159,     0,    79,
       0,     0,    93,     0,     0,     0,   162,    82,    98,     0,
       0,     0,     0,     0,    95
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -342,  -342,   -93,  -342,   -81,    -6,  -342,  -342,     8,    21,
    -314,   181,   -89,   -80,  -342,  -342,  -137,  -136,  -342,   -57,
     208,   311,   207,    44,  -132,  -342,  -342,  -342,    61,  -236,
    -331,  -342,   123,  -131,  -127,  -342,  -221,  -342,  -193,   107,
    -276,  -117,   421,  -342,   -13,  -342,  -342,   182,  -342,    90,
     -66,  -342,   110,   -25,   -65,  -342,  -341,  -179,   -90,   175,
    -229,   -56,  -342,  -342,  -342,    -2,    -5,  -342,  -342,  -342,
    -342,  -342,  -342,    25,    -9,   277,   278,   -46,  -342,  -342,
    -342,  -342,  -342,  -342,  -342,  -342,  -342,  -342,  -342,  -342,
     -86,   268,   257,   260,    72,    75,    86,  -342,  -342
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    19,   101,   357,    20,    21,    22,    23,   119,   386,
     384,   224,   225,   226,   227,   228,    25,    26,   393,   107,
     108,   109,   110,   319,    27,    28,    29,    30,   200,   201,
     363,   297,   365,    31,    32,   449,   246,   247,   204,   309,
     310,    33,   111,   148,   140,   141,   231,   239,   240,   241,
      34,   214,    35,    36,    37,   353,   265,   266,   158,   259,
     260,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      70,    47,   115,    97,   112,    83,    84,    85,    86,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
      87,    88,    89,    90,    91,    92,    93,    94,    95
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      82,    98,    68,   102,    98,    67,   145,   113,    24,   104,
     121,   205,   332,    68,   118,   156,   116,   208,   196,   251,
     252,   300,   301,    66,   253,   254,  -132,   210,   402,   255,
     348,    99,   152,   371,   125,    48,    99,   156,   103,   256,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   142,   149,   344,    64,   242,   142,    68,   418,   411,
     144,    69,   150,   233,   114,   305,   306,   452,   120,   354,
     307,   413,   157,   340,   126,   308,   270,   272,   127,   274,
     275,   276,   277,   278,   279,   311,   202,    14,   100,   437,
     257,   258,   432,   100,   157,    99,   160,   371,   425,    14,
     261,   361,   446,   124,   124,   207,   299,    18,   124,   117,
    -132,   211,   362,    98,    98,   269,   295,   221,   222,   219,
     421,   348,   251,   252,   397,   251,   252,   253,   254,   236,
     253,   254,   255,   187,   238,   255,   312,   313,   142,   392,
     125,   248,   256,   203,   333,   256,   314,   217,   218,   189,
     190,    -2,   100,   237,   159,   128,    62,   122,   124,   343,
     216,   123,   124,   188,   250,   153,   154,   155,    63,   191,
     192,   352,   305,   306,    61,   160,   324,   307,   305,   306,
     325,   193,   308,   307,   143,   355,   293,   356,   308,   298,
     118,   125,   311,   257,   258,   439,   257,   258,   311,   209,
      62,   316,   320,   261,   360,   151,   261,   321,   447,   434,
     161,   435,    63,   251,   252,   185,   186,   183,   253,   254,
     419,   329,   330,   255,   248,   198,   199,   335,   336,   234,
     207,   453,   184,   256,   263,   264,   305,   306,   387,   389,
     194,   307,   442,   312,   313,  -218,   308,   388,   390,   312,
     313,   195,   448,   314,   351,   197,   311,   283,   284,   314,
     454,   399,   285,   286,   209,   212,   213,   250,   215,   220,
     250,   407,   223,   229,   230,   287,   288,   289,   290,   291,
     292,   232,   243,   249,   257,   258,   262,   359,   273,   118,
     315,   264,   322,   414,   261,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,   323,   312,   313,   422,
     326,   334,    60,   327,   328,   377,   342,   314,   339,   337,
     370,   338,   426,   345,   346,   394,     2,   349,   431,   378,
     430,   379,   380,   381,   382,   383,   248,   433,  -158,   302,
     171,   303,     5,   304,   364,   401,   443,   444,   367,   374,
       7,   121,   368,     9,   369,   372,   375,    11,   250,   427,
    -133,  -133,    15,    16,   385,  -133,   320,  -133,  -133,   391,
    -133,  -133,  -133,    71,   -55,   396,   400,   403,    72,   405,
      73,   146,   409,    75,    76,    77,   416,   428,   406,   429,
     263,   420,   412,   441,   298,    71,   417,   423,   438,   440,
      72,   445,    73,   235,   424,    75,    76,    77,   296,   -94,
      18,   450,   415,   331,  -133,   317,   318,   206,  -133,   410,
     436,   404,   373,    71,   366,   341,    65,    78,    72,   395,
      73,    74,   376,    75,    76,    77,   267,   350,   268,   280,
     281,     0,     0,   248,   282,    68,     0,     0,   451,    78,
       0,  -133,  -133,     0,     0,     0,     0,     0,     0,   236,
       0,  -133,  -133,  -133,  -139,   147,     0,     0,     0,     0,
       0,   244,     0,     0,    79,    80,    81,    78,     0,    71,
       0,     0,     0,   237,    72,     0,    73,   105,     0,    75,
      76,    77,     0,     0,     0,    71,    79,    80,    81,     0,
      72,     0,    73,    74,     0,    75,    76,    77,    71,     0,
       0,     0,     0,    72,     0,    73,    74,   245,    75,    76,
      77,     0,     0,     0,    79,    80,    81,     0,     0,     0,
      71,     0,     0,    78,     0,    72,     0,    73,    74,     0,
      75,    76,    77,     0,     0,    71,     0,     0,     0,    78,
      72,     0,    73,    96,     0,    75,    76,    77,    71,     0,
       0,     0,    78,    72,     0,    73,   105,    71,    75,    76,
      77,   106,    72,     0,    73,    74,     0,    75,    76,    77,
      79,    80,    81,   296,    78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    80,    81,    78,
       0,     0,   245,     0,     0,     0,     0,     0,    71,    79,
      80,    81,    78,    72,     0,    73,    74,     0,    75,    76,
      77,   271,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    79,    80,    81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,    80,    81,     0,
       0,     0,   294,     0,     0,     0,     1,     0,     2,    79,
      80,    81,     0,     0,     0,     0,     0,     0,    79,    80,
      81,     3,     0,     4,     5,     6,     0,     0,     0,     0,
       0,     0,     7,     0,     8,     9,     0,     0,    10,    11,
      12,    13,    14,   358,    15,    16,     0,     1,     0,     2,
       0,     0,     0,    17,     0,     0,     0,     0,     0,    79,
      80,    81,     3,     0,     4,     5,     6,     0,   347,     0,
       0,     0,     1,     7,     2,     8,     9,     0,     0,    10,
      11,    12,    13,    14,     0,    15,    16,     3,     0,     0,
       5,     0,    18,   398,    17,     0,     0,     1,     7,     2,
       0,     9,     0,     0,     0,    11,    12,     0,     0,     0,
      15,    16,     3,     0,     0,     5,     0,     0,   408,     0,
       0,     0,     0,     7,     2,     0,     9,     0,     0,     0,
      11,    12,     0,    18,     0,    15,    16,   302,     0,   303,
       5,   304,     0,     0,     0,     0,     0,     0,     7,     0,
       0,     9,     1,     0,     2,    11,     0,     0,    18,     0,
      15,    16,     0,     0,     0,     0,     0,     3,     0,     4,
       5,     6,     0,     0,     0,     0,     0,     1,     7,     2,
       8,     9,     0,    18,    10,    11,    12,    13,    14,     0,
      15,    16,     3,     0,     0,     5,     0,     0,     0,    17,
       0,     0,     0,     7,     2,     0,     9,     0,    18,     0,
      11,    12,     0,     0,     0,    15,    16,   302,     0,   303,
       5,   304,     0,     0,     0,     0,     0,     0,     7,     0,
       0,     9,     0,   162,   163,    11,     0,   164,    18,     0,
      15,    16,   165,   166,   167,   168,     0,     0,     0,   169,
     170,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   171,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    18
};

static const yytype_int16 yycheck[] =
{
       9,    10,     7,    12,    13,     7,    63,    16,     0,    14,
      35,   104,   233,    18,    20,     4,    18,   107,    99,   156,
     156,   200,   201,    11,   156,   156,    11,    11,   359,   156,
     259,     4,    78,   309,    49,    11,     4,     4,    13,   156,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    65,   246,    11,   148,    65,    62,   399,     5,
      62,    11,    53,    53,    11,   202,   202,    53,    61,    32,
     202,   385,    61,    11,    89,   202,   162,   163,    93,   165,
     166,   167,   168,   169,   170,   202,     4,    45,    61,   430,
     156,   156,   423,    61,    61,     4,    59,   373,   412,    45,
     156,    22,   443,    94,    94,    94,   199,    95,    94,     0,
      95,    95,    33,   122,   123,   161,   197,   126,   127,   124,
      93,   350,   259,   259,   345,   262,   262,   259,   259,    67,
     262,   262,   259,    60,   147,   262,   202,   202,   147,   332,
      49,   150,   259,    61,   234,   262,   202,   122,   123,    71,
      72,     0,    61,    91,    38,    95,    35,    89,    94,   245,
      96,    93,    94,    90,   156,    79,    80,    81,    47,    91,
      92,   264,   309,   309,     9,    59,    89,   309,   315,   315,
      93,   103,   309,   315,    11,   271,   195,   273,   315,   198,
     196,    49,   309,   259,   259,   431,   262,   262,   315,    94,
      35,    96,   211,   259,   297,    94,   262,   212,   444,    94,
      16,    96,    47,   350,   350,   101,   102,    99,   350,   350,
     399,   230,   231,   350,   233,    33,    34,   236,   237,    93,
      94,   452,   100,   350,    31,    32,   373,   373,   327,   328,
      73,   373,   435,   309,   309,    61,   373,   327,   328,   315,
     315,    94,   445,   309,   263,     4,   373,   185,   186,   315,
     453,   351,   187,   188,    94,    22,    61,   259,    94,    11,
     262,   364,    11,    96,    94,   189,   190,   191,   192,   193,
     194,    95,    94,    11,   350,   350,     4,   296,    53,   295,
       4,    32,     4,   386,   350,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    11,   373,   373,   402,
      96,    89,    95,    94,    94,   324,    95,   373,    94,    96,
       5,    96,   415,    94,    61,   334,    11,    61,   421,    15,
     420,    17,    18,    19,    20,    21,   345,   427,    38,    24,
      98,    26,    27,    28,    34,   354,   436,   440,    61,    96,
      35,   376,    61,    38,    61,    61,    94,    42,   350,   416,
       3,     4,    47,    48,    68,     8,   375,    10,    11,    96,
      13,    14,    15,     3,    47,     3,    38,    33,     8,    11,
      10,    11,    22,    13,    14,    15,    47,     3,    91,    31,
      31,   400,    93,     3,   403,     3,    94,   406,    33,    93,
       8,    96,    10,    11,   409,    13,    14,    15,    91,    35,
      95,    35,   391,   232,    57,   207,   209,   106,    61,   375,
     429,   360,   315,     3,   301,   243,     5,    57,     8,   339,
      10,    11,   322,    13,    14,    15,   159,   262,   160,   171,
     183,    -1,    -1,   452,   184,   450,    -1,    -1,   450,    57,
      -1,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,   104,   105,   106,    94,    95,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,   104,   105,   106,    57,    -1,     3,
      -1,    -1,    -1,    91,     8,    -1,    10,    11,    -1,    13,
      14,    15,    -1,    -1,    -1,     3,   104,   105,   106,    -1,
       8,    -1,    10,    11,    -1,    13,    14,    15,     3,    -1,
      -1,    -1,    -1,     8,    -1,    10,    11,    97,    13,    14,
      15,    -1,    -1,    -1,   104,   105,   106,    -1,    -1,    -1,
       3,    -1,    -1,    57,    -1,     8,    -1,    10,    11,    -1,
      13,    14,    15,    -1,    -1,     3,    -1,    -1,    -1,    57,
       8,    -1,    10,    11,    -1,    13,    14,    15,     3,    -1,
      -1,    -1,    57,     8,    -1,    10,    11,     3,    13,    14,
      15,    95,     8,    -1,    10,    11,    -1,    13,    14,    15,
     104,   105,   106,    91,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,    57,
      -1,    -1,    97,    -1,    -1,    -1,    -1,    -1,     3,   104,
     105,   106,    57,     8,    -1,    10,    11,    -1,    13,    14,
      15,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,    -1,
      -1,    -1,     5,    -1,    -1,    -1,     9,    -1,    11,   104,
     105,   106,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,
     106,    24,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    37,    38,    -1,    -1,    41,    42,
      43,    44,    45,     5,    47,    48,    -1,     9,    -1,    11,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,   104,
     105,   106,    24,    -1,    26,    27,    28,    -1,     5,    -1,
      -1,    -1,     9,    35,    11,    37,    38,    -1,    -1,    41,
      42,    43,    44,    45,    -1,    47,    48,    24,    -1,    -1,
      27,    -1,    95,     5,    56,    -1,    -1,     9,    35,    11,
      -1,    38,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      47,    48,    24,    -1,    -1,    27,    -1,    -1,     5,    -1,
      -1,    -1,    -1,    35,    11,    -1,    38,    -1,    -1,    -1,
      42,    43,    -1,    95,    -1,    47,    48,    24,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    38,     9,    -1,    11,    42,    -1,    -1,    95,    -1,
      47,    48,    -1,    -1,    -1,    -1,    -1,    24,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,     9,    35,    11,
      37,    38,    -1,    95,    41,    42,    43,    44,    45,    -1,
      47,    48,    24,    -1,    -1,    27,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    35,    11,    -1,    38,    -1,    95,    -1,
      42,    43,    -1,    -1,    -1,    47,    48,    24,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    38,    -1,    53,    54,    42,    -1,    57,    95,    -1,
      47,    48,    62,    63,    64,    65,    -1,    -1,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    11,    24,    26,    27,    28,    35,    37,    38,
      41,    42,    43,    44,    45,    47,    48,    56,    95,   108,
     111,   112,   113,   114,   115,   123,   124,   131,   132,   133,
     134,   140,   141,   148,   157,   159,   160,   161,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   178,    11,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      95,     9,    35,    47,    11,   149,    11,   172,   173,    11,
     177,     3,     8,    10,    11,    13,    14,    15,    57,   104,
     105,   106,   181,   182,   183,   184,   185,   197,   198,   199,
     200,   201,   202,   203,   204,   205,    11,   180,   181,     4,
      61,   109,   181,   180,   173,    11,    95,   126,   127,   128,
     129,   149,   181,   181,    11,   179,   172,     0,   112,   115,
      61,   160,    89,    93,    94,    49,    89,    93,    95,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     151,   152,   181,    11,   172,   126,    11,    95,   150,   151,
      53,    94,   184,   203,   203,   203,     4,    61,   165,    38,
      59,    16,    53,    54,    57,    62,    63,    64,    65,    69,
      70,    98,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,    99,   100,   101,   102,    60,    90,    71,
      72,    91,    92,   103,    73,    94,   111,     4,    33,    34,
     135,   136,     4,    61,   145,   109,   128,    94,   165,    94,
      11,    95,    22,    61,   158,    94,    96,   180,   180,   173,
      11,   181,   181,    11,   118,   119,   120,   121,   122,    96,
      94,   153,    95,    53,    93,    11,    67,    91,   151,   154,
     155,   156,   109,    94,    51,    97,   143,   144,   181,    11,
     115,   123,   124,   131,   140,   141,   148,   157,   161,   166,
     167,   168,     4,    31,    32,   163,   164,   182,   183,   184,
     197,    57,   197,    53,   197,   197,   197,   197,   197,   197,
     198,   199,   200,   201,   201,   202,   202,   203,   203,   203,
     203,   203,   203,   181,     5,   111,    91,   138,   181,   109,
     164,   164,    24,    26,    28,   123,   124,   131,   141,   146,
     147,   148,   157,   161,   168,     4,    96,   127,   129,   130,
     181,   173,     4,    11,    89,    93,    96,    94,    94,   181,
     181,   118,   143,   165,    89,   181,   181,    96,    96,    94,
      11,   154,    95,   197,   145,    94,    61,     5,   167,    61,
     166,   181,   109,   162,    32,   197,   197,   110,     5,   181,
     109,    22,    33,   137,    34,   139,   139,    61,    61,    61,
       5,   147,    61,   146,    96,    94,   159,   181,    15,    17,
      18,    19,    20,    21,   117,    68,   116,   119,   120,   119,
     120,    96,   145,   125,   181,   156,     3,   143,     5,   165,
      38,   181,   137,    33,   135,    11,    91,   109,     5,    22,
     130,     5,    93,   117,   109,   116,    47,    94,   163,   164,
     181,    93,   109,   181,   173,   117,   109,   126,     3,    31,
     165,   109,   137,   165,    94,    96,   181,   163,    33,   136,
      93,     3,   145,   165,   109,    96,   163,   136,   145,   142,
      35,   172,    53,   143,   145
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   107,   108,   108,   109,   110,   109,   111,   111,   112,
     112,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   115,
     115,   116,   116,   117,   117,   117,   117,   117,   117,   118,
     118,   118,   119,   119,   119,   120,   120,   120,   121,   121,
     122,   122,   123,   123,   124,   125,   124,   124,   126,   126,
     127,   127,   128,   128,   129,   129,   129,   130,   130,   130,
     131,   131,   131,   132,   133,   134,   135,   135,   136,   136,
     137,   137,   137,   137,   137,   138,   138,   139,   139,   140,
     140,   141,   141,   141,   142,   141,   141,   141,   141,   143,
     143,   144,   144,   145,   145,   146,   146,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   145,   145,   146,
     146,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   148,   149,   149,   150,   150,   150,   150,   150,   151,
     151,   151,   151,   153,   152,   152,   154,   155,   155,   156,
     156,   156,   157,   158,   159,   159,   160,   161,   162,   161,
     161,   163,   163,   163,   164,   164,   165,   165,   166,   166,
     167,   167,   167,   167,   167,   167,   167,   167,   167,   167,
     165,   165,   166,   166,   167,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   168,   168,   168,   169,   169,   170,
     170,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   172,   172,   173,   173,   173,   174,   174,   175,
     176,   177,   177,   178,   179,   179,   180,   180,   181,   181,
     182,   182,   183,   183,   184,   184,   185,   185,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   197,
     198,   198,   199,   199,   200,   200,   200,   201,   201,   201,
     202,   202,   202,   202,   202,   202,   203,   203,   203,   203,
     204,   204,   205,   205,   205,   205,   205,   205,   205
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     4,     0,     4,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     7,
       8,     0,     2,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     1,     3,     3,     3,     3,     1,     3,     5,
       1,     3,     4,     4,     3,     0,     9,     5,     3,     1,
       1,     3,     3,     1,     6,     1,     3,     0,     1,     3,
       1,     1,     1,     5,     5,     4,     3,     4,     5,     7,
       0,     2,     7,     0,     2,     0,     2,     0,     2,     3,
       3,     5,     6,    10,     0,    18,     6,    10,    12,     1,
       3,     2,     1,     4,     3,     1,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     4,     3,     1,
       2,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     4,     1,     2,     0,     3,     3,     3,     1,     0,
       1,     0,     1,     0,     3,     3,     1,     1,     3,     3,
       2,     2,     3,     4,     1,     2,     3,     4,     0,     9,
       4,     4,     8,     4,     0,     2,     4,     3,     1,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     3,     1,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     3,     3,     3,     1,     2,     2,     2,
       2,     1,     3,     2,     1,     3,     1,     3,     5,     1,
       3,     1,     3,     1,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     3,     2,     3,     2,     3,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     3,     1,     2,     2,     2,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 78 "parser.y" /* yacc.c:1646  */
    {}
#line 1783 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 79 "parser.y" /* yacc.c:1646  */
    {

	printf("end of statement \n");
}
#line 1792 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 88 "parser.y" /* yacc.c:1646  */
    {
(yyval.astNode)=(yyvsp[-1].astNode);
    }
#line 1800 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 91 "parser.y" /* yacc.c:1646  */
    {}
#line 1806 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 92 "parser.y" /* yacc.c:1646  */
    {
(yyval.astNode)=(yyvsp[-2].astNode);
    }
#line 1814 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 100 "parser.y" /* yacc.c:1646  */
    {
(yyval.astNode)=(yyvsp[0].astNode);
        }
#line 1822 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 104 "parser.y" /* yacc.c:1646  */
    {
(yyvsp[-1].astNode)->add((yyvsp[0].astNode)); 
(yyval.astNode) = (yyvsp[-1].astNode);
      }
#line 1831 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 111 "parser.y" /* yacc.c:1646  */
    {
(yyval.astNode) = new StatementsNode("Statements");
(yyval.astNode)->add((yyvsp[-1].astNode));
        }
#line 1840 "parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 115 "parser.y" /* yacc.c:1646  */
    {}
#line 1846 "parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 121 "parser.y" /* yacc.c:1646  */
    {}
#line 1852 "parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 123 "parser.y" /* yacc.c:1646  */
    {
std::string name = "return statement" + std::to_string(n_nodes);
++n_nodes;
(yyval.astNode)=(yyvsp[0].astNode); }
#line 1861 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 127 "parser.y" /* yacc.c:1646  */
    {}
#line 1867 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 128 "parser.y" /* yacc.c:1646  */
    {}
#line 1873 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 129 "parser.y" /* yacc.c:1646  */
    {}
#line 1879 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 130 "parser.y" /* yacc.c:1646  */
    {}
#line 1885 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 131 "parser.y" /* yacc.c:1646  */
    {}
#line 1891 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 132 "parser.y" /* yacc.c:1646  */
    {}
#line 1897 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 133 "parser.y" /* yacc.c:1646  */
    {}
#line 1903 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 137 "parser.y" /* yacc.c:1646  */
    {}
#line 1909 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 138 "parser.y" /* yacc.c:1646  */
    {printf("Function successfully parsed:\n");}
#line 1915 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 139 "parser.y" /* yacc.c:1646  */
    {}
#line 1921 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 140 "parser.y" /* yacc.c:1646  */
    {}
#line 1927 "parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 141 "parser.y" /* yacc.c:1646  */
    {}
#line 1933 "parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 142 "parser.y" /* yacc.c:1646  */
    {}
#line 1939 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 143 "parser.y" /* yacc.c:1646  */
    {}
#line 1945 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 144 "parser.y" /* yacc.c:1646  */
    {}
#line 1951 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 145 "parser.y" /* yacc.c:1646  */
    {}
#line 1957 "parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 157 "parser.y" /* yacc.c:1646  */
    {
        printf("Function successfully parsed:\n");
std::string name = "func" + std::to_string(n_nodes);
++n_nodes;
IdentifierNode* idFunc = dynamic_cast<IdentifierNode*>((yyvsp[-5].astNode));
(yyval.astNode) = new FunctionNode(idFunc->value);
(yyval.astNode)->add((yyvsp[-3].astNode));
(yyval.astNode)->add((yyvsp[0].astNode));
root = (yyval.astNode);
YYACCEPT;
        }
#line 1973 "parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 169 "parser.y" /* yacc.c:1646  */
    {
std::string name = "func" + std::to_string(n_nodes);
++n_nodes;
IdentifierNode* idFunc = dynamic_cast<IdentifierNode*>((yyvsp[-5].astNode));
(yyval.astNode) = new FunctionNode(idFunc->value);
(yyval.astNode)->add((yyvsp[-3].astNode));
(yyval.astNode)->add((yyvsp[0].astNode));
root = (yyval.astNode);
        }
#line 1987 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 192 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = NULL;}
#line 1993 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 194 "parser.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode);}
#line 1999 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 205 "parser.y" /* yacc.c:1646  */
    {
(yyvsp[-2].astNode)->add((yyvsp[0].astNode));
(yyval.astNode)=(yyvsp[-2].astNode);
                       }
#line 2008 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 210 "parser.y" /* yacc.c:1646  */
    {

                       }
#line 2016 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 214 "parser.y" /* yacc.c:1646  */
    {
(yyval.astNode) = new Args("Args"); 
(yyval.astNode)->add((yyvsp[0].astNode));
                       }
#line 2025 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 225 "parser.y" /* yacc.c:1646  */
    {
std::string nname = "iden" + std::to_string(n_nodes);
++n_nodes;
(yyvsp[0].astNode)->name=nname;
(yyval.astNode) = (yyvsp[0].astNode);
                  }
#line 2036 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 237 "parser.y" /* yacc.c:1646  */
    {printf("function call \n");}
#line 2042 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 238 "parser.y" /* yacc.c:1646  */
    {printf("function call \n");}
#line 2048 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 244 "parser.y" /* yacc.c:1646  */
    {printf("with statement \n");}
#line 2054 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 245 "parser.y" /* yacc.c:1646  */
    {printf("ASYNC with statement \n");}
#line 2060 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 246 "parser.y" /* yacc.c:1646  */
    {printf("with statement \n");}
#line 2066 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 247 "parser.y" /* yacc.c:1646  */
    {printf("ASYNC with statement \n");}
#line 2072 "parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 279 "parser.y" /* yacc.c:1646  */
    { printf("try statement \n"); }
#line 2078 "parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 280 "parser.y" /* yacc.c:1646  */
    { printf("try statement \n"); }
#line 2084 "parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 281 "parser.y" /* yacc.c:1646  */
    { printf("try statement \n"); }
#line 2090 "parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 314 "parser.y" /* yacc.c:1646  */
    { printf("while statement \n"); }
#line 2096 "parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 317 "parser.y" /* yacc.c:1646  */
    { printf("while statement \n"); }
#line 2102 "parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 322 "parser.y" /* yacc.c:1646  */
    { printf("for statement \n"); }
#line 2108 "parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 323 "parser.y" /* yacc.c:1646  */
    { printf("for ASYNC statement \n"); }
#line 2114 "parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 324 "parser.y" /* yacc.c:1646  */
    { printf("for statement \n"); }
#line 2120 "parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 325 "parser.y" /* yacc.c:1646  */
    { printf("for statement \n"); }
#line 2126 "parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 326 "parser.y" /* yacc.c:1646  */
    { printf("for statement \n"); }
#line 2132 "parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 327 "parser.y" /* yacc.c:1646  */
    { printf("for ASYNC statement \n"); }
#line 2138 "parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 328 "parser.y" /* yacc.c:1646  */
    { printf("for statement \n"); }
#line 2144 "parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 329 "parser.y" /* yacc.c:1646  */
    { printf("for statement \n"); }
#line 2150 "parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 341 "parser.y" /* yacc.c:1646  */
    {}
#line 2156 "parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 342 "parser.y" /* yacc.c:1646  */
    {}
#line 2162 "parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 351 "parser.y" /* yacc.c:1646  */
    {}
#line 2168 "parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 352 "parser.y" /* yacc.c:1646  */
    {}
#line 2174 "parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 353 "parser.y" /* yacc.c:1646  */
    {}
#line 2180 "parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 354 "parser.y" /* yacc.c:1646  */
    {}
#line 2186 "parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 355 "parser.y" /* yacc.c:1646  */
    {}
#line 2192 "parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 357 "parser.y" /* yacc.c:1646  */
    {}
#line 2198 "parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 358 "parser.y" /* yacc.c:1646  */
    {}
#line 2204 "parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 359 "parser.y" /* yacc.c:1646  */
    {}
#line 2210 "parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 360 "parser.y" /* yacc.c:1646  */
    {}
#line 2216 "parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 364 "parser.y" /* yacc.c:1646  */
    {}
#line 2222 "parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 365 "parser.y" /* yacc.c:1646  */
    {}
#line 2228 "parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 374 "parser.y" /* yacc.c:1646  */
    {}
#line 2234 "parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 375 "parser.y" /* yacc.c:1646  */
    {}
#line 2240 "parser.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 376 "parser.y" /* yacc.c:1646  */
    {}
#line 2246 "parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 377 "parser.y" /* yacc.c:1646  */
    {}
#line 2252 "parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 378 "parser.y" /* yacc.c:1646  */
    {}
#line 2258 "parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 380 "parser.y" /* yacc.c:1646  */
    {}
#line 2264 "parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 381 "parser.y" /* yacc.c:1646  */
    {}
#line 2270 "parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 382 "parser.y" /* yacc.c:1646  */
    {}
#line 2276 "parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 383 "parser.y" /* yacc.c:1646  */
    {}
#line 2282 "parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 390 "parser.y" /* yacc.c:1646  */
    {printf("class definition \n");}
#line 2288 "parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 397 "parser.y" /* yacc.c:1646  */
    {}
#line 2294 "parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 398 "parser.y" /* yacc.c:1646  */
    {}
#line 2300 "parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 399 "parser.y" /* yacc.c:1646  */
    {}
#line 2306 "parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 400 "parser.y" /* yacc.c:1646  */
    {}
#line 2312 "parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 405 "parser.y" /* yacc.c:1646  */
    {}
#line 2318 "parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 407 "parser.y" /* yacc.c:1646  */
    {}
#line 2324 "parser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 412 "parser.y" /* yacc.c:1646  */
    {}
#line 2330 "parser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 414 "parser.y" /* yacc.c:1646  */
    {}
#line 2336 "parser.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 415 "parser.y" /* yacc.c:1646  */
    {}
#line 2342 "parser.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 419 "parser.y" /* yacc.c:1646  */
    { }
#line 2348 "parser.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 423 "parser.y" /* yacc.c:1646  */
    {}
#line 2354 "parser.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 424 "parser.y" /* yacc.c:1646  */
    {}
#line 2360 "parser.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 428 "parser.y" /* yacc.c:1646  */
    { }
#line 2366 "parser.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 429 "parser.y" /* yacc.c:1646  */
    {}
#line 2372 "parser.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 430 "parser.y" /* yacc.c:1646  */
    {}
#line 2378 "parser.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 434 "parser.y" /* yacc.c:1646  */
    { printf("match statement \n"); }
#line 2384 "parser.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 449 "parser.y" /* yacc.c:1646  */
    { printf("if statement \n"); }
#line 2390 "parser.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 450 "parser.y" /* yacc.c:1646  */
    { printf("if statement \n"); }
#line 2396 "parser.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 451 "parser.y" /* yacc.c:1646  */
    { printf("if statement \n"); }
#line 2402 "parser.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 452 "parser.y" /* yacc.c:1646  */
    { printf("if statement \n"); }
#line 2408 "parser.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 468 "parser.y" /* yacc.c:1646  */
    {}
#line 2414 "parser.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 469 "parser.y" /* yacc.c:1646  */
    {}
#line 2420 "parser.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 478 "parser.y" /* yacc.c:1646  */
    {}
#line 2426 "parser.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 479 "parser.y" /* yacc.c:1646  */
    {}
#line 2432 "parser.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 480 "parser.y" /* yacc.c:1646  */
    {}
#line 2438 "parser.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 481 "parser.y" /* yacc.c:1646  */
    {}
#line 2444 "parser.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 482 "parser.y" /* yacc.c:1646  */
    {}
#line 2450 "parser.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 484 "parser.y" /* yacc.c:1646  */
    {}
#line 2456 "parser.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 485 "parser.y" /* yacc.c:1646  */
    {}
#line 2462 "parser.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 486 "parser.y" /* yacc.c:1646  */
    {}
#line 2468 "parser.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 487 "parser.y" /* yacc.c:1646  */
    {}
#line 2474 "parser.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 490 "parser.y" /* yacc.c:1646  */
    {}
#line 2480 "parser.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 491 "parser.y" /* yacc.c:1646  */
    {}
#line 2486 "parser.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 500 "parser.y" /* yacc.c:1646  */
    {}
#line 2492 "parser.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 501 "parser.y" /* yacc.c:1646  */
    {}
#line 2498 "parser.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 502 "parser.y" /* yacc.c:1646  */
    {}
#line 2504 "parser.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 503 "parser.y" /* yacc.c:1646  */
    {}
#line 2510 "parser.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 504 "parser.y" /* yacc.c:1646  */
    {}
#line 2516 "parser.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 506 "parser.y" /* yacc.c:1646  */
    {}
#line 2522 "parser.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 507 "parser.y" /* yacc.c:1646  */
    {}
#line 2528 "parser.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 508 "parser.y" /* yacc.c:1646  */
    {}
#line 2534 "parser.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 509 "parser.y" /* yacc.c:1646  */
    {}
#line 2540 "parser.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 515 "parser.y" /* yacc.c:1646  */
    { }
#line 2546 "parser.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 516 "parser.y" /* yacc.c:1646  */
    { }
#line 2552 "parser.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 517 "parser.y" /* yacc.c:1646  */
    {}
#line 2558 "parser.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 564 "parser.y" /* yacc.c:1646  */
    {  printf("return statement \n ");  }
#line 2564 "parser.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 566 "parser.y" /* yacc.c:1646  */
    {
std::string name = "func" + std::to_string(n_nodes);
++n_nodes;
(yyval.astNode)=new ReturnStatementNode((yyvsp[0].astNode));
      }
#line 2574 "parser.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 575 "parser.y" /* yacc.c:1646  */
    {  printf("yield statement \n ");  }
#line 2580 "parser.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 579 "parser.y" /* yacc.c:1646  */
    {  printf("global statement \n ");  }
#line 2586 "parser.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 587 "parser.y" /* yacc.c:1646  */
    {  printf("nonlocal statement \n ");  }
#line 2592 "parser.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 610 "parser.y" /* yacc.c:1646  */
    { }
#line 2598 "parser.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 617 "parser.y" /* yacc.c:1646  */
    { }
#line 2604 "parser.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 624 "parser.y" /* yacc.c:1646  */
    {  }
#line 2610 "parser.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 650 "parser.y" /* yacc.c:1646  */
    { }
#line 2616 "parser.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 654 "parser.y" /* yacc.c:1646  */
    {    }
#line 2622 "parser.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 658 "parser.y" /* yacc.c:1646  */
    {   }
#line 2628 "parser.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 662 "parser.y" /* yacc.c:1646  */
    {  }
#line 2634 "parser.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 666 "parser.y" /* yacc.c:1646  */
    {}
#line 2640 "parser.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 670 "parser.y" /* yacc.c:1646  */
    {}
#line 2646 "parser.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 674 "parser.y" /* yacc.c:1646  */
    { }
#line 2652 "parser.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 678 "parser.y" /* yacc.c:1646  */
    {  }
#line 2658 "parser.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 682 "parser.y" /* yacc.c:1646  */
    {  }
#line 2664 "parser.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 686 "parser.y" /* yacc.c:1646  */
    {  }
#line 2670 "parser.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 693 "parser.y" /* yacc.c:1646  */
    {  }
#line 2676 "parser.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 700 "parser.y" /* yacc.c:1646  */
    { }
#line 2682 "parser.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 706 "parser.y" /* yacc.c:1646  */
    {}
#line 2688 "parser.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 712 "parser.y" /* yacc.c:1646  */
    {}
#line 2694 "parser.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 713 "parser.y" /* yacc.c:1646  */
    {}
#line 2700 "parser.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 722 "parser.y" /* yacc.c:1646  */
    {}
#line 2706 "parser.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 723 "parser.y" /* yacc.c:1646  */
    { }
#line 2712 "parser.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 730 "parser.y" /* yacc.c:1646  */
    {}
#line 2718 "parser.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 731 "parser.y" /* yacc.c:1646  */
    {}
#line 2724 "parser.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 732 "parser.y" /* yacc.c:1646  */
    {}
#line 2730 "parser.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 733 "parser.y" /* yacc.c:1646  */
    {}
#line 2736 "parser.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 734 "parser.y" /* yacc.c:1646  */
    {}
#line 2742 "parser.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 751 "parser.y" /* yacc.c:1646  */
    {}
#line 2748 "parser.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 757 "parser.y" /* yacc.c:1646  */
    { }
#line 2754 "parser.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 758 "parser.y" /* yacc.c:1646  */
    { }
#line 2760 "parser.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 759 "parser.y" /* yacc.c:1646  */
    { }
#line 2766 "parser.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 760 "parser.y" /* yacc.c:1646  */
    { }
#line 2772 "parser.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 761 "parser.y" /* yacc.c:1646  */
    { }
#line 2778 "parser.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 762 "parser.y" /* yacc.c:1646  */
    { }
#line 2784 "parser.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 763 "parser.y" /* yacc.c:1646  */
    {}
#line 2790 "parser.cpp" /* yacc.c:1646  */
    break;


#line 2794 "parser.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 768 "parser.y" /* yacc.c:1906  */


int main(int argc, char **argv)
{
 
     if (argc > 1){
        for(int i=0;i<argc;i++)
            // printf("value of argv[%d] = %s\n\n",i,argv[i]);
            yyin=fopen(argv[1],"r");
      }
      else
        yyin=stdin;
      
      yyparse();

      // AST is constructed, you can print it now
      if (root != NULL) {
            AST ast(root);
            ast.Print();
      }
      return 0;
}



void yyerror(const char *msg) {
      printf(" %s \n", msg);
}
