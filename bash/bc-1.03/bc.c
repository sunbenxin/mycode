/* A Bison parser, made by GNU Bison 3.0.2.  */

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "bc.y" /* yacc.c:339  */

/* bc.y: The grammar for a POSIX compatable bc processor with some
         extensions to the language. */

/*  This file is part of bc written for MINIX.
    Copyright (C) 1991, 1992, 1993, 1994 Free Software Foundation, Inc.

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License , or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; see the file COPYING.  If not, write to
    the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.

    You may contact the author by:
       e-mail:  phil@cs.wwu.edu
      us-mail:  Philip A. Nelson
                Computer Science Department, 9062
                Western Washington University
                Bellingham, WA 98226-9062
       
*************************************************************************/

#include "bcdefs.h"
#include "global.h"
#include "proto.h"

#line 101 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 38 "bc.y" /* yacc.c:355  */

	char	 *s_value;
	char	  c_value;
	int	  i_value;
	arg_list *a_value;
       

#line 219 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 234 "y.tab.c" /* yacc.c:358  */

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   616

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  166

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      40,    41,     2,    35,    44,    36,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    39,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    45,     2,    46,    37,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,     2,    43,     2,     2,     2,     2,
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
      38
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   106,   106,   114,   116,   118,   120,   127,   128,   129,
     130,   133,   134,   135,   136,   137,   138,   140,   141,   144,
     146,   148,   157,   164,   174,   185,   187,   189,   191,   194,
     199,   210,   221,   193,   239,   238,   252,   258,   251,   270,
     273,   272,   276,   277,   279,   285,   288,   290,   289,   300,
     298,   319,   320,   323,   324,   326,   329,   331,   333,   335,
     339,   340,   342,   347,   353,   358,   366,   370,   373,   377,
     384,   383,   411,   410,   424,   423,   439,   445,   473,   478,
     483,   490,   495,   500,   509,   525,   527,   543,   562,   585,
     587,   589,   591,   597,   599,   604,   606,   608,   610
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NEWLINE", "AND", "OR", "NOT", "STRING",
  "NAME", "NUMBER", "MUL_OP", "ASSIGN_OP", "REL_OP", "INCR_DECR", "Define",
  "Break", "Quit", "Length", "Return", "For", "If", "While", "Sqrt",
  "Else", "Scale", "Ibase", "Obase", "Auto", "Read", "Warranty", "Halt",
  "Last", "Continue", "Print", "Limits", "'+'", "'-'", "'^'",
  "UNARY_MINUS", "';'", "'('", "')'", "'{'", "'}'", "','", "'['", "']'",
  "$accept", "program", "input_item", "semicolon_list", "statement_list",
  "statement_or_error", "statement", "$@1", "$@2", "@3", "$@4", "$@5",
  "$@6", "$@7", "$@8", "print_list", "print_element", "opt_else", "$@9",
  "function", "$@10", "opt_parameter_list", "opt_auto_define_list",
  "define_list", "opt_argument_list", "argument_list", "opt_expression",
  "return_expression", "expression", "$@11", "$@12", "$@13",
  "named_expression", YY_NULLPTR
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
     285,   286,   287,   288,   289,    43,    45,    94,   290,    59,
      40,    41,   123,   125,    44,    91,    93
};
# endif

#define YYPACT_NINF -125

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-125)))

#define YYTABLE_NINF -14

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -125,   156,  -125,   352,   534,  -125,   -31,  -125,    49,     2,
    -125,  -125,   -19,   -17,  -125,   -15,  -125,    -5,    19,  -125,
    -125,    20,  -125,  -125,  -125,  -125,  -125,  -125,   534,   534,
     196,  -125,     4,  -125,  -125,  -125,    73,     9,  -125,  -125,
     110,   555,   534,   -12,  -125,  -125,    21,   534,   534,    28,
     534,    29,   534,   534,    30,   513,  -125,   385,   476,    13,
    -125,  -125,   282,  -125,  -125,   534,   534,   534,   534,   534,
    -125,  -125,   -28,    31,   -10,    73,     1,    33,   394,    35,
      73,   534,   397,   534,   406,   440,  -125,  -125,  -125,    26,
      73,  -125,   239,   476,  -125,  -125,   534,   534,    45,    -7,
      -6,    -6,    45,   534,    90,  -125,   576,  -125,    39,    46,
      42,  -125,  -125,     3,    73,  -125,    73,  -125,  -125,   513,
    -125,  -125,   110,   131,    -7,  -125,   -21,    73,    43,    51,
      80,  -125,   476,    50,  -125,   317,  -125,    94,    55,   534,
      82,   476,  -125,    79,    65,    74,  -125,  -125,  -125,    33,
    -125,  -125,  -125,   476,     5,   196,   534,  -125,  -125,  -125,
      15,    78,  -125,  -125,   476,  -125
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,    22,    93,    84,     0,     0,
      23,    25,     0,    27,    29,     0,    36,     0,    97,    95,
      96,     0,    19,    26,    98,    24,    40,    20,     0,     0,
       0,     3,     0,     8,    17,     5,    21,    83,     6,    18,
      76,    60,     0,    93,    97,    87,     0,     0,    68,     0,
       0,     0,     0,     0,     0,     0,    82,     0,     0,     0,
      12,     4,     0,    72,    74,     0,     0,     0,     0,     0,
      70,    88,    93,     0,    61,    62,     0,    51,     0,     0,
      69,    66,     0,     0,     0,     0,    92,    44,    41,    42,
      45,    85,     0,    15,    39,     9,     0,     0,    80,    77,
      78,    79,    81,     0,     0,    86,     0,    94,    56,     0,
      52,    89,    28,     0,    67,    34,    37,    90,    91,     0,
      14,    16,    73,    75,    71,    63,    93,    64,     0,     0,
       0,    30,     0,     0,    43,     0,    57,     0,    58,    66,
      46,     0,    65,    53,     0,     0,    47,    35,    38,     0,
      49,    59,    31,     0,     0,     0,    66,    48,    54,    55,
       0,     0,    50,    32,     0,    33
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -125,  -125,  -125,  -125,   -32,     0,    -3,  -125,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,     6,  -125,  -125,  -125,  -125,
    -125,  -125,  -125,   -25,  -125,  -125,  -124,  -125,    -2,  -125,
    -125,  -125,   119
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    31,    32,    59,    60,    34,    49,   139,   156,
     164,   132,    51,   133,    55,    88,    89,   147,   153,    35,
     155,   109,   150,   110,    73,    74,   113,    79,    36,   103,
      96,    97,    37
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,    33,    40,    65,    65,    63,    64,    61,   158,    41,
      46,    65,    41,    66,    42,   145,    92,   104,    92,    41,
      70,    47,    71,    48,   135,    50,    56,    57,    67,    68,
      69,    69,   161,    42,   106,    52,    67,    68,    69,    75,
      76,   108,   131,    62,   159,    78,    80,   107,    82,   130,
      84,    85,    93,    90,    93,    39,    94,    43,   162,    53,
      54,    77,    95,    98,    99,   100,   101,   102,    81,    83,
     119,    86,   105,    44,    19,    20,   112,    63,    64,   114,
      24,   116,    69,    65,   128,    66,   130,   129,   138,   136,
     121,   141,   120,   137,   122,   123,     4,   143,     6,     7,
     144,   124,    76,     8,   127,   146,   149,    12,    67,    68,
      69,   151,    17,   152,    18,    19,    20,    90,    21,   163,
      65,    24,    66,   160,   154,   134,    28,    45,     0,   140,
      29,     0,     0,    76,     0,    63,   125,   114,   148,     0,
       0,    65,     0,    66,     0,    67,    68,    69,     0,     0,
     157,     0,     0,     0,   114,     0,     2,     3,     0,    -7,
       0,   165,     4,     5,     6,     7,    67,    68,    69,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,     0,
      18,    19,    20,     0,    21,    22,    23,    24,    25,    26,
      27,     0,    28,     0,     0,    -7,    29,    58,    30,   -11,
       0,     0,     4,     5,     6,     7,     0,     0,     0,     8,
       0,    10,    11,    12,    13,    14,    15,    16,    17,     0,
      18,    19,    20,     0,    21,    22,    23,    24,    25,    26,
      27,     0,    28,     0,     0,   -11,    29,     0,    30,   -11,
      58,     0,   -13,     0,     0,     4,     5,     6,     7,     0,
       0,     0,     8,     0,    10,    11,    12,    13,    14,    15,
      16,    17,     0,    18,    19,    20,     0,    21,    22,    23,
      24,    25,    26,    27,     0,    28,     0,     0,   -13,    29,
       0,    30,   -13,    58,     0,   -10,     0,     0,     4,     5,
       6,     7,     0,     0,     0,     8,     0,    10,    11,    12,
      13,    14,    15,    16,    17,     0,    18,    19,    20,     0,
      21,    22,    23,    24,    25,    26,    27,     0,    28,     0,
       0,   -10,    29,     4,    30,     6,     7,     0,     0,     0,
       8,     0,     0,     0,    12,     0,     0,     0,     0,    17,
       0,    18,    19,    20,     0,    21,     0,     0,    24,     0,
       0,     0,     0,    28,     0,    38,     0,    29,     4,     5,
       6,     7,     0,   142,     0,     8,     0,    10,    11,    12,
      13,    14,    15,    16,    17,     0,    18,    19,    20,     0,
      21,    22,    23,    24,    25,    26,    27,     0,    28,    63,
      64,     0,    29,     0,    30,    65,     0,    66,    63,    64,
       0,    63,    64,     0,    65,     0,    66,    65,     0,    66,
      63,    64,     0,     0,     0,     0,    65,     0,    66,     0,
      67,    68,    69,     0,     0,     0,    91,     0,     0,    67,
      68,    69,    67,    68,    69,   111,     0,     0,   115,     0,
       0,    67,    68,    69,    63,    64,     0,   117,     0,     0,
      65,     0,    66,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    67,    68,    69,     0,     0,
       0,   118,     4,     5,     6,     7,     0,     0,     0,     8,
       0,    10,    11,    12,    13,    14,    15,    16,    17,     0,
      18,    19,    20,     0,    21,    22,    23,    24,    25,    26,
      27,     0,    28,     0,     0,     0,    29,     0,    30,     4,
      87,     6,     7,     0,     0,     0,     8,     0,     0,     0,
      12,     0,     0,     0,     0,    17,     0,    18,    19,    20,
       4,    21,     6,     7,    24,     0,     0,     8,     0,    28,
       0,    12,     0,    29,     0,     0,    17,     0,    18,    19,
      20,     4,    21,    72,     7,    24,     0,     0,     8,     0,
      28,     0,    12,     0,    29,     0,     0,    17,     0,    18,
      19,    20,     4,    21,   126,     7,    24,     0,     0,     8,
       0,    28,     0,    12,     0,    29,     0,     0,    17,     0,
      18,    19,    20,     0,    21,     0,     0,    24,     0,     0,
       0,     0,    28,     0,     0,     0,    29
};

static const yytype_int16 yycheck[] =
{
       3,     1,     4,    10,    10,     4,     5,     3,     3,    40,
       8,    10,    40,    12,    45,   139,     3,    45,     3,    40,
      11,    40,    13,    40,    45,    40,    28,    29,    35,    36,
      37,    37,   156,    45,    44,    40,    35,    36,    37,    41,
      42,     8,    39,    39,    39,    47,    48,    46,    50,    44,
      52,    53,    39,    55,    39,    58,    43,     8,    43,    40,
      40,    40,    62,    65,    66,    67,    68,    69,    40,    40,
      44,    41,    41,    24,    25,    26,    41,     4,     5,    81,
      31,    83,    37,    10,    45,    12,    44,    41,     8,    46,
      93,    41,    92,    42,    96,    97,     6,     3,     8,     9,
      45,   103,   104,    13,   106,    23,    27,    17,    35,    36,
      37,    46,    22,    39,    24,    25,    26,   119,    28,    41,
      10,    31,    12,   155,   149,   119,    36,     8,    -1,   132,
      40,    -1,    -1,   135,    -1,     4,    46,   139,   141,    -1,
      -1,    10,    -1,    12,    -1,    35,    36,    37,    -1,    -1,
     153,    -1,    -1,    -1,   156,    -1,     0,     1,    -1,     3,
      -1,   164,     6,     7,     8,     9,    35,    36,    37,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    39,    40,     1,    42,     3,
      -1,    -1,     6,     7,     8,     9,    -1,    -1,    -1,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    39,    40,    -1,    42,    43,
       1,    -1,     3,    -1,    -1,     6,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    39,    40,
      -1,    42,    43,     1,    -1,     3,    -1,    -1,     6,     7,
       8,     9,    -1,    -1,    -1,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    39,    40,     6,    42,     8,     9,    -1,    -1,    -1,
      13,    -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,    22,
      -1,    24,    25,    26,    -1,    28,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    36,    -1,     3,    -1,    40,     6,     7,
       8,     9,    -1,    46,    -1,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    -1,    24,    25,    26,    -1,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,     4,
       5,    -1,    40,    -1,    42,    10,    -1,    12,     4,     5,
      -1,     4,     5,    -1,    10,    -1,    12,    10,    -1,    12,
       4,     5,    -1,    -1,    -1,    -1,    10,    -1,    12,    -1,
      35,    36,    37,    -1,    -1,    -1,    41,    -1,    -1,    35,
      36,    37,    35,    36,    37,    41,    -1,    -1,    41,    -1,
      -1,    35,    36,    37,     4,     5,    -1,    41,    -1,    -1,
      10,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    -1,    -1,
      -1,    41,     6,     7,     8,     9,    -1,    -1,    -1,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    40,    -1,    42,     6,
       7,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,    -1,
      17,    -1,    -1,    -1,    -1,    22,    -1,    24,    25,    26,
       6,    28,     8,     9,    31,    -1,    -1,    13,    -1,    36,
      -1,    17,    -1,    40,    -1,    -1,    22,    -1,    24,    25,
      26,     6,    28,     8,     9,    31,    -1,    -1,    13,    -1,
      36,    -1,    17,    -1,    40,    -1,    -1,    22,    -1,    24,
      25,    26,     6,    28,     8,     9,    31,    -1,    -1,    13,
      -1,    36,    -1,    17,    -1,    40,    -1,    -1,    22,    -1,
      24,    25,    26,    -1,    28,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    48,     0,     1,     6,     7,     8,     9,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    24,    25,
      26,    28,    29,    30,    31,    32,    33,    34,    36,    40,
      42,    49,    50,    52,    53,    66,    75,    79,     3,    53,
      75,    40,    45,     8,    24,    79,     8,    40,    40,    54,
      40,    59,    40,    40,    40,    61,    75,    75,     1,    51,
      52,     3,    39,     4,     5,    10,    12,    35,    36,    37,
      11,    13,     8,    71,    72,    75,    75,    40,    75,    74,
      75,    40,    75,    40,    75,    75,    41,     7,    62,    63,
      75,    41,     3,    39,    43,    52,    77,    78,    75,    75,
      75,    75,    75,    76,    45,    41,    44,    46,     8,    68,
      70,    41,    41,    73,    75,    41,    75,    41,    41,    44,
      52,    53,    75,    75,    75,    46,     8,    75,    45,    41,
      44,    39,    58,    60,    62,    45,    46,    42,     8,    55,
      53,    41,    46,     3,    45,    73,    23,    64,    53,    27,
      69,    46,    39,    65,    70,    67,    56,    53,     3,    39,
      51,    73,    43,    41,    57,    53
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    48,    49,    49,    49,    50,    50,    50,
      50,    51,    51,    51,    51,    51,    51,    52,    52,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    54,
      55,    56,    57,    53,    58,    53,    59,    60,    53,    53,
      61,    53,    62,    62,    63,    63,    64,    65,    64,    67,
      66,    68,    68,    69,    69,    69,    70,    70,    70,    70,
      71,    71,    72,    72,    72,    72,    73,    73,    74,    74,
      76,    75,    77,    75,    78,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    79,    79,    79,    79,    79,    79
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     1,     2,     0,     1,     3,
       2,     0,     1,     2,     3,     2,     3,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     0,
       0,     0,     0,    13,     0,     7,     0,     0,     7,     3,
       0,     3,     1,     3,     1,     1,     0,     0,     3,     0,
      11,     0,     1,     0,     3,     3,     1,     3,     3,     5,
       0,     1,     1,     3,     3,     5,     0,     1,     0,     1,
       0,     4,     0,     4,     0,     4,     2,     3,     3,     3,
       3,     3,     2,     1,     1,     3,     4,     2,     2,     4,
       4,     4,     3,     1,     4,     1,     1,     1,     1
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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
#line 106 "bc.y" /* yacc.c:1646  */
    {
			      (yyval.i_value) = 0;
			      if (interactive)
				{
				  printf ("%s\n", BC_VERSION);
				  welcome ();
				}
			    }
#line 1528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 117 "bc.y" /* yacc.c:1646  */
    { run_code (); }
#line 1534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 119 "bc.y" /* yacc.c:1646  */
    { run_code (); }
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 121 "bc.y" /* yacc.c:1646  */
    {
			      yyerrok;
			      init_gen ();
			    }
#line 1549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 127 "bc.y" /* yacc.c:1646  */
    { (yyval.i_value) = 0; }
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 133 "bc.y" /* yacc.c:1646  */
    { (yyval.i_value) = 0; }
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 142 "bc.y" /* yacc.c:1646  */
    { (yyval.i_value) = (yyvsp[0].i_value); }
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 145 "bc.y" /* yacc.c:1646  */
    { warranty (""); }
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 147 "bc.y" /* yacc.c:1646  */
    { limits (); }
#line 1579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 149 "bc.y" /* yacc.c:1646  */
    {
			      if ((yyvsp[0].i_value) & 2)
				warn ("comparison in expression");
			      if ((yyvsp[0].i_value) & 1)
				generate ("W");
			      else 
				generate ("p");
			    }
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 158 "bc.y" /* yacc.c:1646  */
    {
			      (yyval.i_value) = 0;
			      generate ("w");
			      generate ((yyvsp[0].s_value));
			      free ((yyvsp[0].s_value));
			    }
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 165 "bc.y" /* yacc.c:1646  */
    {
			      if (break_label == 0)
				yyerror ("Break outside a for/while");
			      else
				{
				  sprintf (genstr, "J%1d:", break_label);
				  generate (genstr);
				}
			    }
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 175 "bc.y" /* yacc.c:1646  */
    {
			      warn ("Continue statement");
			      if (continue_label == 0)
				yyerror ("Continue outside a for");
			      else
				{
				  sprintf (genstr, "J%1d:", continue_label);
				  generate (genstr);
				}
			    }
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 186 "bc.y" /* yacc.c:1646  */
    { exit (0); }
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 188 "bc.y" /* yacc.c:1646  */
    { generate ("h"); }
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 190 "bc.y" /* yacc.c:1646  */
    { generate ("0R"); }
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 192 "bc.y" /* yacc.c:1646  */
    { generate ("R"); }
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 194 "bc.y" /* yacc.c:1646  */
    {
			      (yyvsp[0].i_value) = break_label; 
			      break_label = next_label++;
			    }
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 199 "bc.y" /* yacc.c:1646  */
    {
			      if ((yyvsp[-1].i_value) > 1)
				warn ("Comparison in first for expression");
			      (yyvsp[-1].i_value) = next_label++;
			      if ((yyvsp[-1].i_value) < 0)
				sprintf (genstr, "N%1d:", (yyvsp[-1].i_value));
			      else
				sprintf (genstr, "pN%1d:", (yyvsp[-1].i_value));
			      generate (genstr);
			    }
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 210 "bc.y" /* yacc.c:1646  */
    {
			      if ((yyvsp[-1].i_value) < 0) generate ("1");
			      (yyvsp[-1].i_value) = next_label++;
			      sprintf (genstr, "B%1d:J%1d:", (yyvsp[-1].i_value), break_label);
			      generate (genstr);
			      (yyval.i_value) = continue_label;
			      continue_label = next_label++;
			      sprintf (genstr, "N%1d:", continue_label);
			      generate (genstr);
			    }
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 221 "bc.y" /* yacc.c:1646  */
    {
			      if ((yyvsp[-1].i_value) > 1)
				warn ("Comparison in third for expression");
			      if ((yyvsp[-1].i_value) < 0)
				sprintf (genstr, "J%1d:N%1d:", (yyvsp[-7].i_value), (yyvsp[-4].i_value));
			      else
				sprintf (genstr, "pJ%1d:N%1d:", (yyvsp[-7].i_value), (yyvsp[-4].i_value));
			      generate (genstr);
			    }
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 231 "bc.y" /* yacc.c:1646  */
    {
			      sprintf (genstr, "J%1d:N%1d:",
				       continue_label, break_label);
			      generate (genstr);
			      break_label = (yyvsp[-12].i_value);
			      continue_label = (yyvsp[-4].i_value);
			    }
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 239 "bc.y" /* yacc.c:1646  */
    {
			      (yyvsp[-1].i_value) = if_label;
			      if_label = next_label++;
			      sprintf (genstr, "Z%1d:", if_label);
			      generate (genstr);
			    }
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 246 "bc.y" /* yacc.c:1646  */
    {
			      sprintf (genstr, "N%1d:", if_label); 
			      generate (genstr);
			      if_label = (yyvsp[-4].i_value);
			    }
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 252 "bc.y" /* yacc.c:1646  */
    {
			      (yyvsp[0].i_value) = next_label++;
			      sprintf (genstr, "N%1d:", (yyvsp[0].i_value));
			      generate (genstr);
			    }
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 258 "bc.y" /* yacc.c:1646  */
    {
			      (yyvsp[0].i_value) = break_label; 
			      break_label = next_label++;
			      sprintf (genstr, "Z%1d:", break_label);
			      generate (genstr);
			    }
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 265 "bc.y" /* yacc.c:1646  */
    {
			      sprintf (genstr, "J%1d:N%1d:", (yyvsp[-6].i_value), break_label);
			      generate (genstr);
			      break_label = (yyvsp[-3].i_value);
			    }
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 271 "bc.y" /* yacc.c:1646  */
    { (yyval.i_value) = 0; }
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 273 "bc.y" /* yacc.c:1646  */
    {  warn ("print statement"); }
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 280 "bc.y" /* yacc.c:1646  */
    {
			      generate ("O");
			      generate ((yyvsp[0].s_value));
			      free ((yyvsp[0].s_value));
			    }
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 286 "bc.y" /* yacc.c:1646  */
    { generate ("P"); }
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 290 "bc.y" /* yacc.c:1646  */
    {
			      warn ("else clause in if statement");
			      (yyvsp[0].i_value) = next_label++;
			      sprintf (genstr, "J%d:N%1d:", (yyvsp[0].i_value), if_label); 
			      generate (genstr);
			      if_label = (yyvsp[0].i_value);
			    }
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 300 "bc.y" /* yacc.c:1646  */
    {
			      /* Check auto list against parameter list? */
			      check_params ((yyvsp[-4].a_value),(yyvsp[0].a_value));
			      sprintf (genstr, "F%d,%s.%s[",
				       lookup((yyvsp[-6].s_value),FUNCTDEF), 
				       arg_str ((yyvsp[-4].a_value)), arg_str ((yyvsp[0].a_value)));
			      generate (genstr);
			      free_args ((yyvsp[-4].a_value));
			      free_args ((yyvsp[0].a_value));
			      (yyvsp[-7].i_value) = next_label;
			      next_label = 1;
			    }
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 313 "bc.y" /* yacc.c:1646  */
    {
			      generate ("0R]");
			      next_label = (yyvsp[-10].i_value);
			    }
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 319 "bc.y" /* yacc.c:1646  */
    { (yyval.a_value) = NULL; }
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 323 "bc.y" /* yacc.c:1646  */
    { (yyval.a_value) = NULL; }
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 325 "bc.y" /* yacc.c:1646  */
    { (yyval.a_value) = (yyvsp[-1].a_value); }
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 327 "bc.y" /* yacc.c:1646  */
    { (yyval.a_value) = (yyvsp[-1].a_value); }
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 330 "bc.y" /* yacc.c:1646  */
    { (yyval.a_value) = nextarg (NULL, lookup ((yyvsp[0].s_value),SIMPLE)); }
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 332 "bc.y" /* yacc.c:1646  */
    { (yyval.a_value) = nextarg (NULL, lookup ((yyvsp[-2].s_value),ARRAY)); }
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 334 "bc.y" /* yacc.c:1646  */
    { (yyval.a_value) = nextarg ((yyvsp[-2].a_value), lookup ((yyvsp[0].s_value),SIMPLE)); }
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 336 "bc.y" /* yacc.c:1646  */
    { (yyval.a_value) = nextarg ((yyvsp[-4].a_value), lookup ((yyvsp[-2].s_value),ARRAY)); }
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 339 "bc.y" /* yacc.c:1646  */
    { (yyval.a_value) = NULL; }
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 343 "bc.y" /* yacc.c:1646  */
    {
			      if ((yyvsp[0].i_value) > 1) warn ("comparison in argument");
			      (yyval.a_value) = nextarg (NULL,0);
			    }
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 348 "bc.y" /* yacc.c:1646  */
    {
			      sprintf (genstr, "K%d:", -lookup ((yyvsp[-2].s_value),ARRAY));
			      generate (genstr);
			      (yyval.a_value) = nextarg (NULL,1);
			    }
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 354 "bc.y" /* yacc.c:1646  */
    {
			      if ((yyvsp[0].i_value) > 1) warn ("comparison in argument");
			      (yyval.a_value) = nextarg ((yyvsp[-2].a_value),0);
			    }
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 359 "bc.y" /* yacc.c:1646  */
    {
			      sprintf (genstr, "K%d:", -lookup ((yyvsp[-2].s_value),ARRAY));
			      generate (genstr);
			      (yyval.a_value) = nextarg ((yyvsp[-4].a_value),1);
			    }
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 366 "bc.y" /* yacc.c:1646  */
    {
			      (yyval.i_value) = -1;
			      warn ("Missing expression in for statement");
			    }
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 373 "bc.y" /* yacc.c:1646  */
    {
			      (yyval.i_value) = 0;
			      generate ("0");
			    }
#line 1949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 378 "bc.y" /* yacc.c:1646  */
    {
			      if ((yyvsp[0].i_value) > 1)
				warn ("comparison in return expresion");
			    }
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 384 "bc.y" /* yacc.c:1646  */
    {
			      if ((yyvsp[0].c_value) != '=')
				{
				  if ((yyvsp[-1].i_value) < 0)
				    sprintf (genstr, "DL%d:", -(yyvsp[-1].i_value));
				  else
				    sprintf (genstr, "l%d:", (yyvsp[-1].i_value));
				  generate (genstr);
				}
			    }
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 395 "bc.y" /* yacc.c:1646  */
    {
			      if ((yyvsp[0].i_value) > 1) warn("comparison in assignment");
			      if ((yyvsp[-2].c_value) != '=')
				{
				  sprintf (genstr, "%c", (yyvsp[-2].c_value));
				  generate (genstr);
				}
			      if ((yyvsp[-3].i_value) < 0)
				sprintf (genstr, "S%d:", -(yyvsp[-3].i_value));
			      else
				sprintf (genstr, "s%d:", (yyvsp[-3].i_value));
			      generate (genstr);
			      (yyval.i_value) = 0;
			    }
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 411 "bc.y" /* yacc.c:1646  */
    {
			      warn("&& operator");
			      (yyvsp[0].i_value) = next_label++;
			      sprintf (genstr, "DZ%d:p", (yyvsp[0].i_value));
			      generate (genstr);
			    }
#line 2003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 418 "bc.y" /* yacc.c:1646  */
    {
			      sprintf (genstr, "DZ%d:p1N%d:", (yyvsp[-2].i_value), (yyvsp[-2].i_value));
			      generate (genstr);
			      (yyval.i_value) = (yyvsp[-3].i_value) | (yyvsp[0].i_value);
			    }
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 424 "bc.y" /* yacc.c:1646  */
    {
			      warn("|| operator");
			      (yyvsp[0].i_value) = next_label++;
			      sprintf (genstr, "B%d:", (yyvsp[0].i_value));
			      generate (genstr);
			    }
#line 2024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 431 "bc.y" /* yacc.c:1646  */
    {
			      int tmplab;
			      tmplab = next_label++;
			      sprintf (genstr, "B%d:0J%d:N%d:1N%d:",
				       (yyvsp[-2].i_value), tmplab, (yyvsp[-2].i_value), tmplab);
			      generate (genstr);
			      (yyval.i_value) = (yyvsp[-3].i_value) | (yyvsp[0].i_value);
			    }
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 440 "bc.y" /* yacc.c:1646  */
    {
			      (yyval.i_value) = (yyvsp[0].i_value);
			      warn("! operator");
			      generate ("!");
			    }
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 446 "bc.y" /* yacc.c:1646  */
    {
			      (yyval.i_value) = 3;
			      switch (*((yyvsp[-1].s_value)))
				{
				case '=':
				  generate ("=");
				  break;

				case '!':
				  generate ("#");
				  break;

				case '<':
				  if ((yyvsp[-1].s_value)[1] == '=')
				    generate ("{");
				  else
				    generate ("<");
				  break;

				case '>':
				  if ((yyvsp[-1].s_value)[1] == '=')
				    generate ("}");
				  else
				    generate (">");
				  break;
				}
			    }
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 474 "bc.y" /* yacc.c:1646  */
    {
			      generate ("+");
			      (yyval.i_value) = (yyvsp[-2].i_value) | (yyvsp[0].i_value);
			    }
#line 2088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 479 "bc.y" /* yacc.c:1646  */
    {
			      generate ("-");
			      (yyval.i_value) = (yyvsp[-2].i_value) | (yyvsp[0].i_value);
			    }
#line 2097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 484 "bc.y" /* yacc.c:1646  */
    {
			      genstr[0] = (yyvsp[-1].c_value);
			      genstr[1] = 0;
			      generate (genstr);
			      (yyval.i_value) = (yyvsp[-2].i_value) | (yyvsp[0].i_value);
			    }
#line 2108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 491 "bc.y" /* yacc.c:1646  */
    {
			      generate ("^");
			      (yyval.i_value) = (yyvsp[-2].i_value) | (yyvsp[0].i_value);
			    }
#line 2117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 496 "bc.y" /* yacc.c:1646  */
    {
			      generate ("n");
			      (yyval.i_value) = (yyvsp[0].i_value);
			    }
#line 2126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 501 "bc.y" /* yacc.c:1646  */
    {
			      (yyval.i_value) = 1;
			      if ((yyvsp[0].i_value) < 0)
				sprintf (genstr, "L%d:", -(yyvsp[0].i_value));
			      else
				sprintf (genstr, "l%d:", (yyvsp[0].i_value));
			      generate (genstr);
			    }
#line 2139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 510 "bc.y" /* yacc.c:1646  */
    {
			      int len = strlen((yyvsp[0].s_value));
			      (yyval.i_value) = 1;
			      if (len == 1 && *(yyvsp[0].s_value) == '0')
				generate ("0");
			      else if (len == 1 && *(yyvsp[0].s_value) == '1')
				generate ("1");
			      else
				{
				  generate ("K");
				  generate ((yyvsp[0].s_value));
				  generate (":");
				}
			      free ((yyvsp[0].s_value));
			    }
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 526 "bc.y" /* yacc.c:1646  */
    { (yyval.i_value) = (yyvsp[-1].i_value) | 1; }
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 528 "bc.y" /* yacc.c:1646  */
    {
			      (yyval.i_value) = 1;
			      if ((yyvsp[-1].a_value) != NULL)
				{ 
				  sprintf (genstr, "C%d,%s:",
					   lookup ((yyvsp[-3].s_value),FUNCT),
					   call_str ((yyvsp[-1].a_value)));
				  free_args ((yyvsp[-1].a_value));
				}
			      else
				{
				  sprintf (genstr, "C%d:", lookup ((yyvsp[-3].s_value),FUNCT));
				}
			      generate (genstr);
			    }
#line 2185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 544 "bc.y" /* yacc.c:1646  */
    {
			      (yyval.i_value) = 1;
			      if ((yyvsp[0].i_value) < 0)
				{
				  if ((yyvsp[-1].c_value) == '+')
				    sprintf (genstr, "DA%d:L%d:", -(yyvsp[0].i_value), -(yyvsp[0].i_value));
				  else
				    sprintf (genstr, "DM%d:L%d:", -(yyvsp[0].i_value), -(yyvsp[0].i_value));
				}
			      else
				{
				  if ((yyvsp[-1].c_value) == '+')
				    sprintf (genstr, "i%d:l%d:", (yyvsp[0].i_value), (yyvsp[0].i_value));
				  else
				    sprintf (genstr, "d%d:l%d:", (yyvsp[0].i_value), (yyvsp[0].i_value));
				}
			      generate (genstr);
			    }
#line 2208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 563 "bc.y" /* yacc.c:1646  */
    {
			      (yyval.i_value) = 1;
			      if ((yyvsp[-1].i_value) < 0)
				{
				  sprintf (genstr, "DL%d:x", -(yyvsp[-1].i_value));
				  generate (genstr); 
				  if ((yyvsp[0].c_value) == '+')
				    sprintf (genstr, "A%d:", -(yyvsp[-1].i_value));
				  else
				      sprintf (genstr, "M%d:", -(yyvsp[-1].i_value));
				}
			      else
				{
				  sprintf (genstr, "l%d:", (yyvsp[-1].i_value));
				  generate (genstr);
				  if ((yyvsp[0].c_value) == '+')
				    sprintf (genstr, "i%d:", (yyvsp[-1].i_value));
				  else
				    sprintf (genstr, "d%d:", (yyvsp[-1].i_value));
				}
			      generate (genstr);
			    }
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 586 "bc.y" /* yacc.c:1646  */
    { generate ("cL"); (yyval.i_value) = 1;}
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 588 "bc.y" /* yacc.c:1646  */
    { generate ("cR"); (yyval.i_value) = 1;}
#line 2247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 590 "bc.y" /* yacc.c:1646  */
    { generate ("cS"); (yyval.i_value) = 1;}
#line 2253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 592 "bc.y" /* yacc.c:1646  */
    {
			      warn ("read function");
			      generate ("cI"); (yyval.i_value) = 1;
			    }
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 598 "bc.y" /* yacc.c:1646  */
    { (yyval.i_value) = lookup((yyvsp[0].s_value),SIMPLE); }
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 600 "bc.y" /* yacc.c:1646  */
    {
			      if ((yyvsp[-1].i_value) > 1) warn("comparison in subscript");
			      (yyval.i_value) = lookup((yyvsp[-3].s_value),ARRAY);
			    }
#line 2277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 605 "bc.y" /* yacc.c:1646  */
    { (yyval.i_value) = 0; }
#line 2283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 607 "bc.y" /* yacc.c:1646  */
    { (yyval.i_value) = 1; }
#line 2289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 609 "bc.y" /* yacc.c:1646  */
    { (yyval.i_value) = 2; }
#line 2295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 611 "bc.y" /* yacc.c:1646  */
    { (yyval.i_value) = 3;
			      warn ("Last variable");
			    }
#line 2303 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2307 "y.tab.c" /* yacc.c:1646  */
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
#line 615 "bc.y" /* yacc.c:1906  */

