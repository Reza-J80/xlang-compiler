/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

  #include "tree.h"
  #include <vector>
  #include <string.h>
  #include <stdio.h>
  #include <iostream>
  #include <sstream>
  using namespace std;

  extern int yylex();
  extern int yyparse();
  extern FILE *yyin;

  void yyerror(const char *s);

  int findIndex(vector<var> list , string name);
  int findIndex(vector<func> list , string name);
  int addVar(string name , string type);

	extern int yylineno;

  vector<struct var> varList;
  vector<struct func> funcList;

#line 96 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOKEN_BOOLEANTYPE = 3,          /* TOKEN_BOOLEANTYPE  */
  YYSYMBOL_TOKEN_BREAKSTMT = 4,            /* TOKEN_BREAKSTMT  */
  YYSYMBOL_TOKEN_CALLOUT = 5,              /* TOKEN_CALLOUT  */
  YYSYMBOL_TOKEN_CLASS = 6,                /* TOKEN_CLASS  */
  YYSYMBOL_TOKEN_CONTINUESTMT = 7,         /* TOKEN_CONTINUESTMT  */
  YYSYMBOL_TOKEN_ELSECONDITION = 8,        /* TOKEN_ELSECONDITION  */
  YYSYMBOL_TOKEN_LOOP = 9,                 /* TOKEN_LOOP  */
  YYSYMBOL_TOKEN_IFCONDITION = 10,         /* TOKEN_IFCONDITION  */
  YYSYMBOL_TOKEN_INTTYPE = 11,             /* TOKEN_INTTYPE  */
  YYSYMBOL_TOKEN_RETURN = 12,              /* TOKEN_RETURN  */
  YYSYMBOL_TOKEN_VOIDTYPE = 13,            /* TOKEN_VOIDTYPE  */
  YYSYMBOL_TOKEN_PROGRAMCLASS = 14,        /* TOKEN_PROGRAMCLASS  */
  YYSYMBOL_TOKEN_MAINFUNC = 15,            /* TOKEN_MAINFUNC  */
  YYSYMBOL_TOKEN_ID = 16,                  /* TOKEN_ID  */
  YYSYMBOL_TOKEN_ASSIGNOP = 17,            /* TOKEN_ASSIGNOP  */
  YYSYMBOL_TOKEN_MINUSASSIGNOP = 18,       /* TOKEN_MINUSASSIGNOP  */
  YYSYMBOL_TOKEN_PLUSASSIGNOP = 19,        /* TOKEN_PLUSASSIGNOP  */
  YYSYMBOL_TOKEN_LOGICOP = 20,             /* TOKEN_LOGICOP  */
  YYSYMBOL_TOKEN_EQUALITYOP = 21,          /* TOKEN_EQUALITYOP  */
  YYSYMBOL_TOKEN_NONEQUALITYOP = 22,       /* TOKEN_NONEQUALITYOP  */
  YYSYMBOL_TOKEN_LEQOP = 23,               /* TOKEN_LEQOP  */
  YYSYMBOL_TOKEN_GEQOP = 24,               /* TOKEN_GEQOP  */
  YYSYMBOL_TOKEN_LESSOP = 25,              /* TOKEN_LESSOP  */
  YYSYMBOL_TOKEN_GREATEROP = 26,           /* TOKEN_GREATEROP  */
  YYSYMBOL_TOKEN_ANDOP = 27,               /* TOKEN_ANDOP  */
  YYSYMBOL_TOKEN_OROP = 28,                /* TOKEN_OROP  */
  YYSYMBOL_TOKEN_MODULSOP = 29,            /* TOKEN_MODULSOP  */
  YYSYMBOL_TOKEN_DIVISIONOP = 30,          /* TOKEN_DIVISIONOP  */
  YYSYMBOL_TOKEN_MULTIPLEOP = 31,          /* TOKEN_MULTIPLEOP  */
  YYSYMBOL_TOKEN_MINUSOP = 32,             /* TOKEN_MINUSOP  */
  YYSYMBOL_TOKEN_PLUSOP = 33,              /* TOKEN_PLUSOP  */
  YYSYMBOL_TOKEN_LCB = 34,                 /* TOKEN_LCB  */
  YYSYMBOL_TOKEN_RCB = 35,                 /* TOKEN_RCB  */
  YYSYMBOL_TOKEN_LB = 36,                  /* TOKEN_LB  */
  YYSYMBOL_TOKEN_RB = 37,                  /* TOKEN_RB  */
  YYSYMBOL_TOKEN_LP = 38,                  /* TOKEN_LP  */
  YYSYMBOL_TOKEN_RP = 39,                  /* TOKEN_RP  */
  YYSYMBOL_TOKEN_SEMICOLON = 40,           /* TOKEN_SEMICOLON  */
  YYSYMBOL_TOKEN_COMMA = 41,               /* TOKEN_COMMA  */
  YYSYMBOL_TOKEN_STRINGCONST = 42,         /* TOKEN_STRINGCONST  */
  YYSYMBOL_TOKEN_CHARCONST = 43,           /* TOKEN_CHARCONST  */
  YYSYMBOL_TOKEN_HEXADECIMALCONST = 44,    /* TOKEN_HEXADECIMALCONST  */
  YYSYMBOL_TOKEN_DECIMALCONST = 45,        /* TOKEN_DECIMALCONST  */
  YYSYMBOL_TOKEN_BOOLEANCONST = 46,        /* TOKEN_BOOLEANCONST  */
  YYSYMBOL_YYACCEPT = 47,                  /* $accept  */
  YYSYMBOL_program = 48,                   /* program  */
  YYSYMBOL_decl_list = 49,                 /* decl_list  */
  YYSYMBOL_50_1 = 50,                      /* $@1  */
  YYSYMBOL_51_2 = 51,                      /* $@2  */
  YYSYMBOL_M = 52,                         /* M  */
  YYSYMBOL_field_decl = 53,                /* field_decl  */
  YYSYMBOL_variables = 54,                 /* variables  */
  YYSYMBOL_N = 55,                         /* N  */
  YYSYMBOL_O = 56,                         /* O  */
  YYSYMBOL_variable = 57,                  /* variable  */
  YYSYMBOL_method_decls = 58,              /* method_decls  */
  YYSYMBOL_method_decls1 = 59,             /* method_decls1  */
  YYSYMBOL_method_decl = 60,               /* method_decl  */
  YYSYMBOL_main_decl = 61,                 /* main_decl  */
  YYSYMBOL_S = 62,                         /* S  */
  YYSYMBOL_method_type = 63,               /* method_type  */
  YYSYMBOL_args = 64,                      /* args  */
  YYSYMBOL_moreargs = 65,                  /* moreargs  */
  YYSYMBOL_arg = 66,                       /* arg  */
  YYSYMBOL_block = 67,                     /* block  */
  YYSYMBOL_P = 68,                         /* P  */
  YYSYMBOL_var_decls = 69,                 /* var_decls  */
  YYSYMBOL_var_decl = 70,                  /* var_decl  */
  YYSYMBOL_ids = 71,                       /* ids  */
  YYSYMBOL_type = 72,                      /* type  */
  YYSYMBOL_statements = 73,                /* statements  */
  YYSYMBOL_Q = 74,                         /* Q  */
  YYSYMBOL_T = 75,                         /* T  */
  YYSYMBOL_statement = 76,                 /* statement  */
  YYSYMBOL_R = 77,                         /* R  */
  YYSYMBOL_else_block = 78,                /* else_block  */
  YYSYMBOL_method_call = 79,               /* method_call  */
  YYSYMBOL_method_name = 80,               /* method_name  */
  YYSYMBOL_location = 81,                  /* location  */
  YYSYMBOL_exprs = 82,                     /* exprs  */
  YYSYMBOL_moreexprs = 83,                 /* moreexprs  */
  YYSYMBOL_expr = 84,                      /* expr  */
  YYSYMBOL_expr1 = 85,                     /* expr1  */
  YYSYMBOL_expr2 = 86,                     /* expr2  */
  YYSYMBOL_expr3 = 87,                     /* expr3  */
  YYSYMBOL_expr4 = 88,                     /* expr4  */
  YYSYMBOL_expr5 = 89,                     /* expr5  */
  YYSYMBOL_expr6 = 90,                     /* expr6  */
  YYSYMBOL_expr7 = 91,                     /* expr7  */
  YYSYMBOL_expr8 = 92,                     /* expr8  */
  YYSYMBOL_callout_args = 93,              /* callout_args  */
  YYSYMBOL_callout_arg = 94,               /* callout_arg  */
  YYSYMBOL_literal = 95,                   /* literal  */
  YYSYMBOL_id = 96,                        /* id  */
  YYSYMBOL_int_literal = 97,               /* int_literal  */
  YYSYMBOL_deciamal_literal = 98,          /* deciamal_literal  */
  YYSYMBOL_hex_literal = 99,               /* hex_literal  */
  YYSYMBOL_bool_literal = 100,             /* bool_literal  */
  YYSYMBOL_char_literal = 101,             /* char_literal  */
  YYSYMBOL_string_literal = 102            /* string_literal  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   222

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  110
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  206

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   301


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   140,   140,   144,   146,   146,   168,   168,   190,   192,
     199,   203,   204,   206,   207,   211,   219,   248,   249,   252,
     253,   256,   279,   281,   284,   285,   287,   288,   291,   292,
     295,   299,   306,   310,   311,   314,   317,   325,   337,   338,
     343,   344,   346,   347,   350,   361,   370,   379,   381,   389,
     397,   406,   415,   417,   419,   421,   423,   424,   429,   452,
     455,   462,   467,   484,   511,   512,   515,   516,   519,   530,
     533,   544,   547,   564,   581,   584,   595,   606,   617,   628,
     631,   642,   653,   656,   667,   678,   691,   694,   705,   708,
     719,   723,   724,   731,   732,   736,   737,   738,   741,   742,
     747,   748,   749,   754,   758,   759,   763,   767,   771,   775,
     779
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TOKEN_BOOLEANTYPE",
  "TOKEN_BREAKSTMT", "TOKEN_CALLOUT", "TOKEN_CLASS", "TOKEN_CONTINUESTMT",
  "TOKEN_ELSECONDITION", "TOKEN_LOOP", "TOKEN_IFCONDITION",
  "TOKEN_INTTYPE", "TOKEN_RETURN", "TOKEN_VOIDTYPE", "TOKEN_PROGRAMCLASS",
  "TOKEN_MAINFUNC", "TOKEN_ID", "TOKEN_ASSIGNOP", "TOKEN_MINUSASSIGNOP",
  "TOKEN_PLUSASSIGNOP", "TOKEN_LOGICOP", "TOKEN_EQUALITYOP",
  "TOKEN_NONEQUALITYOP", "TOKEN_LEQOP", "TOKEN_GEQOP", "TOKEN_LESSOP",
  "TOKEN_GREATEROP", "TOKEN_ANDOP", "TOKEN_OROP", "TOKEN_MODULSOP",
  "TOKEN_DIVISIONOP", "TOKEN_MULTIPLEOP", "TOKEN_MINUSOP", "TOKEN_PLUSOP",
  "TOKEN_LCB", "TOKEN_RCB", "TOKEN_LB", "TOKEN_RB", "TOKEN_LP", "TOKEN_RP",
  "TOKEN_SEMICOLON", "TOKEN_COMMA", "TOKEN_STRINGCONST", "TOKEN_CHARCONST",
  "TOKEN_HEXADECIMALCONST", "TOKEN_DECIMALCONST", "TOKEN_BOOLEANCONST",
  "$accept", "program", "decl_list", "$@1", "$@2", "M", "field_decl",
  "variables", "N", "O", "variable", "method_decls", "method_decls1",
  "method_decl", "main_decl", "S", "method_type", "args", "moreargs",
  "arg", "block", "P", "var_decls", "var_decl", "ids", "type",
  "statements", "Q", "T", "statement", "R", "else_block", "method_call",
  "method_name", "location", "exprs", "moreexprs", "expr", "expr1",
  "expr2", "expr3", "expr4", "expr5", "expr6", "expr7", "expr8",
  "callout_args", "callout_arg", "literal", "id", "int_literal",
  "deciamal_literal", "hex_literal", "bool_literal", "char_literal",
  "string_literal", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301
};
#endif

#define YYPACT_NINF (-86)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-62)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      18,    51,    91,    71,   -86,   100,   -86,   -86,     6,    82,
     100,   101,   -86,    81,   109,   -86,   -86,   -86,   -86,   101,
     109,   -86,     1,   109,    88,   -86,   115,   -86,   142,   -86,
     -86,   -86,    32,   -86,    27,    27,   109,     7,    27,    95,
     112,    98,   -86,   109,   117,   -86,   146,   -86,   -86,   144,
     -86,   -86,   139,    27,   -86,   -86,    27,   -86,   -86,   -86,
     -86,   -86,    27,   -86,    95,   -86,    95,    95,   148,   -86,
     109,   -86,   -86,   -86,   149,   145,    60,   -86,   113,   113,
     -86,   147,   150,   151,   109,   152,    43,   -86,   -86,   153,
     154,   141,    35,   -86,   109,     6,   -86,   113,   101,   -86,
     -86,   143,   -86,   169,    77,   102,    90,    77,   -86,   -86,
     -86,   -86,   -86,    -5,   162,   110,   118,   140,   137,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   148,   -86,    77,    77,
      77,    77,    77,   -86,   -86,   -86,   -86,    53,    77,   -11,
     -86,   -86,    -8,    77,   -86,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,   -86,   155,   156,
     167,    21,    29,    62,    -3,   -86,    34,   -12,   -86,   -86,
     162,   110,   118,   118,   140,   140,   140,   140,   137,   137,
     -86,   -86,   -86,   -86,    77,   -86,   -86,   -86,   -86,   167,
     157,   158,   -86,    77,    95,   167,   -86,    34,   167,   190,
     -86,    95,    95,   -86,   -86,   -86
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,    39,    38,    13,     0,
       0,    17,    13,     0,     0,     2,     3,    25,     8,    17,
       0,    24,     0,     0,     0,   103,     0,    18,     0,    10,
      14,    11,    15,    23,    26,    26,     0,     0,    26,     0,
       0,    27,    28,     0,     0,    12,    15,   107,   106,     0,
     104,   105,     0,    33,    22,     9,     0,    30,     9,    16,
       9,    32,    33,    13,     0,    29,     0,     0,    42,    34,
       0,     4,    21,     6,     0,     0,     0,    36,     0,     0,
      31,     0,     0,     0,     0,     0,     0,    54,    43,     0,
       0,     0,    62,    35,     0,    25,     5,     0,    17,     7,
      52,     0,    53,     0,     0,     0,     0,     0,    51,   109,
     108,    92,    91,     0,    69,    71,    74,    79,    82,    86,
      88,    90,    93,   100,   102,   101,    42,    47,    64,     0,
       0,     0,     0,    37,    19,    20,   110,     0,     0,     0,
      89,    87,     0,     0,    50,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    41,     0,    65,
      66,     0,     0,     0,     0,    60,    95,     0,    55,    94,
      68,    70,    72,    73,    76,    75,    78,    77,    81,    80,
      83,    85,    84,    58,     0,    44,    45,    46,    63,    98,
       0,    96,    99,     0,     0,    67,    59,    95,    55,    56,
      97,     0,     0,    48,    49,    57
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -86,   -86,   191,   -86,   -86,    38,   -86,   -86,    -7,   -86,
     164,   -13,   -65,   -70,    57,   -86,   -86,   -20,   -86,   159,
     -64,   -86,   160,   -86,   -86,     2,    76,   -86,   -86,   -86,
       5,   -86,   129,   -86,   130,   -86,   -86,   -85,    63,    64,
      28,    14,    24,    15,   104,   103,    10,   -86,   -86,   -10,
     174,   -86,   -86,   -86,   -86,   111
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     9,    78,    79,    64,    10,    22,    14,    36,
      31,    18,    96,    19,    98,    39,    20,    40,    41,    42,
      54,    68,    61,    62,    76,    21,    74,    75,   126,    88,
     194,   203,   111,    90,   112,   158,   159,   189,   114,   115,
     116,   117,   118,   119,   120,   121,   190,   191,   122,    92,
     123,    50,    51,   124,   125,   192
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,   113,    72,    73,    26,    23,    27,    12,    97,    97,
      28,    87,    12,    32,    99,    44,   143,   143,    52,   139,
     143,    13,   142,   143,     1,   143,    46,    97,   168,   193,
       6,   169,   134,    57,   188,   144,    43,    43,     7,    82,
      43,    29,    30,   160,   161,   162,   163,   164,    82,   143,
      25,    47,    48,   167,   105,    63,    70,   143,    43,    25,
      77,   185,    11,   105,    63,     3,   106,    11,    37,   186,
      38,   132,   107,   -61,   103,   106,   136,   109,    47,    48,
     110,   107,    82,   108,   133,   135,   109,    47,    48,   110,
     143,     4,   165,    25,   166,    82,    66,   105,    67,   195,
      93,    94,   187,     6,     6,     5,    25,    82,   198,   106,
     105,     7,     7,     8,    17,   107,     6,    15,    25,    24,
     109,    47,    48,   110,     7,    25,    95,    33,   107,    53,
     199,   146,   147,   109,    47,    48,   110,   204,   205,    56,
     107,   148,   149,   150,   151,   109,    47,    48,   110,    81,
      82,    55,    83,    34,    84,    85,    58,    86,   129,   130,
     131,    25,   174,   175,   176,   177,   154,   155,   156,   180,
     181,   182,   152,   153,   172,   173,   178,   179,    60,    53,
      35,    59,    37,   -40,    80,   136,   138,   100,   101,   145,
     104,   102,   128,   127,   183,   143,   196,   184,   202,   197,
      45,    16,   157,   201,    89,    91,   170,   200,   140,   171,
     141,    49,   137,     0,     0,    65,     0,     0,     0,     0,
       0,     0,    69
};

static const yytype_int16 yycheck[] =
{
      64,    86,    66,    67,    14,    12,    19,     5,    78,    79,
      20,    75,    10,    23,    79,    35,    28,    28,    38,   104,
      28,    15,   107,    28,     6,    28,    36,    97,    39,    41,
       3,    39,    97,    43,    37,    40,    34,    35,    11,     5,
      38,    40,    41,   128,   129,   130,   131,   132,     5,    28,
      16,    44,    45,   138,    20,    53,    63,    28,    56,    16,
      70,    40,     5,    20,    62,    14,    32,    10,    36,    40,
      38,    36,    38,    38,    84,    32,    42,    43,    44,    45,
      46,    38,     5,    40,    94,    98,    43,    44,    45,    46,
      28,     0,    39,    16,    41,     5,    58,    20,    60,   184,
      40,    41,    40,     3,     3,    34,    16,     5,   193,    32,
      20,    11,    11,    13,    13,    38,     3,    35,    16,    38,
      43,    44,    45,    46,    11,    16,    13,    39,    38,    34,
     194,    21,    22,    43,    44,    45,    46,   201,   202,    41,
      38,    23,    24,    25,    26,    43,    44,    45,    46,     4,
       5,    39,     7,    38,     9,    10,    39,    12,    17,    18,
      19,    16,   148,   149,   150,   151,    29,    30,    31,   154,
     155,   156,    32,    33,   146,   147,   152,   153,    39,    34,
      38,    37,    36,    35,    35,    42,    17,    40,    38,    27,
      38,    40,    38,    40,    39,    28,    39,    41,     8,    41,
      36,    10,   126,   198,    75,    75,   143,   197,   105,   145,
     106,    37,   101,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    62
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,    48,    14,     0,    34,     3,    11,    13,    49,
      53,    61,    72,    15,    55,    35,    49,    13,    58,    60,
      63,    72,    54,    55,    38,    16,    96,    58,    96,    40,
      41,    57,    96,    39,    38,    38,    56,    36,    38,    62,
      64,    65,    66,    72,    64,    57,    96,    44,    45,    97,
      98,    99,    64,    34,    67,    39,    41,    96,    39,    37,
      39,    69,    70,    72,    52,    66,    52,    52,    68,    69,
      55,    67,    67,    67,    73,    74,    71,    96,    50,    51,
      35,     4,     5,     7,     9,    10,    12,    67,    76,    79,
      80,    81,    96,    40,    41,    13,    59,    60,    61,    59,
      40,    38,    40,    96,    38,    20,    32,    38,    40,    43,
      46,    79,    81,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    95,    97,   100,   101,    75,    40,    38,    17,
      18,    19,    36,    96,    59,    58,    42,   102,    17,    84,
      92,    91,    84,    28,    40,    27,    21,    22,    23,    24,
      25,    26,    32,    33,    29,    30,    31,    73,    82,    83,
      84,    84,    84,    84,    84,    39,    41,    84,    39,    39,
      85,    86,    87,    87,    88,    88,    88,    88,    89,    89,
      90,    90,    90,    39,    41,    40,    40,    40,    37,    84,
      93,    94,   102,    41,    77,    84,    39,    41,    84,    67,
      93,    77,     8,    78,    67,    67
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    49,    50,    49,    51,    49,    49,    52,
      53,    54,    54,    55,    56,    57,    57,    58,    58,    59,
      59,    60,    61,    62,    63,    63,    64,    64,    65,    65,
      66,    67,    68,    69,    69,    70,    71,    71,    72,    72,
      73,    73,    74,    75,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    77,    78,    78,    79,    79,
      79,    80,    81,    81,    82,    82,    83,    83,    84,    84,
      85,    85,    86,    86,    86,    87,    87,    87,    87,    87,
      88,    88,    88,    89,    89,    89,    89,    90,    90,    91,
      91,    92,    92,    92,    92,    93,    93,    93,    94,    94,
      95,    95,    95,    96,    97,    97,    98,    99,   100,   101,
     102
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     2,     0,    10,     0,    10,     2,     0,
       3,     2,     4,     0,     0,     1,     4,     0,     2,     2,
       2,     7,     6,     0,     1,     1,     0,     1,     1,     3,
       2,     5,     0,     0,     2,     4,     1,     3,     1,     1,
       0,     4,     0,     0,     4,     4,     4,     2,     7,     8,
       3,     2,     2,     2,     1,     0,     0,     2,     4,     6,
       4,     1,     1,     4,     0,     1,     1,     3,     3,     1,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     1,     2,     1,     2,
       1,     1,     1,     1,     3,     0,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* program: TOKEN_CLASS TOKEN_PROGRAMCLASS TOKEN_LCB decl_list TOKEN_RCB  */
#line 140 "parser.y"
                                                               {cout << "there is no semantic errors:)" << endl;}
#line 1354 "parser.tab.c"
    break;

  case 3: /* decl_list: field_decl decl_list  */
#line 144 "parser.y"
                       {}
#line 1360 "parser.tab.c"
    break;

  case 4: /* $@1: %empty  */
#line 146 "parser.y"
                                                      {
    int index = findIndex(funcList , (yyvsp[-5].str));
    if(index == -1){
      struct func temp;
      temp.name = (yyvsp[-5].str);
      temp.type = (yyvsp[-7].str);
      for(int i = 0; i < (yyvsp[-3].arguments)->size(); i++){
        temp.arguments.push_back((yyvsp[-3].arguments)->at(i).type);
        int flag = addVar((yyvsp[-3].arguments)->at(i).name , (yyvsp[-3].arguments)->at(i).type);
        if (!flag){
          cout << "line " << yylineno << ": " << (yyvsp[-3].arguments)->at(i).name << " is already defind" << endl;
          exit(-1);
        }
      }
      funcList.push_back(temp);
    }
    else{
      cout << "line " << yylineno << ": " << (yyvsp[-5].str) << " already defind" << endl;
      exit(-1);
    }
  }
#line 1386 "parser.tab.c"
    break;

  case 6: /* $@2: %empty  */
#line 168 "parser.y"
                                           {
    int index = findIndex(funcList , (yyvsp[-5].str));
    if(index == -1){
      struct func temp;
      temp.name = (yyvsp[-5].str);
      temp.type = (yyvsp[-7].str);
      for(int i = 0; i < (yyvsp[-3].arguments)->size(); i++){
        temp.arguments.push_back((yyvsp[-3].arguments)->at(i).type);
        int flag = addVar((yyvsp[-3].arguments)->at(i).name , (yyvsp[-3].arguments)->at(i).type);
        if (!flag){
          cout << "line " << yylineno << ": " << (yyvsp[-3].arguments)->at(i).name << " is already defind" << endl;
          exit(-1);
        }
      }
      funcList.push_back(temp);
    }
    else{
      cout << "line " << yylineno << ": " << (yyvsp[-5].str) << " already defind" << endl;
      exit(-1);
    }
  }
#line 1412 "parser.tab.c"
    break;

  case 8: /* decl_list: main_decl method_decls  */
#line 190 "parser.y"
                         {}
#line 1418 "parser.tab.c"
    break;

  case 9: /* M: %empty  */
#line 192 "parser.y"
     {(yyval.str) = (yyvsp[(-5) - (0)].str);}
#line 1424 "parser.tab.c"
    break;

  case 10: /* field_decl: type variables TOKEN_SEMICOLON  */
#line 199 "parser.y"
                                 {}
#line 1430 "parser.tab.c"
    break;

  case 13: /* N: %empty  */
#line 206 "parser.y"
   {(yyval.str) = (yyvsp[0].str);}
#line 1436 "parser.tab.c"
    break;

  case 14: /* O: %empty  */
#line 207 "parser.y"
   {(yyval.str) = (yyvsp[(-2) - (0)].str);}
#line 1442 "parser.tab.c"
    break;

  case 15: /* variable: id  */
#line 211 "parser.y"
     {
    int temp = addVar((yyvsp[0].str) , (yyvsp[-1].str));
    if (!temp){
      cout << "line " << yylineno << ": " << (yyvsp[0].str) << " is already defind" << endl;
      exit(-1);
    }
  }
#line 1454 "parser.tab.c"
    break;

  case 16: /* variable: id TOKEN_LB int_literal TOKEN_RB  */
#line 219 "parser.y"
                                   {
    if((yyvsp[-1].number) > 0){
      int index = findIndex(varList , (yyvsp[-3].str));
      if(index == -1){
        struct var temp;
        temp.name = (yyvsp[-3].str);
        temp.type = (yyvsp[-4].str);
        temp.isArray = 1;
        temp.size = (yyvsp[-1].number);
        for(int i = 0; i < temp.size; i++){
          temp.values.push_back(0);
        }
        varList.push_back(temp);
      }
      else{
        cout << "line " << yylineno << ": " << (yyvsp[-3].str) << " is already defind" << endl;
        exit(-1);
      }
    }
    else{
      cout << "line " << yylineno << ": array size must be more than zero" << endl;
    }
  }
#line 1482 "parser.tab.c"
    break;

  case 17: /* method_decls: %empty  */
#line 248 "parser.y"
              {}
#line 1488 "parser.tab.c"
    break;

  case 18: /* method_decls: method_decl method_decls  */
#line 249 "parser.y"
                           {}
#line 1494 "parser.tab.c"
    break;

  case 19: /* method_decls1: method_decl method_decls1  */
#line 252 "parser.y"
                            {}
#line 1500 "parser.tab.c"
    break;

  case 20: /* method_decls1: main_decl method_decls  */
#line 253 "parser.y"
                         {}
#line 1506 "parser.tab.c"
    break;

  case 21: /* method_decl: method_type id TOKEN_LP args TOKEN_RP M block  */
#line 256 "parser.y"
                                                {
    int index = findIndex(funcList , (yyvsp[-5].str));
    if(index == -1){
      struct func temp;
      temp.name = (yyvsp[-5].str);
      temp.type = (yyvsp[-6].str);
      for(int i = 0; i < (yyvsp[-3].arguments)->size(); i++){
        temp.arguments.push_back((yyvsp[-3].arguments)->at(i).type);
        int flag = addVar((yyvsp[-3].arguments)->at(i).name , (yyvsp[-3].arguments)->at(i).type);
        if (!flag){
          cout << "line " << yylineno << ": " << (yyvsp[-3].arguments)->at(i).name << " is already defind" << endl;
          exit(-1);
        }
      }
      funcList.push_back(temp);
    }
    else{
      cout << "line " << yylineno << ": " << (yyvsp[-5].str) << " is already defind" << endl;
      exit(-1);
    }
  }
#line 1532 "parser.tab.c"
    break;

  case 22: /* main_decl: TOKEN_VOIDTYPE TOKEN_MAINFUNC TOKEN_LP TOKEN_RP S block  */
#line 279 "parser.y"
                                                          {}
#line 1538 "parser.tab.c"
    break;

  case 23: /* S: %empty  */
#line 281 "parser.y"
   {(yyval.str) = strdup("void");}
#line 1544 "parser.tab.c"
    break;

  case 24: /* method_type: type  */
#line 284 "parser.y"
       {(yyval.str) = (yyvsp[0].str);}
#line 1550 "parser.tab.c"
    break;

  case 25: /* method_type: TOKEN_VOIDTYPE  */
#line 285 "parser.y"
                 {(yyval.str) = (yyvsp[0].str);}
#line 1556 "parser.tab.c"
    break;

  case 26: /* args: %empty  */
#line 287 "parser.y"
      {(yyval.arguments) = new vector<struct argument>;}
#line 1562 "parser.tab.c"
    break;

  case 27: /* args: moreargs  */
#line 288 "parser.y"
           {(yyval.arguments) = new vector<argument>; (yyval.arguments)->insert((yyval.arguments)->end() , (yyvsp[0].arguments)->begin() , (yyvsp[0].arguments)->end());}
#line 1568 "parser.tab.c"
    break;

  case 28: /* moreargs: arg  */
#line 291 "parser.y"
      {(yyval.arguments) = new vector<struct argument>; (yyval.arguments)->push_back(*(yyvsp[0].argument));}
#line 1574 "parser.tab.c"
    break;

  case 29: /* moreargs: moreargs TOKEN_COMMA arg  */
#line 292 "parser.y"
                           {(yyval.arguments) = new vector<struct argument>; (yyval.arguments)->insert((yyval.arguments)->end() , (yyvsp[-2].arguments)->begin() , (yyvsp[-2].arguments)->end()); (yyval.arguments)->push_back(*(yyvsp[0].argument));}
#line 1580 "parser.tab.c"
    break;

  case 30: /* arg: type id  */
#line 295 "parser.y"
          {(yyval.argument) = new argument; (yyval.argument)->name = (yyvsp[0].str); (yyval.argument)->type = (yyvsp[-1].str);}
#line 1586 "parser.tab.c"
    break;

  case 31: /* block: TOKEN_LCB var_decls P statements TOKEN_RCB  */
#line 299 "parser.y"
                                                  {
  if((yyvsp[-1].expression)->value == 0){
    cout << "line " << yylineno << ": this method should return a value" << endl;
    exit(-1);
  }
}
#line 1597 "parser.tab.c"
    break;

  case 32: /* P: %empty  */
#line 306 "parser.y"
   {(yyval.expression) = new expression; (yyval.expression)->type = (yyvsp[(-2) - (0)].str); (yyval.expression)->value = (yyval.expression)->type  == "void" ? 1 : 0;}
#line 1603 "parser.tab.c"
    break;

  case 33: /* var_decls: %empty  */
#line 310 "parser.y"
           {}
#line 1609 "parser.tab.c"
    break;

  case 34: /* var_decls: var_decl var_decls  */
#line 311 "parser.y"
                     {}
#line 1615 "parser.tab.c"
    break;

  case 36: /* ids: id  */
#line 317 "parser.y"
      {
    int temp = addVar((yyvsp[0].str) , (yyvsp[-1].str));
    if (!temp){
      cout << "line " << yylineno << ": " << (yyvsp[0].str) << " is already defind" << endl;
      exit(-1);
    }
  }
#line 1627 "parser.tab.c"
    break;

  case 37: /* ids: ids TOKEN_COMMA id  */
#line 325 "parser.y"
                     {
    int temp = addVar((yyvsp[0].str) , (yyvsp[-3].str));
    if (!temp){
      cout << "line " << yylineno << ": " << (yyvsp[0].str) << " is already defind" << endl;
      exit(-1);
    }
  }
#line 1639 "parser.tab.c"
    break;

  case 38: /* type: TOKEN_INTTYPE  */
#line 337 "parser.y"
                {(yyval.str) = strdup("int");}
#line 1645 "parser.tab.c"
    break;

  case 39: /* type: TOKEN_BOOLEANTYPE  */
#line 338 "parser.y"
                    {(yyval.str) = strdup("bool");}
#line 1651 "parser.tab.c"
    break;

  case 40: /* statements: %empty  */
#line 343 "parser.y"
            {(yyval.expression) = (yyvsp[0].expression);}
#line 1657 "parser.tab.c"
    break;

  case 41: /* statements: Q statement T statements  */
#line 344 "parser.y"
                           {(yyval.expression) = new expression; if((yyvsp[-3].expression)->value || (yyvsp[-2].expression)->value || (yyvsp[0].expression)->value) (yyval.expression)->value = 1; else (yyval.expression)->value = 0;}
#line 1663 "parser.tab.c"
    break;

  case 42: /* Q: %empty  */
#line 346 "parser.y"
   {(yyval.expression) = (yyvsp[0].expression);}
#line 1669 "parser.tab.c"
    break;

  case 43: /* T: %empty  */
#line 347 "parser.y"
   {(yyval.expression) = (yyvsp[(-1) - (0)].expression);}
#line 1675 "parser.tab.c"
    break;

  case 44: /* statement: location TOKEN_ASSIGNOP expr TOKEN_SEMICOLON  */
#line 350 "parser.y"
                                               {
    if((yyvsp[-1].expression)->type == (yyvsp[-3].loc)->type){
      *(yyvsp[-3].loc)->value = (yyvsp[-1].expression)->value;
    }
    else{
      cout << "line " << yylineno << ": types do not match" << endl;
      exit(-1);
    }
    (yyval.expression)->value = 0;
  }
#line 1690 "parser.tab.c"
    break;

  case 45: /* statement: location TOKEN_MINUSASSIGNOP expr TOKEN_SEMICOLON  */
#line 361 "parser.y"
                                                    {
    if((yyvsp[-1].expression)->type == "int" && (yyvsp[-3].loc)->type == "int")
      *(yyvsp[-3].loc)->value -= (yyvsp[-1].expression)->value;
    else{
      cout << "line " << yylineno << ": expected integer location and expression" << endl;
    }
    (yyval.expression)->value = 0;
  }
#line 1703 "parser.tab.c"
    break;

  case 46: /* statement: location TOKEN_PLUSASSIGNOP expr TOKEN_SEMICOLON  */
#line 370 "parser.y"
                                                   {
    if((yyvsp[-1].expression)->type == "int" && (yyvsp[-3].loc)->type == "int")
      *(yyvsp[-3].loc)->value += (yyvsp[-1].expression)->value;
    else{
      cout << "line " << yylineno << ": expected integer location and expression" << endl;
    }
    (yyval.expression)->value = 0;
  }
#line 1716 "parser.tab.c"
    break;

  case 47: /* statement: method_call TOKEN_SEMICOLON  */
#line 379 "parser.y"
                              {(yyval.expression)->value = 0;}
#line 1722 "parser.tab.c"
    break;

  case 48: /* statement: TOKEN_IFCONDITION TOKEN_LP expr TOKEN_RP R block else_block  */
#line 381 "parser.y"
                                                              {
    if((yyvsp[-4].expression)->type != "bool"){
      cout << "expected boolean type expression in line: " << yylineno << endl;
      exit(-1);
    }
    (yyval.expression)->value = 0;
  }
#line 1734 "parser.tab.c"
    break;

  case 49: /* statement: TOKEN_LOOP id TOKEN_ASSIGNOP expr TOKEN_COMMA expr R block  */
#line 389 "parser.y"
                                                             {
    if((yyvsp[-4].expression)->type != "int" || (yyvsp[-2].expression)->type != "int"){
      cout << "expected integer type expression in line: " << yylineno << endl;
      exit(-1);
    }
    (yyval.expression)->value = 0;
  }
#line 1746 "parser.tab.c"
    break;

  case 50: /* statement: TOKEN_RETURN expr TOKEN_SEMICOLON  */
#line 397 "parser.y"
                                    {
    if((yyvsp[-3].expression)->type != (yyvsp[-1].expression)->type){
      cout << "line " << yylineno << ": method return type do not match the returned expression" << endl;
      exit(-1);
    }
    else
      (yyval.expression)->value = 1;
  }
#line 1759 "parser.tab.c"
    break;

  case 51: /* statement: TOKEN_RETURN TOKEN_SEMICOLON  */
#line 406 "parser.y"
                               {
    if((yyvsp[-2].expression)->type != "void"){
      cout << "line " << yylineno << ": method should return a value" << endl;
      exit(-1);
    }
    else
      (yyval.expression)->value = 1;
  }
#line 1772 "parser.tab.c"
    break;

  case 52: /* statement: TOKEN_BREAKSTMT TOKEN_SEMICOLON  */
#line 415 "parser.y"
                                  {(yyval.expression)->value = 0;}
#line 1778 "parser.tab.c"
    break;

  case 53: /* statement: TOKEN_CONTINUESTMT TOKEN_SEMICOLON  */
#line 417 "parser.y"
                                     {(yyval.expression)->value = 0;}
#line 1784 "parser.tab.c"
    break;

  case 54: /* statement: block  */
#line 419 "parser.y"
        {(yyval.expression)->value = 0;}
#line 1790 "parser.tab.c"
    break;

  case 55: /* R: %empty  */
#line 421 "parser.y"
   {(yyval.str) = strdup("void");}
#line 1796 "parser.tab.c"
    break;

  case 56: /* else_block: %empty  */
#line 423 "parser.y"
            {}
#line 1802 "parser.tab.c"
    break;

  case 57: /* else_block: TOKEN_ELSECONDITION block  */
#line 424 "parser.y"
                            {}
#line 1808 "parser.tab.c"
    break;

  case 58: /* method_call: method_name TOKEN_LP exprs TOKEN_RP  */
#line 429 "parser.y"
                                      {
    int temp = findIndex(funcList , (yyvsp[-3].str));
    if(temp == -1){
      cout << "method has not been declared\n";
      exit(-1);
    }
    else if((yyvsp[-1].types)->size() == funcList[temp].arguments.size()){
      for(int i = 0; i < (yyvsp[-1].types)->size(); i++){
        if((yyvsp[-1].types)->at(i) != funcList[temp].arguments[i]){
          cout << "line " << yylineno << ": input expressions do not match the method arguments type" << endl;
          exit(-1);
        }
      }
      (yyval.expression) = new expression;
      (yyval.expression)->value = 1;
      (yyval.expression)->type = funcList[temp].type;
    }
    else{
      cout << "number of arguments do not match" << endl;
      exit(-1);
    }
  }
#line 1835 "parser.tab.c"
    break;

  case 59: /* method_call: TOKEN_CALLOUT TOKEN_LP string_literal TOKEN_COMMA callout_args TOKEN_RP  */
#line 453 "parser.y"
    {(yyval.expression) = new expression; (yyval.expression)->type = "int"; (yyval.expression)->value = 0;}
#line 1841 "parser.tab.c"
    break;

  case 60: /* method_call: TOKEN_CALLOUT TOKEN_LP string_literal TOKEN_RP  */
#line 456 "parser.y"
    {(yyval.expression) = new expression; (yyval.expression)->type = "int"; (yyval.expression)->value = 0;}
#line 1847 "parser.tab.c"
    break;

  case 61: /* method_name: id  */
#line 462 "parser.y"
     {(yyval.str) = (yyvsp[0].str);}
#line 1853 "parser.tab.c"
    break;

  case 62: /* location: id  */
#line 467 "parser.y"
      {
    int temp = findIndex(varList , (yyvsp[0].str));
    if(temp == -1){
      cout << "line " << yylineno << ": " << (yyvsp[0].str) << " is not declared" << endl;
      exit(-1);
    }
    else if(varList[temp].isArray == 0){
      (yyval.loc) = new loc;
      (yyval.loc)->value = &varList[temp].size; 
      (yyval.loc)->type = varList[temp].type;
    }
    else{
      cout << "line " << yylineno << ": " << (yyvsp[0].str) << " is an array" << endl;
      exit(-1);
    }
  }
#line 1874 "parser.tab.c"
    break;

  case 63: /* location: id TOKEN_LB expr TOKEN_RB  */
#line 484 "parser.y"
                            {
    if((yyvsp[-1].expression)->type != "int"){
      cout << "expected integer type expression in line: " << yylineno << endl;
      exit(-1);
    }
    int temp = findIndex(varList , (yyvsp[-3].str));
    if(temp == -1){
      cout << "line " << yylineno << ": " << (yyvsp[-3].str) << " is not declared" << endl;
      exit(-1);
    }
    else if(!varList[temp].isArray){
      cout << "line " << yylineno << ": " << (yyvsp[-3].str) << " is not an array" << endl;
      exit(-1);
    }
    else if((yyvsp[-1].expression)->value >= varList[temp].size){
      cout << "out of range index in line: " << yylineno << endl;
      exit(-1);
    }
    else{
      (yyval.loc) = new loc; 
      (yyval.loc)->value = &varList[temp].values[(yyvsp[-1].expression)->value];
      (yyval.loc)->type = varList[temp].type;
    }
  }
#line 1903 "parser.tab.c"
    break;

  case 64: /* exprs: %empty  */
#line 511 "parser.y"
       {(yyval.types) = new vector<string>;}
#line 1909 "parser.tab.c"
    break;

  case 65: /* exprs: moreexprs  */
#line 512 "parser.y"
            {(yyval.types) = new vector<string>; (yyval.types)->insert((yyval.types)->end() , (yyvsp[0].types)->begin() , (yyvsp[0].types)->end());}
#line 1915 "parser.tab.c"
    break;

  case 66: /* moreexprs: expr  */
#line 515 "parser.y"
       {(yyval.types) = new vector<string>; (yyval.types)->push_back((yyvsp[0].expression)->type);}
#line 1921 "parser.tab.c"
    break;

  case 67: /* moreexprs: moreexprs TOKEN_COMMA expr  */
#line 516 "parser.y"
                             {(yyval.types) = new vector<string>; (yyval.types)->insert((yyval.types)->end() , (yyvsp[-2].types)->begin() , (yyvsp[-2].types)->end()); (yyval.types)->push_back((yyvsp[0].expression)->type);}
#line 1927 "parser.tab.c"
    break;

  case 68: /* expr: expr TOKEN_OROP expr1  */
#line 519 "parser.y"
                        {
    if((yyvsp[-2].expression)->type == "bool" && (yyvsp[0].expression)->type == "bool"){
      (yyval.expression) = new expression; 
      (yyval.expression)->type = "bool";
      (yyval.expression)->value = (yyvsp[-2].expression)->value || (yyvsp[0].expression)->value;
    }
    else{
      cout << "expected boolean type expressions in line: " << yylineno << endl;
      exit(-1);
    }
  }
#line 1943 "parser.tab.c"
    break;

  case 69: /* expr: expr1  */
#line 530 "parser.y"
        {(yyval.expression) = (yyvsp[0].expression);}
#line 1949 "parser.tab.c"
    break;

  case 70: /* expr1: expr1 TOKEN_ANDOP expr2  */
#line 533 "parser.y"
                          {
    if((yyvsp[-2].expression)->type == "bool" && (yyvsp[0].expression)->type == "bool"){
      (yyval.expression) = new expression; 
      (yyval.expression)->type = "bool";
      (yyval.expression)->value = (yyvsp[-2].expression)->value && (yyvsp[0].expression)->value;
    }
    else{
      cout << "expected boolean type expressions in line: " << yylineno << endl;
      exit(-1);
    }
  }
#line 1965 "parser.tab.c"
    break;

  case 71: /* expr1: expr2  */
#line 544 "parser.y"
        {(yyval.expression) = (yyvsp[0].expression);}
#line 1971 "parser.tab.c"
    break;

  case 72: /* expr2: expr2 TOKEN_EQUALITYOP expr3  */
#line 547 "parser.y"
                               {
    if((yyvsp[-2].expression)->type == (yyvsp[0].expression)->type){
      if((yyvsp[-2].expression)->type == "bool" || (yyvsp[-2].expression)->type == "int"){
        (yyval.expression) = new expression; 
        (yyval.expression)->type = (yyvsp[-2].expression)->type;
        (yyval.expression)->value = (yyvsp[-2].expression)->value == (yyvsp[0].expression)->value;
      }
      else{
        cout << "expected boolean or int expressions in line: " << yylineno << endl;
        exit(-1);
      }
    }
    else{
      cout << "expressions types do not match in line: " << yylineno << endl;
      exit(-1);
    }
  }
#line 1993 "parser.tab.c"
    break;

  case 73: /* expr2: expr2 TOKEN_NONEQUALITYOP expr3  */
#line 564 "parser.y"
                                  {
    if((yyvsp[-2].expression)->type == (yyvsp[0].expression)->type){
      if((yyvsp[-2].expression)->type == "bool" || (yyvsp[-2].expression)->type == "int"){
        (yyval.expression) = new expression; 
        (yyval.expression)->type = (yyvsp[-2].expression)->type;
        (yyval.expression)->value = (yyvsp[-2].expression)->value != (yyvsp[0].expression)->value;
      }
      else{
        cout << "expected boolean or int expressions in line: " << yylineno << endl;
        exit(-1);
      }
    }
    else{
      cout << "expressions types do not match in line: " << yylineno << endl;
      exit(-1);
    }
  }
#line 2015 "parser.tab.c"
    break;

  case 74: /* expr2: expr3  */
#line 581 "parser.y"
        {(yyval.expression) = (yyvsp[0].expression);}
#line 2021 "parser.tab.c"
    break;

  case 75: /* expr3: expr3 TOKEN_GEQOP expr4  */
#line 584 "parser.y"
                          {
    if((yyvsp[-2].expression)->type == "int" && (yyvsp[0].expression)->type == "int"){
      (yyval.expression) = new expression; 
      (yyval.expression)->type = "bool";
      (yyval.expression)->value = (yyvsp[-2].expression)->value >= (yyvsp[0].expression)->value;
    }
    else{
      cout << "expected integer type expressions in line: " << yylineno << endl;
      exit(-1);
    }
  }
#line 2037 "parser.tab.c"
    break;

  case 76: /* expr3: expr3 TOKEN_LEQOP expr4  */
#line 595 "parser.y"
                          {
    if((yyvsp[-2].expression)->type == "int" && (yyvsp[0].expression)->type == "int"){
      (yyval.expression) = new expression; 
      (yyval.expression)->type = "bool";
      (yyval.expression)->value = (yyvsp[-2].expression)->value <= (yyvsp[0].expression)->value;
    }
    else{
      cout << "expected integer type expressions in line: " << yylineno << endl;
      exit(-1);
    }
  }
#line 2053 "parser.tab.c"
    break;

  case 77: /* expr3: expr3 TOKEN_GREATEROP expr4  */
#line 606 "parser.y"
                              {
    if((yyvsp[-2].expression)->type == "int" && (yyvsp[0].expression)->type == "int"){
      (yyval.expression) = new expression; 
      (yyval.expression)->type = "bool";
      (yyval.expression)->value = (yyvsp[-2].expression)->value > (yyvsp[0].expression)->value;
    }
    else{
      cout << "expected integer type expressions in line: " << yylineno << endl;
      exit(-1);
    }
  }
#line 2069 "parser.tab.c"
    break;

  case 78: /* expr3: expr3 TOKEN_LESSOP expr4  */
#line 617 "parser.y"
                           {
    if((yyvsp[-2].expression)->type == "int" && (yyvsp[0].expression)->type == "int"){
      (yyval.expression) = new expression; 
      (yyval.expression)->type = "bool";
      (yyval.expression)->value = (yyvsp[-2].expression)->value < (yyvsp[0].expression)->value;
    }
    else{
      cout << "expected integer type expressions in line: " << yylineno << endl;
      exit(-1);
    }
  }
#line 2085 "parser.tab.c"
    break;

  case 79: /* expr3: expr4  */
#line 628 "parser.y"
        {(yyval.expression) = (yyvsp[0].expression);}
#line 2091 "parser.tab.c"
    break;

  case 80: /* expr4: expr4 TOKEN_PLUSOP expr5  */
#line 631 "parser.y"
                           {
    if((yyvsp[-2].expression)->type == "int" && (yyvsp[0].expression)->type == "int"){
      (yyval.expression) = new expression; 
      (yyval.expression)->type = "int";
      (yyval.expression)->value = (yyvsp[-2].expression)->value + (yyvsp[0].expression)->value;
    }
    else{
      cout << "expected integer type expressions in line: " << yylineno << endl;
      exit(-1);
    }
  }
#line 2107 "parser.tab.c"
    break;

  case 81: /* expr4: expr4 TOKEN_MINUSOP expr5  */
#line 642 "parser.y"
                            {
    if((yyvsp[-2].expression)->type == "int" && (yyvsp[0].expression)->type == "int"){
      (yyval.expression) = new expression; 
      (yyval.expression)->type = "int";
      (yyval.expression)->value = (yyvsp[-2].expression)->value - (yyvsp[0].expression)->value;
    }
    else{
      cout << "expected integer type expressions in line: " << yylineno << endl;
      exit(-1);
    }
  }
#line 2123 "parser.tab.c"
    break;

  case 82: /* expr4: expr5  */
#line 653 "parser.y"
        {(yyval.expression) = (yyvsp[0].expression);}
#line 2129 "parser.tab.c"
    break;

  case 83: /* expr5: expr5 TOKEN_MODULSOP expr6  */
#line 656 "parser.y"
                             {
    if((yyvsp[-2].expression)->type == "int" && (yyvsp[0].expression)->type == "int"){
      (yyval.expression) = new expression; 
      (yyval.expression)->type = "int";
      (yyval.expression)->value = (yyvsp[-2].expression)->value % (yyvsp[0].expression)->value;
    }
    else{
      cout << "expected integer type expressions in line: " << yylineno << endl;
      exit(-1);
    }
  }
#line 2145 "parser.tab.c"
    break;

  case 84: /* expr5: expr5 TOKEN_MULTIPLEOP expr6  */
#line 667 "parser.y"
                               {
    if((yyvsp[-2].expression)->type == "int" && (yyvsp[0].expression)->type == "int"){
      (yyval.expression) = new expression; 
      (yyval.expression)->type = "int";
      (yyval.expression)->value = (yyvsp[-2].expression)->value * (yyvsp[0].expression)->value;
    }
    else{
      cout << "expected integer type expressions in line: " << yylineno << endl;
      exit(-1);
    }
  }
#line 2161 "parser.tab.c"
    break;

  case 85: /* expr5: expr5 TOKEN_DIVISIONOP expr6  */
#line 678 "parser.y"
                               {
    if((yyvsp[-2].expression)->type == "int" && (yyvsp[0].expression)->type == "int"){
      (yyval.expression) = new expression; 
      (yyval.expression)->type = "int";
      if((yyvsp[0].expression)->value == 0)
        cout << "WARNING: division by zero in line: " << yylineno << endl;
      (yyval.expression)->value = (yyvsp[-2].expression)->value / (yyvsp[0].expression)->value;
    }
    else{
      cout << "expected integer type expressions in line: " << yylineno << endl;
      exit(-1);
    }
  }
#line 2179 "parser.tab.c"
    break;

  case 86: /* expr5: expr6  */
#line 691 "parser.y"
        {(yyval.expression) = (yyvsp[0].expression);}
#line 2185 "parser.tab.c"
    break;

  case 87: /* expr6: TOKEN_MINUSOP expr7  */
#line 694 "parser.y"
                      {
    if((yyvsp[0].expression)->type == "int"){
      (yyval.expression) = new expression; 
      (yyval.expression)->type = "int";
      (yyval.expression)->value = -(yyvsp[0].expression)->value;
    }
    else{
      cout << "expected integer type expressions in line: " << yylineno << endl;
      exit(-1);
    }
  }
#line 2201 "parser.tab.c"
    break;

  case 88: /* expr6: expr7  */
#line 705 "parser.y"
        {(yyval.expression) = (yyvsp[0].expression);}
#line 2207 "parser.tab.c"
    break;

  case 89: /* expr7: TOKEN_LOGICOP expr8  */
#line 708 "parser.y"
                      {
    if((yyvsp[0].expression)->type == "bool"){
      (yyval.expression) = new expression; 
      (yyval.expression)->type = "bool";
      (yyval.expression)->value = !(yyvsp[0].expression)->value;
    }
    else{
      cout << "expected boolean type expressions in line: " << yylineno << endl;
      exit(-1);
    }
  }
#line 2223 "parser.tab.c"
    break;

  case 90: /* expr7: expr8  */
#line 719 "parser.y"
        {(yyval.expression) = (yyvsp[0].expression);}
#line 2229 "parser.tab.c"
    break;

  case 91: /* expr8: location  */
#line 723 "parser.y"
           {(yyval.expression) = new expression; (yyval.expression)->type = (yyvsp[0].loc)->type; (yyval.expression)->value == *(yyvsp[0].loc)->value;}
#line 2235 "parser.tab.c"
    break;

  case 92: /* expr8: method_call  */
#line 724 "parser.y"
              {
    if((yyvsp[0].expression)->type != "void") 
      (yyval.expression) = (yyvsp[0].expression); 
    else{
      cout << "line " << yylineno << " method with type void cannot be used in an expression" << endl;
    }
  }
#line 2247 "parser.tab.c"
    break;

  case 93: /* expr8: literal  */
#line 731 "parser.y"
          {(yyval.expression) = (yyvsp[0].expression);}
#line 2253 "parser.tab.c"
    break;

  case 94: /* expr8: TOKEN_LP expr TOKEN_RP  */
#line 732 "parser.y"
                         {(yyval.expression) = (yyvsp[-1].expression);}
#line 2259 "parser.tab.c"
    break;

  case 95: /* callout_args: %empty  */
#line 736 "parser.y"
              {}
#line 2265 "parser.tab.c"
    break;

  case 96: /* callout_args: callout_arg  */
#line 737 "parser.y"
              {}
#line 2271 "parser.tab.c"
    break;

  case 97: /* callout_args: callout_arg TOKEN_COMMA callout_args  */
#line 738 "parser.y"
                                       {}
#line 2277 "parser.tab.c"
    break;

  case 98: /* callout_arg: expr  */
#line 741 "parser.y"
       {}
#line 2283 "parser.tab.c"
    break;

  case 99: /* callout_arg: string_literal  */
#line 742 "parser.y"
                 {}
#line 2289 "parser.tab.c"
    break;

  case 100: /* literal: int_literal  */
#line 747 "parser.y"
              {(yyval.expression) = new expression; (yyval.expression)->type = "int"; (yyval.expression)->value = (yyvsp[0].number);}
#line 2295 "parser.tab.c"
    break;

  case 101: /* literal: char_literal  */
#line 748 "parser.y"
               {(yyval.expression) = new expression; (yyval.expression)->type = "char"; (yyval.expression)->value = (yyvsp[0].number);}
#line 2301 "parser.tab.c"
    break;

  case 102: /* literal: bool_literal  */
#line 749 "parser.y"
               {(yyval.expression) = new expression; (yyval.expression)->type = "bool"; (yyval.expression)->value = (yyvsp[0].number);}
#line 2307 "parser.tab.c"
    break;

  case 103: /* id: TOKEN_ID  */
#line 754 "parser.y"
           {(yyval.str) = (yyvsp[0].str);}
#line 2313 "parser.tab.c"
    break;

  case 104: /* int_literal: deciamal_literal  */
#line 758 "parser.y"
                   {(yyval.number) = (yyvsp[0].number);}
#line 2319 "parser.tab.c"
    break;

  case 105: /* int_literal: hex_literal  */
#line 759 "parser.y"
              {(yyval.number) = (yyvsp[0].number);}
#line 2325 "parser.tab.c"
    break;

  case 106: /* deciamal_literal: TOKEN_DECIMALCONST  */
#line 763 "parser.y"
                     {(yyval.number) = (yyvsp[0].number);}
#line 2331 "parser.tab.c"
    break;

  case 107: /* hex_literal: TOKEN_HEXADECIMALCONST  */
#line 767 "parser.y"
                         {(yyval.number) = (yyvsp[0].number);}
#line 2337 "parser.tab.c"
    break;

  case 108: /* bool_literal: TOKEN_BOOLEANCONST  */
#line 771 "parser.y"
                     {(yyval.number) = (yyvsp[0].number);}
#line 2343 "parser.tab.c"
    break;

  case 109: /* char_literal: TOKEN_CHARCONST  */
#line 775 "parser.y"
                  {(yyval.number) = (yyvsp[0].number);}
#line 2349 "parser.tab.c"
    break;

  case 110: /* string_literal: TOKEN_STRINGCONST  */
#line 779 "parser.y"
                    {(yyval.str) = (yyvsp[0].str);}
#line 2355 "parser.tab.c"
    break;


#line 2359 "parser.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 781 "parser.y"



int main(){
  FILE * fr = fopen("input.xlang" , "r");
  if(!fr){
    cout << "file did not open" << endl;
    return 0;
  }
  yyin = fr;
  yyparse();
}

void yyerror(const char *s){
  printf("%s in line %d\n", s , yylineno);
  exit(-1);
}

int findIndex(vector<var> list , string name){
  for(int i = 0; i < list.size(); i++)
    if(list[i].name == name)
      return i;
    return -1;
}
int findIndex(vector<func> list , string name){
  for(int i = 0; i < list.size(); i++)
    if(list[i].name == name)
      return i;
    return -1;
}

int addVar(string name , string type){
  int index = findIndex(varList , name);
    if(index == -1){
      struct var temp;
      temp.name = name;
      temp.type = type;
      temp.isArray = 0;
      temp.size = 0;
      varList.push_back(temp);
      return 1;
    }
  return 0;
}
