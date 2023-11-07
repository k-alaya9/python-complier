%option noyywrap

%{
#include <stdio.h>
#include <ctype.h>
int lno = 1, spaces=0;
#define MAX_STR_CONST 256
char string_buf[MAX_STR_CONST], comment_buf[MAX_STR_CONST];
char *string_buf_ptr, *comment_buf_ptr;
%}

digit   [0-9]
int     [-+]?{digit}+
float   [-+]?({digit}*\.?{digit}+|{digit}+\.)([eE][-+]?{digit}+)?  
letter  [a-zA-Z]
id      ({letter}|_)([{letter}{digit}_])*
keyword   "main"|"True"|"False"|"None"|"and"|"as"|"assert"|"async"|"await"|"break"|"class"|"continue"|"def"|"del"|"elif"|"else"|"except"|"finally"|"for"|"from"|"global"|"if"|"import"|"in"|"is"|"lambda"|"nonlocal"|"not"|"or"|"pass"|"raise"|"return"|"try"|"while"|"with"|"yield"|"main"|"case"
ws  [ \t]+
newline \n

%x DOUBLE_STRING
%x SINGLE_STRING
%x COMMENT_SINGLE
%x COMMENT_MULTI

%%

{newline}{ws}  {
    spaces = 0;
    lno++;
    for(int i = 0; i < yyleng; i++){
        if (yytext[i] == ' ') {
            spaces++;
        } else if (yytext[i] == '\t') {
            spaces+=8;
        }
    }
    printf("line%d, Indentation: %d\n", lno, spaces);
}
{newline}         {lno++; spaces=0;}
{ws}                /*ignore*/
{int}              { printf("line%d, int: %s \n", lno, yytext); }
{float}            { printf("line%d, float: %s \n", lno, yytext); }
{keyword}          { printf("line%d, keyword: %s \n", lno, yytext); }
{id}*              { printf("line%d, identifier: %s \n", lno, yytext); }

">"|"<"|"<="|">="  { printf("line%d, relation operator: %s \n",lno, yytext); }
"!="               { printf("line%d, not equal operator: %s \n", lno, yytext); }
"=="               { printf("line%d, equal operator: %s \n", lno, yytext); }
"="                { printf("line%d, assignment operator: %s \n", lno, yytext); }
"+"                { printf("line%d, increment operator: %s \n", lno, yytext); }
"-"                { printf("line%d, decrement operator: %s \n", lno, yytext); }
"/"                { printf("line%d, division operator: %s \n", lno, yytext); }
"*"                { printf("line%d, multiplication operator: %s \n", lno, yytext); }
"//"               { printf("line%d, floor division operator: %s \n", lno, yytext); }
"%"                { printf("line%d, modulus operator: %s \n", lno, yytext); }
"**"               { printf("line%d, exponentiation operator: %s \n", lno, yytext); }


"["|"]"|"{"|"}"|"("|")" { printf("line%d, parenthesis: %s \n", lno, yytext); }

\"        { string_buf_ptr = string_buf; BEGIN(DOUBLE_STRING); }    

<DOUBLE_STRING>{
    \"  {*string_buf_ptr = '\0'; printf("line%d, DOUBLE STRING: %s\n", lno, string_buf); BEGIN(INITIAL);} 
    \n  {printf("error in line %d\n", lno);}
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

\'        { string_buf_ptr = string_buf; BEGIN(SINGLE_STRING); }    
<SINGLE_STRING>{
    \'  {*string_buf_ptr = '\0'; printf("line%d, SINGLE STRING: %s\n", lno, string_buf); BEGIN(INITIAL);}
    \n  {printf("line%d, ERROR: new line in string\n", lno);}
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

#          { comment_buf_ptr = comment_buf; BEGIN(COMMENT_SINGLE); }
<COMMENT_SINGLE>{
    [^\n]+  {
        char *yptr = yytext;
        while ( *yptr )
            *comment_buf_ptr++ = *yptr++;        
    }
    \n      {*comment_buf_ptr = '\0'; printf("line%d, single line comment: %s\n", lno, comment_buf); lno++; BEGIN(INITIAL); }
}

\'\'\'      { comment_buf_ptr = comment_buf; BEGIN(COMMENT_MULTI); }
<COMMENT_MULTI>{
    [^\'\n]+  {
        char *yptr = yytext;
        while ( *yptr )
            *comment_buf_ptr++ = *yptr++;        
    }
    \n         { *comment_buf_ptr++ = '\n'; lno++; }        
    \'\'\'     {*comment_buf_ptr = '\0'; printf("line%d, multi line comment: %s\n", lno, comment_buf); BEGIN(INITIAL); }
    \'\'    {*comment_buf_ptr++ = '\''; *comment_buf_ptr++ = '\'';}
    \'    {*comment_buf_ptr++ = '\'';}
}

.        { printf("line%d, OTHER: %s\n", lno, yytext); }

%%

void main(int argc, char **argv) {
    if (argc > 1) {
        for (int i = 0; i < argc; i++)
            printf("value of argv[%d] = %s\n\n", i, argv[i]);
        yyin = fopen(argv[1], "r");
    } else {
        yyin = stdin;
    }
    yylex();
}
