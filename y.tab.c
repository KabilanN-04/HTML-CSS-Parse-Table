/* A Bison parser, made by GNU Bison 3.8.2.  */

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "pro2.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"
extern int yylex();
void yyerror(const char *s);
Node *root;
#define YYDEBUG 1

#line 82 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 121 "y.tab.c"

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

#line 220 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_DOCTYPE = 3,                    /* DOCTYPE  */
  YYSYMBOL_HTML_OPEN = 4,                  /* HTML_OPEN  */
  YYSYMBOL_HTML_CLOSE = 5,                 /* HTML_CLOSE  */
  YYSYMBOL_HEAD_OPEN = 6,                  /* HEAD_OPEN  */
  YYSYMBOL_HEAD_CLOSE = 7,                 /* HEAD_CLOSE  */
  YYSYMBOL_TITLE_OPEN = 8,                 /* TITLE_OPEN  */
  YYSYMBOL_TITLE_CLOSE = 9,                /* TITLE_CLOSE  */
  YYSYMBOL_BODY_OPEN = 10,                 /* BODY_OPEN  */
  YYSYMBOL_BODY_CLOSE = 11,                /* BODY_CLOSE  */
  YYSYMBOL_P_CLOSE = 12,                   /* P_CLOSE  */
  YYSYMBOL_DIV_CLOSE = 13,                 /* DIV_CLOSE  */
  YYSYMBOL_H1_CLOSE = 14,                  /* H1_CLOSE  */
  YYSYMBOL_META = 15,                      /* META  */
  YYSYMBOL_IMG = 16,                       /* IMG  */
  YYSYMBOL_COMMENT = 17,                   /* COMMENT  */
  YYSYMBOL_STYLE_OPEN = 18,                /* STYLE_OPEN  */
  YYSYMBOL_STYLE_CLOSE = 19,               /* STYLE_CLOSE  */
  YYSYMBOL_TABLE_OPEN = 20,                /* TABLE_OPEN  */
  YYSYMBOL_TABLE_CLOSE = 21,               /* TABLE_CLOSE  */
  YYSYMBOL_TR_OPEN = 22,                   /* TR_OPEN  */
  YYSYMBOL_TR_CLOSE = 23,                  /* TR_CLOSE  */
  YYSYMBOL_TH_OPEN = 24,                   /* TH_OPEN  */
  YYSYMBOL_TH_CLOSE = 25,                  /* TH_CLOSE  */
  YYSYMBOL_TD_OPEN = 26,                   /* TD_OPEN  */
  YYSYMBOL_TD_CLOSE = 27,                  /* TD_CLOSE  */
  YYSYMBOL_UL_OPEN = 28,                   /* UL_OPEN  */
  YYSYMBOL_UL_CLOSE = 29,                  /* UL_CLOSE  */
  YYSYMBOL_OL_OPEN = 30,                   /* OL_OPEN  */
  YYSYMBOL_OL_CLOSE = 31,                  /* OL_CLOSE  */
  YYSYMBOL_LI_OPEN = 32,                   /* LI_OPEN  */
  YYSYMBOL_LI_CLOSE = 33,                  /* LI_CLOSE  */
  YYSYMBOL_TEXT = 34,                      /* TEXT  */
  YYSYMBOL_INLINE_CSS_P = 35,              /* INLINE_CSS_P  */
  YYSYMBOL_INLINE_CSS_DIV = 36,            /* INLINE_CSS_DIV  */
  YYSYMBOL_INLINE_CSS_H1 = 37,             /* INLINE_CSS_H1  */
  YYSYMBOL_YYACCEPT = 38,                  /* $accept  */
  YYSYMBOL_html = 39,                      /* html  */
  YYSYMBOL_head = 40,                      /* head  */
  YYSYMBOL_title = 41,                     /* title  */
  YYSYMBOL_body = 42,                      /* body  */
  YYSYMBOL_content = 43,                   /* content  */
  YYSYMBOL_element = 44,                   /* element  */
  YYSYMBOL_style_content = 45,             /* style_content  */
  YYSYMBOL_table_rows = 46,                /* table_rows  */
  YYSYMBOL_table_row = 47,                 /* table_row  */
  YYSYMBOL_table_data = 48,                /* table_data  */
  YYSYMBOL_list_items = 49,                /* list_items  */
  YYSYMBOL_list_item = 50,                 /* list_item  */
  YYSYMBOL_list_content = 51               /* list_content  */
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
typedef yytype_int8 yy_state_t;

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

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   119

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  38
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  86

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   292


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
      35,    36,    37
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int8 yyrline[] =
{
       0,    33,    33,    34,    37,    40,    43,    46,    47,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    64,    67,    68,    71,    74,    75,    78,    79,    82,
      83,    86,    87,    88,    89,    90,    91,    92,    93
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
  "\"end of file\"", "error", "\"invalid token\"", "DOCTYPE", "HTML_OPEN",
  "HTML_CLOSE", "HEAD_OPEN", "HEAD_CLOSE", "TITLE_OPEN", "TITLE_CLOSE",
  "BODY_OPEN", "BODY_CLOSE", "P_CLOSE", "DIV_CLOSE", "H1_CLOSE", "META",
  "IMG", "COMMENT", "STYLE_OPEN", "STYLE_CLOSE", "TABLE_OPEN",
  "TABLE_CLOSE", "TR_OPEN", "TR_CLOSE", "TH_OPEN", "TH_CLOSE", "TD_OPEN",
  "TD_CLOSE", "UL_OPEN", "UL_CLOSE", "OL_OPEN", "OL_CLOSE", "LI_OPEN",
  "LI_CLOSE", "TEXT", "INLINE_CSS_P", "INLINE_CSS_DIV", "INLINE_CSS_H1",
  "$accept", "html", "head", "title", "body", "content", "element",
  "style_content", "table_rows", "table_row", "table_data", "list_items",
  "list_item", "list_content", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-51)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       3,    13,    23,    19,    23,   -51,    25,   -51,    25,     6,
     -51,    44,    53,   -51,     5,   -51,   -51,   -51,    26,    43,
      36,    36,   -51,    41,   -51,    51,   -51,   -51,    46,   -51,
     -51,    68,   -51,    59,    77,    24,   -51,    70,   -24,   -51,
      61,    97,    71,    99,   -51,   -51,   -51,    80,     2,   -51,
     -51,    43,    36,    36,    82,   -18,   -51,   -51,   -51,   -51,
     -51,   -51,    84,   -51,    77,    34,    -2,    63,   -51,    39,
      43,    36,    36,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
      49,    15,    65,   -51,   -51,   -51
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     7,     0,     1,     0,     0,
       7,     0,     0,     4,     0,    16,    17,    18,     0,     0,
       0,     0,    20,     0,     7,     0,     9,     8,     0,     3,
       2,     0,    21,     0,     0,     0,    22,     0,     0,    27,
       0,     0,     0,     0,     6,     5,    19,     0,     0,    13,
      23,     0,     0,     0,    31,     0,    14,    28,    15,    10,
      11,    12,     0,    24,    26,     0,     0,     0,    31,     0,
       0,     0,     0,    30,    35,    25,    34,    32,    33,    29,
       0,     0,     0,    38,    36,    37
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -51,   -51,   111,   -51,   109,    -6,   -51,   -51,   -50,   -32,
      85,   -21,   -29,    64
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     6,    26,    11,     9,    27,    33,    35,    36,
      64,    38,    39,    55
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      40,    65,    70,    50,    28,    56,     1,     2,    37,    57,
      71,    57,    72,    13,    14,    73,    74,     4,    42,     7,
      80,    15,    16,    17,    18,    63,    19,    77,    47,     5,
      37,    66,    67,    50,    20,    10,    21,    57,    57,    31,
      22,    23,    24,    25,    84,    49,    34,    37,    50,    29,
      81,    82,    57,    57,    14,    76,    34,    44,    30,    70,
      32,    15,    16,    17,    18,    34,    19,    71,    37,    72,
      83,    34,    79,    74,    20,    41,    21,    45,    46,    14,
      22,    23,    24,    25,    60,    43,    15,    16,    17,    18,
      51,    19,    58,    37,    78,    37,    85,    37,    52,    20,
      53,    21,    51,    47,    54,    22,    23,    24,    25,    59,
      52,    75,    53,    61,    62,     8,    68,    12,    69,    48
};

static const yytype_int8 yycheck[] =
{
      21,    51,    20,    35,    10,    29,     3,     4,    32,    38,
      28,    40,    30,     7,     8,    33,    34,     4,    24,     0,
      70,    15,    16,    17,    18,    23,    20,    29,    26,     6,
      32,    52,    53,    65,    28,    10,    30,    66,    67,    34,
      34,    35,    36,    37,    29,    21,    22,    32,    80,     5,
      71,    72,    81,    82,     8,    21,    22,    11,     5,    20,
      34,    15,    16,    17,    18,    22,    20,    28,    32,    30,
      21,    22,    33,    34,    28,    34,    30,     9,    19,     8,
      34,    35,    36,    37,    13,    34,    15,    16,    17,    18,
      20,    20,    31,    32,    31,    32,    31,    32,    28,    28,
      30,    30,    20,    26,    34,    34,    35,    36,    37,    12,
      28,    27,    30,    14,    34,     4,    34,     8,    54,    34
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,    39,     4,     6,    40,     0,    40,    43,
      10,    42,    42,     7,     8,    15,    16,    17,    18,    20,
      28,    30,    34,    35,    36,    37,    41,    44,    43,     5,
       5,    34,    34,    45,    22,    46,    47,    32,    49,    50,
      49,    34,    43,    34,    11,     9,    19,    26,    48,    21,
      47,    20,    28,    30,    34,    51,    29,    50,    31,    12,
      13,    14,    34,    23,    48,    46,    49,    49,    34,    51,
      20,    28,    30,    33,    34,    27,    21,    29,    31,    33,
      46,    49,    49,    21,    29,    31
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    39,    39,    40,    41,    42,    43,    43,    44,
      44,    44,    44,    44,    44,    44,    44,    44,    44,    44,
      44,    45,    46,    46,    47,    48,    48,    49,    49,    50,
      50,    51,    51,    51,    51,    51,    51,    51,    51
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     4,     3,     3,     3,     0,     2,     1,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     3,
       1,     1,     1,     2,     3,     3,     2,     1,     2,     4,
       3,     1,     3,     3,     3,     2,     4,     4,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 2: /* html: DOCTYPE HTML_OPEN head body HTML_CLOSE  */
#line 33 "pro2.y"
                                                  { root = createNode("html"); addChild(root, (yyvsp[-2].node)); addChild(root, (yyvsp[-1].node)); }
#line 1305 "y.tab.c"
    break;

  case 3: /* html: HTML_OPEN head body HTML_CLOSE  */
#line 34 "pro2.y"
                                                 { root = createNode("html"); addChild(root, (yyvsp[-2].node)); addChild(root, (yyvsp[-1].node)); }
#line 1311 "y.tab.c"
    break;

  case 4: /* head: HEAD_OPEN content HEAD_CLOSE  */
#line 37 "pro2.y"
                                                 { (yyval.node) = createNode("head"); addChild((yyval.node), (yyvsp[-1].node)); }
#line 1317 "y.tab.c"
    break;

  case 5: /* title: TITLE_OPEN TEXT TITLE_CLOSE  */
#line 40 "pro2.y"
                                                 { (yyval.node) = createNode("title"); addChild((yyval.node), createNode((yyvsp[-1].str))); }
#line 1323 "y.tab.c"
    break;

  case 6: /* body: BODY_OPEN content BODY_CLOSE  */
#line 43 "pro2.y"
                                                 { (yyval.node) = createNode("body"); addChild((yyval.node), (yyvsp[-1].node)); }
#line 1329 "y.tab.c"
    break;

  case 7: /* content: %empty  */
#line 46 "pro2.y"
                                                 { (yyval.node) = NULL; }
#line 1335 "y.tab.c"
    break;

  case 8: /* content: content element  */
#line 47 "pro2.y"
                                                 { if ((yyvsp[-1].node)) addChild((yyvsp[-1].node), (yyvsp[0].node)); else (yyval.node) = (yyvsp[0].node); }
#line 1341 "y.tab.c"
    break;

  case 10: /* element: INLINE_CSS_P TEXT P_CLOSE  */
#line 51 "pro2.y"
                                                 { (yyval.node) = createNode("p"); addChild((yyval.node), createNode((yyvsp[-1].str))); }
#line 1347 "y.tab.c"
    break;

  case 11: /* element: INLINE_CSS_DIV content DIV_CLOSE  */
#line 52 "pro2.y"
                                                 { (yyval.node) = createNode("div"); addChild((yyval.node), (yyvsp[-1].node)); }
#line 1353 "y.tab.c"
    break;

  case 12: /* element: INLINE_CSS_H1 TEXT H1_CLOSE  */
#line 53 "pro2.y"
                                                 { (yyval.node) = createNode("h1"); addChild((yyval.node), createNode((yyvsp[-1].str))); }
#line 1359 "y.tab.c"
    break;

  case 13: /* element: TABLE_OPEN table_rows TABLE_CLOSE  */
#line 54 "pro2.y"
                                                 { (yyval.node) = createNode("table"); addChild((yyval.node), (yyvsp[-1].node)); }
#line 1365 "y.tab.c"
    break;

  case 14: /* element: UL_OPEN list_items UL_CLOSE  */
#line 55 "pro2.y"
                                                 { (yyval.node) = createNode("ul"); addChild((yyval.node), (yyvsp[-1].node)); }
#line 1371 "y.tab.c"
    break;

  case 15: /* element: OL_OPEN list_items OL_CLOSE  */
#line 56 "pro2.y"
                                                 { (yyval.node) = createNode("ol"); addChild((yyval.node), (yyvsp[-1].node)); }
#line 1377 "y.tab.c"
    break;

  case 16: /* element: META  */
#line 57 "pro2.y"
                                                 { (yyval.node) = createNode("meta"); }
#line 1383 "y.tab.c"
    break;

  case 17: /* element: IMG  */
#line 58 "pro2.y"
                                                 { (yyval.node) = createNode("img"); }
#line 1389 "y.tab.c"
    break;

  case 18: /* element: COMMENT  */
#line 59 "pro2.y"
                                                 { (yyval.node) = createNode("comment"); }
#line 1395 "y.tab.c"
    break;

  case 19: /* element: STYLE_OPEN style_content STYLE_CLOSE  */
#line 60 "pro2.y"
                                                 { (yyval.node) = createNode("style"); addChild((yyval.node), (yyvsp[-1].node)); }
#line 1401 "y.tab.c"
    break;

  case 20: /* element: TEXT  */
#line 61 "pro2.y"
                                                 { (yyval.node) = createNode((yyvsp[0].str)); }
#line 1407 "y.tab.c"
    break;

  case 21: /* style_content: TEXT  */
#line 64 "pro2.y"
                                                  { (yyval.node) = createNode((yyvsp[0].str)); }
#line 1413 "y.tab.c"
    break;

  case 22: /* table_rows: table_row  */
#line 67 "pro2.y"
                                                 { (yyval.node) = (yyvsp[0].node); }
#line 1419 "y.tab.c"
    break;

  case 23: /* table_rows: table_rows table_row  */
#line 68 "pro2.y"
                                                 { addChild((yyvsp[-1].node), (yyvsp[0].node)); (yyval.node) = (yyvsp[-1].node); }
#line 1425 "y.tab.c"
    break;

  case 24: /* table_row: TR_OPEN table_data TR_CLOSE  */
#line 71 "pro2.y"
                                                 { (yyval.node) = createNode("tr"); addChild((yyval.node), (yyvsp[-1].node)); }
#line 1431 "y.tab.c"
    break;

  case 25: /* table_data: TD_OPEN TEXT TD_CLOSE  */
#line 74 "pro2.y"
                                                 { (yyval.node) = createNode("td"); addChild((yyval.node), createNode((yyvsp[-1].str))); }
#line 1437 "y.tab.c"
    break;

  case 26: /* table_data: table_data table_data  */
#line 75 "pro2.y"
                                                 { addChild((yyvsp[-1].node), (yyvsp[0].node)); (yyval.node) = (yyvsp[-1].node); }
#line 1443 "y.tab.c"
    break;

  case 27: /* list_items: list_item  */
#line 78 "pro2.y"
                                                 { (yyval.node) = (yyvsp[0].node); }
#line 1449 "y.tab.c"
    break;

  case 28: /* list_items: list_items list_item  */
#line 79 "pro2.y"
                                                 { addChild((yyvsp[-1].node), (yyvsp[0].node)); (yyval.node) = (yyvsp[-1].node); }
#line 1455 "y.tab.c"
    break;

  case 29: /* list_item: LI_OPEN TEXT list_content LI_CLOSE  */
#line 82 "pro2.y"
                                                 { (yyval.node) = createNode("li"); addChild((yyval.node), createNode((yyvsp[-2].str))); addChild((yyval.node), (yyvsp[-1].node)); }
#line 1461 "y.tab.c"
    break;

  case 30: /* list_item: LI_OPEN list_content LI_CLOSE  */
#line 83 "pro2.y"
                                                 { (yyval.node) = createNode("li"); addChild((yyval.node), (yyvsp[-1].node)); }
#line 1467 "y.tab.c"
    break;

  case 31: /* list_content: TEXT  */
#line 86 "pro2.y"
                                                 { (yyval.node) = createNode((yyvsp[0].str)); }
#line 1473 "y.tab.c"
    break;

  case 32: /* list_content: UL_OPEN list_items UL_CLOSE  */
#line 87 "pro2.y"
                                                 { (yyval.node) = createNode("ul"); addChild((yyval.node), (yyvsp[-1].node)); }
#line 1479 "y.tab.c"
    break;

  case 33: /* list_content: OL_OPEN list_items OL_CLOSE  */
#line 88 "pro2.y"
                                                 { (yyval.node) = createNode("ol"); addChild((yyval.node), (yyvsp[-1].node)); }
#line 1485 "y.tab.c"
    break;

  case 34: /* list_content: TABLE_OPEN table_rows TABLE_CLOSE  */
#line 89 "pro2.y"
                                                 { (yyval.node) = createNode("table"); addChild((yyval.node), (yyvsp[-1].node)); }
#line 1491 "y.tab.c"
    break;

  case 35: /* list_content: list_content TEXT  */
#line 90 "pro2.y"
                                                 { addChild((yyvsp[-1].node), createNode((yyvsp[0].str))); (yyval.node) = (yyvsp[-1].node); }
#line 1497 "y.tab.c"
    break;

  case 36: /* list_content: list_content UL_OPEN list_items UL_CLOSE  */
#line 91 "pro2.y"
                                                       { addChild((yyvsp[-3].node), createNode("ul")); addChild((yyvsp[-3].node)->sibling, (yyvsp[-1].node)); (yyval.node) = (yyvsp[-3].node); }
#line 1503 "y.tab.c"
    break;

  case 37: /* list_content: list_content OL_OPEN list_items OL_CLOSE  */
#line 92 "pro2.y"
                                                       { addChild((yyvsp[-3].node), createNode("ol")); addChild((yyvsp[-3].node)->sibling, (yyvsp[-1].node)); (yyval.node) = (yyvsp[-3].node); }
#line 1509 "y.tab.c"
    break;

  case 38: /* list_content: list_content TABLE_OPEN table_rows TABLE_CLOSE  */
#line 93 "pro2.y"
                                                             { addChild((yyvsp[-3].node), createNode("table")); addChild((yyvsp[-3].node)->sibling, (yyvsp[-1].node)); (yyval.node) = (yyvsp[-3].node); }
#line 1515 "y.tab.c"
    break;


#line 1519 "y.tab.c"

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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

#line 96 "pro2.y"


Node *createNode(char *tag) {
    Node *node = (Node *)malloc(sizeof(Node));
    node->tag = strdup(tag);
    node->child = NULL;
    node->sibling = NULL;
    return node;
}

void addChild(Node *parent, Node *child) {
    if (!parent->child) {
        parent->child = child;
    } else {
        Node *temp = parent->child;
        while (temp->sibling) temp = temp->sibling;
        temp->sibling = child;
    }
}

void printTree(Node *node, int depth) {
    if (!node) return;
    for (int i = 0; i < depth; i++) printf("  ");
    printf("%s\n", node->tag);
    printTree(node->child, depth + 1);
    printTree(node->sibling, depth);
}

void yyerror(const char *s) {
    fprintf(stderr, "Syntax Error: %s\n", s);
}

int main() {
    yydebug = 1;
    yyparse();
    printTree(root, 0);
    return 0;
}




























