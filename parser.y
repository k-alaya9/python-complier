%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int yydebug=1;
FILE *yyin;
void yyerror(const char *);
extern int yylex();

%}


%union {
     char* str_val;
         int int_val;
         float float_val;
}

%error-verbose


// tokens

%token<int_val> INT INDENT DEDENT INDENT_ERROR NUMBER
%token<float_val> FLOAT
%token<str_val> DEF STRING ID MAIN TRUE_TOKEN FALSE_TOKEN NONE AND INT_KEYWORD FLOAT_KEYWORD STRING_KEYWORD BOOL_KEYWORD LIST_KEYWORD
%token<str_val> AS ASSERT ASYNC AWAIT BREAK CLASS CONTINUE DEL INPUT
%token<str_val> ELIF ELSE EXCEPT FINALLY FOR FROM GLOBAL IF
%token<str_val> IMPORT IN IS LAMDA NONLOCAL NOT NULL_TOKEN OR
%token<str_val> PASS RAISE RETURN TRY WHILE YIELD CASE PRINT WITH MATCH DOT COMMENT RANGE

%token ASSIGN  MINUS MULTIPLY DIVIDE COLON COMA LEFT_P RIGHT_P
%token<str_val> PLUS
%token<str_val> NEWLINE

%token<str_val> GREATER_THAN LESS_THAN LESS_THAN_OR_EQUAL GREATER_THAN_OR_EQUAL AT DOUBLE_STAR ARROW
%token<str_val> NOT_EQUAL EQUAL FLOOR_DIVISION MODULUS EXPONENTIATION
%token<str_val> LEFT_BRACKET RIGHT_BRACKET LEFT_CURLY_BRACE RIGHT_CURLY_BRACE
%token<str_val> PLUS_ASSIGN MINUS_ASSIGN TIMES_ASSIGN DIVIDE_ASSIGN MODULO_ASSIGN POWER_ASSIGN AND_ASSIGN OR_ASSIGN XOR_ASSIGN LEFT_SHIFT_ASSIGN RIGHT_SHIFT_ASSIGN



%%

/* Parser Grammar */

includ:
   {}
| statements {
	printf("end of statement \n");YYACCEPT;
}
;

statements  : statement { }
            | statements NEWLINE statement { }
            ;


statement   : if_statement {}
             |function_def{}
             |assignment      {}
             |function_call {}
             |while_statement {}
             |for_statement {}
             |match_statement {}
             |class_def{}
             |try_stmt {}
             |with_statement {}
             ;

block:
    NEWLINE INDENT stmts DEDENT  {}
    |INDENT stmts DEDENT  {}

;
stmts : stmt
      | stmts stmt
;

stmt  : simple_stmt NEWLINE {}
      | compound_stmt {}
;


simple_stmt:

      assignment      {}
      |return_stmt     {}
      |BREAK           {}
      |CONTINUE        {}
      |yield_statement      {}
      |global_statement     {}
      |nonlocal_statement  {}
      |case_statements {}
      |function_call {}
      ;

compound_stmt
      : if_statement    {}
      |function_def {}
      | while_statement {}
       |for_statement {}
       |match_statement {}
       |try_stmt {}
       |with_statement {}



;

/* if..while..for..match..class..try..except..with*/

//function

function_def:
     DEF id LEFT_P  parameters RIGHT_P  return_type  block {printf("function statement \n");}
    | ASYNC DEF ID LEFT_P parameters RIGHT_P   return_type  block {printf(" ASYNC function statement \n");}
;

return_type :
            | ARROW  types
;
types:
     INT_KEYWORD
     |FLOAT_KEYWORD
     |STRING_KEYWORD
     |BOOL_KEYWORD
     |LIST_KEYWORD
     | NONE
    ;

parameters:
          |default_parameters
          |non_default_parameters

;
default_parameters:
                    default_parameter COMA default_parameters
                   |default_parameter COMA non_default_parameters
                   |default_parameter
                   ;
non_default_parameters:
                       non_default_parameter COMA non_default_parameters
                       |non_default_parameter COMA default_parameters
                       |non_default_parameter
                     ;
default_parameter:
                  ID ASSIGN expression
                  | ID ASSIGN expression COLON types
                  ;
non_default_parameter:
                  ID
                  | ID  COLON types
                  ;



// FUNCTION_CALL
function_call     : ID LEFT_P args_list RIGHT_P {printf("function call \n");}
;

//with
with_statement:
            WITH with_statement_body  suite {printf("with statement \n");}
            | ASYNC WITH with_statement_body COLON suite {printf("ASYNC with statement \n");}
             ;

suite:
         statements NEWLINE
        |block
             ;

with_statement_body:
           with_statement_body COMA with_body
           |with_body
            ;
with_body:
   with_stmt_contents
   |LEFT_P with_stmt_contents RIGHT_P
  ;

with_stmt_contents:
       with_stmt_contents COMA with_item
      |with_item
;

with_item:
       id LEFT_P inside_brackets RIGHT_P AS target
       | expression
       | expression AS target
;
inside_brackets:

  |expression
  | expression COMA inside_brackets
;


//try

try_stmt : try1_stmt | try2_stmt | try3_stmt
;
try1_stmt : TRY  block except_statement_plus_for_try1 else_statement op_finally
;
except_statement_plus_for_try1:
                               EXCEPT op_expression_as block
                               |EXCEPT op_expression_as block except_statement_plus_for_try1
;
try2_stmt : TRY block except_statement_plus_for_try2 else_statement op_finally
;
except_statement_plus_for_try2 : EXCEPT MULTIPLY expression op_as block
                       |EXCEPT MULTIPLY expression op_as COLON suite except_statement_plus_for_try2
;
op_expression_as :
                 |expression op_as
;
op_as:
     | AS ID
;
op_finally:
           |FINALLY block
;
try3_stmt : TRY block FINALLY block
;
//while
while_statement: WHILE expression block { printf("while statement \n"); };
//for

for_statement:
     FOR targets IN  star_expressions block  { printf("for statement \n"); }
    | ASYNC FOR targets IN star_expressions block { printf("for ASYNC statement \n"); }
    | FOR targets IN RANGE LEFT_P INT COMA INT RIGHT_P block { printf("for statement \n"); }
    | FOR targets IN RANGE LEFT_P INT COMA INT COMA INT RIGHT_P block { printf("for statement \n"); }

;
star_expressions:
     star_expression
    | star_expression COMA star_expressions
    ;


star_expression:
    '*' bitwise_or
    | expression
;

//class

class_def:
    CLASS id arguments  block  {printf("class definition \n");};
id:
ID
| id ID

arguments: /* empty, no arguments */ {}
    | LEFT_P args RIGHT_P {}
    | LEFT_P kwargs RIGHT_P {}
    | args COMA kwargs {}
    |args
    ;

args:|
     args_list {}
    ;

args_list:
     expression {}
    | args_list COMA expression {}
    ;

kwargs:
     kwarg_list { }
    ;

kwarg_list:
     kwarg {}
    | kwarg_list COMA kwarg {}
    ;

kwarg:
    ID ASSIGN expression { }
    | MULTIPLY expression {}
    | DOUBLE_STAR expression {}
    ;
//match
match_statement:
     MATCH expression  match_block  { printf("match statement \n"); };

match_block: NEWLINE INDENT case_statements DEDENT
;

case_statements:
                     case_statement
                    |case_statements  case_statement
                    ;
case_statement:
                 CASE target block
                ;

// IF
if_statement:
            IF expression  block  elif_statement { printf("if statement \n"); }
            |IF expression  block  else_statement { printf("if statement \n"); }
      ;



elif_statement:
       ELIF expression  block  elif_statement
       |ELIF expression  block  else_statement
;
else_statement:
        |
        ELSE  block
;


//assignment
assignment:
           single_assignment { }
           |multi_assignment { }
           |augmented_assignment {}
           ;


single_assignment:
           target ASSIGN expression
           | target COLON expression
;


multi_assignment:
           targets ASSIGN expressions
           | targets COLON expressions
;


augmented_assignment:ID PLUS_ASSIGN expression
                     |ID MINUS_ASSIGN expression
                     |ID TIMES_ASSIGN expression
                     |ID DIVIDE_ASSIGN expression
                     |ID MODULO_ASSIGN expression
                     |ID POWER_ASSIGN expression
                     |ID AND_ASSIGN expression
                     |ID OR_ASSIGN expression
                     |ID XOR_ASSIGN expression
                     |ID LEFT_SHIFT_ASSIGN expression
                     |ID RIGHT_SHIFT_ASSIGN expression
;

targets:
         target
       | targets COMA target
;




target:
      LEFT_P targets RIGHT_P
      | target DOT ID
      | ID
;



//return
return_stmt
      : RETURN expressions {  printf("return statement \n ");  }

;
//yield
yield_statement:
         YIELD expressions {  printf("yield statement \n ");  }
         ;
//global
 global_statement:
     GLOBAL global_list {  printf("global statement \n ");  }
     ;
 global_list:
     ID
     | global_list COMA ID
     ;
 //nonlocal
 nonlocal_statement:
     NONLOCAL nonlocal_list {  printf("nonlocal statement \n ");  }
     ;

 nonlocal_list:
     ID
     | nonlocal_list COMA ID
     ;

//expressions
expressions:
             expression
           | expressions COMA expression
           ;


expression:
    disjunction IF disjunction ELSE expression
    | disjunction
    ;


/* OR statements */
disjunction:
     disjunction OR conjunction{ }
    | conjunction
    ;


/* AND statements */
conjunction:
     conjunction AND inversion { }
    | inversion
    ;


/* NOT statements */
inversion:
     NOT inversion {  }
    | comparison
    ;


/* comparison */
comparison:
    bitwise_or compare_op_bitwise_or_pair
    | bitwise_or
    ;


compare_op_bitwise_or_pair:
     eq_bitwise_or
    | noteq_bitwise_or
    | lte_bitwise_or
    | lt_bitwise_or
    | gte_bitwise_or
    | gt_bitwise_or
    | notin_bitwise_or
    | in_bitwise_or
    | isnot_bitwise_or
    | is_bitwise_or
    ;


eq_bitwise_or: EQUAL bitwise_or { } /* equality */
    ;


noteq_bitwise_or: NOT_EQUAL bitwise_or {    } /* inequality */
    ;


lte_bitwise_or: LESS_THAN_OR_EQUAL bitwise_or {   } /* less than or equal to */
    ;


lt_bitwise_or: LESS_THAN bitwise_or {  } /* less than */
    ;


gte_bitwise_or: GREATER_THAN_OR_EQUAL bitwise_or {} /* greater than or equal to */
    ;


gt_bitwise_or: GREATER_THAN bitwise_or {} /*  greater than */
    ;


notin_bitwise_or: NOT IN bitwise_or { } /* not in */
    ;


in_bitwise_or: IN bitwise_or {  } /* in */
    ;


isnot_bitwise_or: IS NOT bitwise_or {  } /* is not */
    ;


is_bitwise_or: IS bitwise_or {  } /* is */
    ;


/* Bitwise operators */
/* | */
bitwise_or:
    bitwise_or '|' bitwise_xor {  }
    | bitwise_xor
    ;


/* ^ */
bitwise_xor:
     bitwise_xor '^' bitwise_and { }
    | bitwise_and
    ;

/* & */
bitwise_and:
     bitwise_and '&' shift_expr  {}
    | shift_expr
    ;


shift_expr:
     shift_expr '<<' sum /* << */ {}
    | shift_expr '>>' sum /* >> */ { }
    | sum
    ;


/* Arithmetic operators */

/* Represents addition and subtraction operations. */
sum:
     sum PLUS term {}
    | sum MINUS term{ }
    | term
    ;

/* Represents multiplication, division, floor division, modulo,
 and matrix multiplication operations */
term:
     term MULTIPLY factor{}
    | term DIVIDE factor{}
    | term FLOOR_DIVISION factor{}
    | term MODULUS factor {}
    | term '@' factor  /* matrix multiplication */{}
    | factor
    ;


 /*Represents unary operators '+' (positive), '-' (negation), '~' (bitwise NOT),
  and the power non-terminal.*/
factor:
     '+' factor
    | '-' factor
    | '~' factor
    | power
    ;


/* Represents exponentiation operation '**'  */
power:
     atom EXPONENTIATION factor{}
    | atom
    ;


atom:
     TRUE_TOKEN  { }
    | FALSE_TOKEN { }
    | NONE        { }
    | ID     /* variable or identifier*/ { }
    | STRING  /* string literals */ { }
    | INT  /* number literals */ { }
    | FLOAT {}
    ;



%%



void main(int argc, char **argv)
{
/*success("This is a valid python expression");*/
      if (argc > 1){
            for(int i=0;i<argc;i++)
                  printf("value of argv[%d] = %s\n\n",i,argv[i]);
                  yyin=fopen(argv[1],"r");
      }
      else
            yyin=stdin;
      yyparse();
}

/* int yyerror(const char* s) {
//     fprintf(stderr, "Error: %s\n", s);
//     return 1;
// }*/

void yyerror(const char *msg) {
      printf(" %s \n", msg);
}