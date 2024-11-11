/*
en-US: EXAMPLE_07.C - Example 07. Successful opening check
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_07.C - Exemplo 07. Verificação de abertura bem sucedida
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-13.pdf
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *openFile = fopen("nameFile.extension", "openingMode");

    if(openFile == NULL) {
        puts("File cannot be opened!");
        exit(1);
    }

    return 0;
}