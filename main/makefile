COMP = clang

all: compiler

compiler: BISON.tab.c BISON.tab.h lex.c
 $(COMP) BISON.tab.c lex.c -o myCompiler

lex.c: LEXER.l
 flex -o lex.c LEXER.l

BISON.tab.c: BISON.y
 bison -d BISON.y

clear:
 rm myCompiler BISON.tab.h BISON.tab.c lex.c