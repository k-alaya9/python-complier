%{
    #include <stdio.h>
    #include <ctype.h>
    #include <stdlib.h>
    #include <string.h>
    #include "parser.tab.h"
 int lno = 1;
 #define MAX_STR_CONST 256
 char string_buf[MAX_STR_CONST], comment_buf[MAX_STR_CONST];
 char *string_buf_ptr, *comment_buf_ptr;

//Stack Definition
#define Stack_SIZE 100
 void push(); void pop();


    int top = -1;
    int stack_arr[Stack_SIZE];

    void push(int x)
    {
        if (top == Stack_SIZE - 1)
        {

        }
        else
        {
            top = top + 1;
            stack_arr[top] = x;
        }
    }

    void pop()
    {
        if (top == -1)
        {

        }
        else
        {
            top = top - 1;
        }
    }




    #define keyword_size 10
    char keyword[keyword_size];

    int current_indentation = 0;

    int spaces = 0;
    int indentations = 0;

    // string buffer
    #define MAX_STR_CONST 256
    char string_buf[MAX_STR_CONST];
    char *string_buf_ptr;
    ////////////////////
%}

%option yylineno
%option noyywrap

digit  [0-9]
letter [a-zA-Z]
INT    [0-9]+
FLOAT  ({digit}*\.?{digit}+|{digit}+\.)([eE][-+]?{digit}+)?
ID      ({letter}|_)([{letter}{digit}_])*
MATCH "match"
MAIN     "main"
TRUE_TOKEN     "True"
FALSE_TOKEN    "False"
NONE     "None"
AND      "and"
AS       "as"
ASSERT   "assert"
ASYNC    "async"
AWAIT    "await"
BREAK    "break"
CLASS    "class"
CONTINUE "continue"
DEF      "def"
DEL      "del"
DOT      "."
ELIF     "elif"
ELSE     "else"
EXCEPT   "except"
FINALLY  "finally"
FROM     "from"
FOR      "for"
GLOBAL   "global"
IF       "if"
IMPORT   "import"
IN       "in"
IS       "is"
LAMDA    "lambda"
NONLOCAL "nonlocal"
NOT      "not"
NULL_TOKEN     "null"
OR       "or"
PASS     "pass"
RAISE    "raise"
RETURN   "return"
TRY      "try"
WHILE    "while"
WITH     "with"
YIELD    "yield"
CASE     "case"
PRINT    "print"
RANGE     "range"
INPUT     "input"
ASSIGN   "="
PLUS     "+"
MINUS    "-"
MULTIPLY "*"
DIVIDE   "/"
COLON    ":"
COMA     ","
LEFT_P   "("
RIGHT_P  ")"
PLUS_ASSIGN "+="
MINUS_ASSIGN "-="
TIMES_ASSIGN  "*="
DIVIDE_ASSIGN "/="
MODULO_ASSIGN "%="
POWER_ASSIGN "**="
AND_ASSIGN  "&="
OR_ASSIGN  "|="
XOR_ASSIGN "^="
LEFT_SHIFT_ASSIGN "<<="
RIGHT_SHIFT_ASSIGN ">>="
DOUBLE_STAR "**"
AT "@"
INT_KEYWORD "int"
FLOAT_KEYWORD "float"
STRING_KEYWORD "str"
BOOL_KEYWORD "bool"
LIST_KEYWORD "list"
ARROW "->"
ws  [ \t]+
newline \n



%x DOUBLE_STRING
%x SINGLE_STRING
%x TRIPLE_STRING
%x COMMENT_MULTI
%x COMMENT_TRIPLE
%x INDENTSTATE
%x DEDENTALLSTATE
%x DEDENTSTATE



%%

{COLON}{newline}{ws}  {
                            BEGIN(INDENTSTATE);
                            if(top < 0)
                                push(0);

                            spaces = 0;
                            for(int i = 0; i < yyleng; i++){
                                if (yytext[i] == ' ') {
                                    spaces++;
                                } else if (yytext[i] == '\t') {
                                    spaces += 8;
                                }
                            }
                            push(spaces);

                            current_indentation = spaces;
                            unput(' ');

                            printf("INDENT in line = %d\n",yylineno);
                            return NEWLINE;
                        }

{newline}{ws}   {
                            if(top < 0)
                                push(0);

                            spaces = 0;
                            for(int i = 0; i < yyleng; i++){
                                if (yytext[i] == ' ') {
                                    spaces++;
                                } else if (yytext[i] == '\t') {
                                    spaces += 8;
                                }
                            }
                            current_indentation = spaces;

                            unput(' ');
                            BEGIN(DEDENTSTATE);

                            return NEWLINE;
                        }

{newline}                  {
                            BEGIN(DEDENTALLSTATE);
                            unput(' ');

                            return NEWLINE;
                        }



<<EOF>>         {
                    BEGIN(DEDENTALLSTATE);
                    unput(' ');

                    if(stack_arr[top] == 0)
                        return 0;
                }



{ws}                    {}


{INT_KEYWORD} { yylval.str_val = strdup(yytext); return INT_KEYWORD ;}
{FLOAT_KEYWORD} { yylval.str_val = strdup(yytext); return FLOAT_KEYWORD ;}
{STRING_KEYWORD} { yylval.str_val = strdup(yytext); return STRING_KEYWORD ;}
{BOOL_KEYWORD} { yylval.str_val = strdup(yytext); return BOOL_KEYWORD ;}
{LIST_KEYWORD} { yylval.str_val = strdup(yytext); return LIST_KEYWORD ;}
{INT}              { yylval.int_val = atoi(yytext); return INT; }
{ARROW}           {yylval.str_val = strdup(yytext); return ARROW ; }
{FLOAT}            { yylval.float_val = atof(yytext); return FLOAT; }
{MAIN}             { yylval.str_val = strdup(yytext); return MAIN ; }
{MATCH}             {yylval.str_val = strdup(yytext); return MATCH ;}
{RANGE}             {yylval.str_val = strdup(yytext); return RANGE ;}
{TRUE_TOKEN}       { yylval.str_val = strdup(yytext); return TRUE_TOKEN ;  }
{FALSE_TOKEN}      { yylval.str_val = strdup(yytext); return FALSE_TOKEN ;  }
{NONE}             { yylval.str_val = strdup(yytext); return NONE ;}
{AND}              { yylval.str_val = strdup(yytext); return AND ;  }
{AS}               { yylval.str_val = strdup(yytext); return AS ;  }
{ASSERT}           { yylval.str_val = strdup(yytext); return ASSERT ;  }
{ASYNC}            { yylval.str_val = strdup(yytext); return ASYNC ;  }
{AWAIT}            { yylval.str_val = strdup(yytext); return AWAIT ;  }
{BREAK}            { yylval.str_val = strdup(yytext); return BREAK ;  }
{CLASS}            { yylval.str_val = strdup(yytext); return CLASS ; }
{CONTINUE}         { yylval.str_val = strdup(yytext); return CONTINUE ;  }
{INPUT}         { yylval.str_val = strdup(yytext); return INPUT ;  }
{DEF}              { yylval.str_val = strdup(yytext); return DEF ; }
{DEL}              { yylval.str_val = strdup(yytext); return DEL ; }
{DOT}              { yylval.str_val = strdup(yytext); return DOT ; }
{ELIF}             { yylval.str_val = strdup(yytext); return ELIF ;  }
{ELSE}             { yylval.str_val = strdup(yytext); return ELSE ;  }
{EXCEPT}           { yylval.str_val = strdup(yytext); return EXCEPT ; }
{FINALLY}          { yylval.str_val = strdup(yytext); return FINALLY ;  }
{FROM}             { yylval.str_val = strdup(yytext); return FROM ;  }
{GLOBAL}           { yylval.str_val = strdup(yytext); return GLOBAL ;  }
{IF}               { yylval.str_val = strdup(yytext); return IF ; }
{IMPORT}           { yylval.str_val = strdup(yytext); return IMPORT ;  }
{IN}               { yylval.str_val = strdup(yytext); return IN ;}
{IS}               { yylval.str_val = strdup(yytext); return IS ;  }
{LAMDA}            { yylval.str_val = strdup(yytext); return LAMDA ;  }
{NONLOCAL}         { yylval.str_val = strdup(yytext); return NONLOCAL ;  }
{NOT}              { yylval.str_val = strdup(yytext); return NOT ;  }
{OR}               { yylval.str_val = strdup(yytext); return OR ;  }
{PASS}             { yylval.str_val = strdup(yytext); return PASS ;  }
{RAISE}            { yylval.str_val = strdup(yytext); return RAISE ;  }
{RETURN}           { yylval.str_val = strdup(yytext); return RETURN ;  }
{TRY}              { yylval.str_val = strdup(yytext); return TRY ; }
{WHILE}            { yylval.str_val = strdup(yytext); return WHILE ; }
{WITH}             { yylval.str_val = strdup(yytext); return WITH ; }
{YIELD}            { yylval.str_val = strdup(yytext); return YIELD ;  }
{CASE}             { yylval.str_val = strdup(yytext); return CASE ;  }
{ASSIGN}           { return ASSIGN ; }
{PLUS}             { yylval.str_val = strdup(yytext); return PLUS ; }
{MINUS}            { return MINUS ; }
{MULTIPLY}         { return MULTIPLY; }
{DIVIDE}           { return DIVIDE;}
{COLON}            {return COLON;}
{COMA}             {return COMA;}
{LEFT_P}           {return LEFT_P;}
{RIGHT_P}          {return RIGHT_P;}
{NULL_TOKEN}       {yylval.str_val = strdup(yytext); return NULL_TOKEN;}
{PRINT}            {yylval.str_val = strdup(yytext); return PRINT;}
{FOR}              {yylval.str_val = strdup(yytext); return FOR;}
{ID}                {yylval.str_val =strdup(yytext); return ID;}
{PLUS_ASSIGN}       {yylval.str_val=strdup(yytext);return PLUS_ASSIGN;}
{MINUS_ASSIGN}      {yylval.str_val=strdup(yytext);return MINUS_ASSIGN;}
{TIMES_ASSIGN}      {yylval.str_val=strdup(yytext);return TIMES_ASSIGN;}
{DIVIDE_ASSIGN}     {yylval.str_val=strdup(yytext);return DIVIDE_ASSIGN;}
{MODULO_ASSIGN}     {yylval.str_val=strdup(yytext);return MODULO_ASSIGN;}
{POWER_ASSIGN}      {yylval.str_val=strdup(yytext);return POWER_ASSIGN;}
{AND_ASSIGN}        {yylval.str_val=strdup(yytext);return AND_ASSIGN;}
{OR_ASSIGN}         {yylval.str_val=strdup(yytext);return OR_ASSIGN;}
{XOR_ASSIGN}        {yylval.str_val=strdup(yytext);return XOR_ASSIGN;}
{LEFT_SHIFT_ASSIGN} {yylval.str_val=strdup(yytext);return LEFT_SHIFT_ASSIGN;}
{RIGHT_SHIFT_ASSIGN}  {yylval.str_val=strdup(yytext);return RIGHT_SHIFT_ASSIGN;}
"="[ \t]*\"\"\"    {string_buf_ptr = string_buf; BEGIN(TRIPLE_STRING);}

\"\"\"      { comment_buf_ptr = comment_buf; BEGIN(COMMENT_TRIPLE); }
\"        { string_buf_ptr = string_buf; BEGIN(DOUBLE_STRING); }
\'\'\'      { comment_buf_ptr = comment_buf; BEGIN(COMMENT_MULTI); }
\'        { string_buf_ptr = string_buf; BEGIN(SINGLE_STRING); }




">"    { yylval.str_val = strdup(yytext); return GREATER_THAN; }
"<"    { yylval.str_val = strdup(yytext); return LESS_THAN; }
"<="   { yylval.str_val = strdup(yytext); return LESS_THAN_OR_EQUAL; }
">="   { yylval.str_val = strdup(yytext); return GREATER_THAN_OR_EQUAL; }
"!="   { yylval.str_val = strdup(yytext); return NOT_EQUAL; }
"=="   { yylval.str_val = strdup(yytext); return EQUAL; }
"//"   { yylval.str_val = strdup(yytext); return FLOOR_DIVISION; }
"%"    { yylval.str_val = strdup(yytext); return MODULUS; }
"**"   { yylval.str_val = strdup(yytext); return EXPONENTIATION; }
"["    { yylval.str_val = strdup(yytext); return LEFT_BRACKET; }
"]"    { yylval.str_val = strdup(yytext); return RIGHT_BRACKET; }
"{"    { yylval.str_val = strdup(yytext); return LEFT_CURLY_BRACE; }
"}"    { yylval.str_val = strdup(yytext); return RIGHT_CURLY_BRACE; }




<INDENTSTATE>{
    [ ] {
        BEGIN(INITIAL);
       // printf("INDENT in line = %d\n",yylineno);
        return INDENT;
    }
}

<DEDENTSTATE>{
    [ ] {





        int flag = 1;
        for (int i = 0; i <= top; i++) {
            if (current_indentation == stack_arr[i])
                flag = 0;
        }

        if(flag) {
            printf("Indentation Error in line = %d\n",yylineno);
            return INDENT_ERROR;
        }

        int end = 1;
        while(current_indentation < stack_arr[top])
        {
         //   printf("DEDENT in line = %d \n",yylineno);
            unput(' ');
            BEGIN(DEDENTSTATE);
            end = 0;

            pop();

         //   printf("DEDENT in line = %d\n",yylineno);
            return DEDENT;
        }

        if(end)
            BEGIN(INITIAL);

    }
}


<DEDENTALLSTATE>{
    [ ] {
        if (top<0)
            push(0);
        if (stack_arr[top] > 0) {


            while (top > 0) {
                unput(' ');
                BEGIN(DEDENTALLSTATE);
                printf("DEDENT  in line = %d\n",yylineno);
                pop();
                return DEDENT;
            }
        } else {
            BEGIN(INITIAL);
        }
    }
}





<DOUBLE_STRING>{
    \"  {*string_buf_ptr = '\0'; BEGIN(INITIAL); return STRING;} 
    \\\n {              }
    \n   {printf("error in line %d\n", yylineno); BEGIN(INITIAL);}
    \\n  {*string_buf_ptr++ = '\n';}
    \\t  {*string_buf_ptr++ = '\t';}
    \\r  {*string_buf_ptr++ = '\r';}
    \\b  {*string_buf_ptr++ = '\b';}
    \\f  {*string_buf_ptr++ = '\f';}
    \\\" {*string_buf_ptr++ = '\"';} 
    [^\\\n\"]+  {
        char *yptr = yytext;
        while ( *yptr )
            *string_buf_ptr++ = *yptr++;        
    }
}


<SINGLE_STRING>{
    \'  {*string_buf_ptr = '\0'; BEGIN(INITIAL); return STRING;}
    \\\n {              }
    \n   {printf("line%d, ERROR: new line in string\n", yylineno); BEGIN(INITIAL);}
    \\n  {*string_buf_ptr++ = '\n';}
    \\t  {*string_buf_ptr++ = '\t';}
    \\r  {*string_buf_ptr++ = '\r';}
    \\b  {*string_buf_ptr++ = '\b';}
    \\f  {*string_buf_ptr++ = '\f';}
    \\\' {*string_buf_ptr++ = '\'';} 
    [^\\\n\']+  {
        char *yptr = yytext;
        while ( *yptr )
            *string_buf_ptr++ = *yptr++;        
    }
}
<TRIPLE_STRING>{
    \"\"\"  {*string_buf_ptr = '\0'; BEGIN(INITIAL);return STRING;}
    \\\\ {*string_buf_ptr++ = '\\';}
    \\\n    {*string_buf_ptr = '\n'; }
    \n  {printf("error in line %d\n", lno); lno++; BEGIN(INITIAL);}
    \\n  {*string_buf_ptr++ = '\n';}
    \\t  {*string_buf_ptr++ = '\t';}
    \\r  {*string_buf_ptr++ = '\r';}
    \\b  {*string_buf_ptr++ = '\b';}
    \\f  {*string_buf_ptr++ = '\f';}
    \\\" {*string_buf_ptr++ = '\"';}
    [^\\\n\"]+  {
        char *yptr = yytext;
        while ( *yptr )
            *string_buf_ptr++ = *yptr++;
    }
}


<COMMENT_MULTI>{
    [^\'\n]+  {
        char *yptr = yytext;
        while ( *yptr )
            *comment_buf_ptr++ = *yptr++;
    }
    \n         { *comment_buf_ptr++ = '\n'; lno++; }
    \'\'\'     {*comment_buf_ptr = '\0';  BEGIN(INITIAL); return COMMENT; }
    \'\'    {*comment_buf_ptr++ = '\''; *comment_buf_ptr++ = '\'';}
    \'    {*comment_buf_ptr++ = '\'';}
}
<COMMENT_TRIPLE>{
     [^\"\n]+  {
        char *yptr = yytext;
        while ( *yptr )
            *comment_buf_ptr++ = *yptr++;
    }
    \n         { *comment_buf_ptr++ = '\n'; lno++; }
    \"\"\"     {*comment_buf_ptr = '\0';  BEGIN(INITIAL); return COMMENT ;}
    \"\"    {*comment_buf_ptr++ = '\"'; *comment_buf_ptr++ = '\"';}
    \"    {*comment_buf_ptr++ = '\"';}
}


%%
