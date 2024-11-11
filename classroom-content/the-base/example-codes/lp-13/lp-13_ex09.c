/*
en-US: EXAMPLE_09.C - Example 09. The program copies
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_09.C - Exemplo 09. O programa copia
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-13.pdf
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void error(char *message) {
    puts(message);
    exit(1);
}

int exist(char *name) {
    FILE *a = fopen(name, "rb");
    fclose(a);

    return (a != NULL);
}

FILE *open(char *name, char *mode, char *message) {
    FILE *f = fopen(name, mode);
    if(f == NULL) error(message);

    return f;
}

int main(int argc, char *argv[]) {
    if(argc != 3) error("Syntax: lp-13_ex09 origin destiny");
    if(strcmp(argv[1], argv[2]) == 0) error("Origin equals destination!");

    FILE *o = open(argv[1], "rb", "Origin cannot be opened!");

    if(exist(argv[2])) {
        printf("Overwrite destination? [s/n]");
        if(toupper(getchar()) != 'S') return 0;
    }

    FILE *d = open(argv[2], "wb", "Destination cannot be opened!");

    while(1) {
        char c = fgetc(o);
        if(feof(o)) break;
        fputc(c, d);
    }
    fclose(o);
    fclose(d);
    puts("Copied file!");

    return 0;
}