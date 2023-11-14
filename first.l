%option noyywrap

%{
#include <stdio.h>
#include <ctype.h>
int lno = 1;
#define MAX_STR_CONST 256
char string_buf[MAX_STR_CONST], comment_buf[MAX_STR_CONST];
char *string_buf_ptr, *comment_buf_ptr;

#define MAX_SIZE 1000
int stack[MAX_SIZE];
int top = -1;
int spaces = 0, indent, dedent;

void push(int x) {
    stack[++top] = x;
}

void checkIndent(int yyleng, char* yytext){
    spaces = 0;
    for(int i = 0; i < yyleng; i++){
        if (yytext[i] == ' ') {
            spaces++;
        } else if (yytext[i] == '\t') {
            spaces+=8;
        }
    }
    if(top == -1)   push(0);

    if(spaces > stack[top]){
        indent = spaces - stack[top];
        push(spaces);
        printf("line%d, INDENT by %d\n", lno, indent);
    }
    else if(spaces < stack[top]){
        dedent = stack[top] - spaces;
        push(spaces);
        printf("line%d, DEDENT by %d\n", lno, dedent);
    }
}

%}

digit   [0-9]
int     [-+]?{digit}+
float   [-+]?({digit}*\.?{digit}+|{digit}+\.)([eE][-+]?{digit}+)?  
letter  [a-zA-Z]
id      ({letter}|_)([{letter}{digit}_])*
keyword   "main"|"True"|"False"|"None"|"and"|"as"|"assert"|"async"|"await"|"break"|"class"|"continue"|"def"|"del"|"elif"|"else"|"except"|"finally"|"for"|"from"|"global"|"if"|"import"|"in"|"is"|"lambda"|"nonlocal"|"not"|"or"|"pass"|"raise"|"return"|"try"|"while"|"with"|"yield"|"main"|"case"
ws  [ \t]+
newline \n

%x STRING_DOUBLE
%x STRING_SINGLE
%x STRING_TRIPLE
%x COMMENT_SINGLE
%x COMMENT_MULTI
%x COMMENT_TRIPLE
%x white_space

%%
{newline}{ws} {
    lno++;
    checkIndent(yyleng, yytext);
}

{newline}         {
    lno++;
    if(stack[top] > 0){
        printf("line%d, DEDENT by %d\n", lno, stack[top]);
        push(0);
    }    
}

{ws}                /*ignore*/
{int}              { printf("line%d, int: %s \n", lno, yytext); }
{float}            { printf("line%d, float: %s \n", lno, yytext); }
{keyword}[ \t]*\"\"\"  { printf("line%d, keyword: %.*s\n", lno, (int)(yyleng - 3), yytext); string_buf_ptr = string_buf; BEGIN(STRING_TRIPLE); }
{keyword}              { printf("line%d, keyword: %s \n", lno, yytext); }
"="[ \t]*\"\"\"        { printf("line%d, assignment operator: = \n", lno); string_buf_ptr = string_buf; BEGIN(STRING_TRIPLE);}

\"\"\"      { comment_buf_ptr = comment_buf; BEGIN(COMMENT_TRIPLE); }
\"        { string_buf_ptr = string_buf; BEGIN(STRING_DOUBLE); }    
\'\'\'      { comment_buf_ptr = comment_buf; BEGIN(COMMENT_MULTI); }
\'        { string_buf_ptr = string_buf; BEGIN(STRING_SINGLE); }    
#          { comment_buf_ptr = comment_buf; BEGIN(COMMENT_SINGLE); }

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


<STRING_DOUBLE>{
    \"  {*string_buf_ptr = '\0'; printf("line%d, DOUBLE STRING: %s\n", lno, string_buf); BEGIN(INITIAL);} 
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


<STRING_SINGLE>{
    \'  {*string_buf_ptr = '\0'; printf("line%d, SINGLE STRING: %s\n", lno, string_buf); BEGIN(INITIAL);}
    \\\\ {*string_buf_ptr++ = '\\';}
    \\\n    {*string_buf_ptr = '\n'; }
    \n  {printf("error in line %d\n", lno); lno++; BEGIN(INITIAL);}
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

<STRING_TRIPLE>{
    \"\"\"  {*string_buf_ptr = '\0'; printf("line%d, TRIPLE STRING: %s\n", lno, string_buf); BEGIN(INITIAL);} 
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

<COMMENT_TRIPLE>{
     [^\"\n]+  {
        char *yptr = yytext;
        while ( *yptr )
            *comment_buf_ptr++ = *yptr++;        
    }
    \n         { *comment_buf_ptr++ = '\n'; lno++; }        
    \"\"\"     {*comment_buf_ptr = '\0'; printf("line%d, triple comment: %s\n", lno, comment_buf); BEGIN(INITIAL); }
    \"\"    {*comment_buf_ptr++ = '\"'; *comment_buf_ptr++ = '\"';}
    \"    {*comment_buf_ptr++ = '\"';}
}

<COMMENT_SINGLE>{
    [^\n]+  {
        char *yptr = yytext;
        while ( *yptr )
            *comment_buf_ptr++ = *yptr++;        
    }
    \n      {*comment_buf_ptr = '\0'; printf("line%d, single line comment: %s\n", lno, comment_buf); lno++; BEGIN(white_space); }
}

<white_space>{
    {ws}    {checkIndent(yyleng, yytext);}
    .       {BEGIN(INITIAL);}
}

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
