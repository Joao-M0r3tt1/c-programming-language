/*
en-US: EXAMPLE_03.C - Example 03. The cat program
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_03.C - Exemplo 03. O programa cat
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-13.pdf

    - EOF: end-of-file - (is a condition of a computer's operating system, reached when there is no more data to be read from the "data source")
                       -> Windows (Ctrl+Z : in interactive shell) 
                       -> Unix (Ctrl+D : in interactive shell)
*/

#include <stdio.h>

int main(void) {
    int c;

    while((c = getchar()) != EOF) putchar(c);

    return 0;
}