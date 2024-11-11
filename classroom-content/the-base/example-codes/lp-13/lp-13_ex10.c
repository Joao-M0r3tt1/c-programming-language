/*
en-US: EXAMPLE_10.C - Example 10. Capitalization conversion
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_10.C - Exemplo 10. Conversão em maiúscula
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-13.pdf
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void error(char *message) {
    puts(message);
    exit(1);
}

int main(int argc, char *argv[]) {
    if(argc != 2) error("Syntax: lp-13_ex10 file!");

    FILE *a = fopen(argv[1], "rb+");
    if(a == NULL) error("File cannot be opened!");

    while(1) {
        fseek(a, 0, SEEK_CUR);
        char c = fgetc(a);
        if(feof(a)) break;
        fseek(a, -1, SEEK_CUR);
        fputc(toupper(c), a);
    }
    fclose(a);

    return 0;
}