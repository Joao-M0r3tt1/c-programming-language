/*
en-US: EXAMPLE_01.C - Example 01. Standard output, error output and fprintf()
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_01.C - Exemplo 01. Saída padrão, saída de erros e fprintf()
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-13.pdf
*/

#include <stdio.h>

int main(void) {
    fprintf(stdout, "One, two, three, ");
    fprintf(stderr, "testing...\n");

    return 0;
}