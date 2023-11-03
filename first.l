%option noyywrap

%{
#include <stdio.h>
#include <ctype.h>
int lno = 1;
%}

digit   [0-9]
letter  [a-zA-Z]
id      {letter}({letter}|{digit})*

number  {digit}+
keywd   "main"|"True"|"False"|"None"|"and"|"as"|"assert"|"async"|"await"|"break"|"class"|"continue"|"def"|"del"|"elif"|"else"|"except"|"finally"|"for"|"from"|"global"|"if"|"import"|"in"|"is"|"lambda"|"nonlocal"|"not"|"or"|"pass"|"raise"|"return"|"try"|"while"|"with"|"yield"|"main"|"case"

ws      [ \t]

%x COMMENT_SINGLE    
%x COMMENT_MULTI    
%x STRING            

%%

\n      { lno++; }

{ws}    /* skip whitespace */

{number} { printf("this is a number: %s in line = %d\n", yytext, lno); }
{keywd}  { printf("this is a keyword: %s in line = %d\n", yytext, lno); }
{id}     { printf("this is an identifier: %s in line = %d\n", yytext, lno); }

">"|"<"|"<="|">="  { printf("relation operator: %s in line = %d\n", yytext, lno); }
"!="               { printf("not equal operator: %s in line = %d\n", yytext, lno); }
"=="               { printf("equal operator: %s in line = %d\n", yytext, lno); }
"="                { printf("assignment operator: %s in line = %d\n", yytext, lno); }

"["|"]"|"{"|"}"|"("|")" { printf("parenthesis: %s in line = %d\n", yytext, lno); }

\"          { printf("this is a string: %s in line = %d\n", yytext, lno); BEGIN(STRING); }    /* Enter the STRING state for double-quoted strings */
<STRING>{
    [^\"]+   { /* Action for non-quote characters within double-quoted string */ }
    \\\"     { /* Action for escaped double quote within double-quoted string */ }
    \\\n     { /* Action for line continuation within double-quoted string */ }
    \n       { /* Action for newline within double-quoted string */ }
    \"       { printf("end of string in line = %d\n", lno); BEGIN(INITIAL); /* Return to the INITIAL state */ }
}

\#          { printf("this is a comment: %s in line = %d\n", yytext, lno); BEGIN(COMMENT_SINGLE); }    /* Enter the COMMENT_SINGLE state for single-line comments */
<COMMENT_SINGLE>{
    [^\n]+  { /* ignore characters within single-line comment */ }
    \n      { printf("end of comment in line = %d\n", lno); lno++; BEGIN(INITIAL); } /* return to INITIAL state on newline */
}

\'\'\'      { printf("this is a  multi comment: %s in line = %d\n", yytext, lno); BEGIN(COMMENT_MULTI); }    /* Enter the COMMENT_MULTI state for multi-line comments */
<COMMENT_MULTI>{
    [^\'\n]+  { /* ignore characters within multi-line comment */ }
    \n         { lno++; }          /* count newlines within multi-line comment */
    \'\'\'     { BEGIN(INITIAL); } /* return to INITIAL state on encountering closing triple quotes */
}

.        { printf("error in line %d: %s\n", lno, yytext); }

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
