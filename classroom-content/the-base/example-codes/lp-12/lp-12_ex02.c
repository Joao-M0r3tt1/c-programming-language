/*
en-US: EXAMPLE_02.C - Example 02. The 'eco' program
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_02.C - Exemplo 02. O programa 'eco'
_____________________________________________________________________________________________________________________

- obs: Check theoretical example in the file: contents/lp-12.pdf
       Executable in the output folder 
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Number of parameters: %d\n", argc);

    for(int i = 1; i < argc; i++) puts(argv[i]);

    return 0;
}
