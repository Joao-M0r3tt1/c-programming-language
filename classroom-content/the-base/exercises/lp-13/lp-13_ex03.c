/*
en-US: EXERCISE_03.C - Exercise 03. Keyless encryption
- Statement: An encryption algorithm transforms readable text into unreadable text (from which the original text can be recovered). A very simple (and naive) operation that can be used to encrypt and decrypt characters in a text is bit-by-bit negation. Using this operation, change the program from the previous example to encrypt and decrypt files
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_03.C - Exercicio 03. Criptografia sem chave
- Enunciado: Um algoritmo de criptografia transforma um texto legível num texto ilegível (a partir do qual o texto original pode ser recuperado). Uma operação bastante simples (e ingênua) que pode ser usada para criptografar e descriptografar os caracteres de um texto é a negação bit-a-bit. Usando essa operação, altere o programa do exemplo anterior para criptografar e descriptografar arquivos
*/

#include <stdio.h>
#include <stdlib.h>

void error(char *message) {
    puts(message);
    exit(1);
}

int main(int argc, char *argv[]) {
    if(argc != 2) error("Syntax: lp-13_ex03 file!");

    FILE *a = fopen(argv[1], "rb+");
    if(a == NULL) error("File cannot be opened!");

    while(1) {
        fseek(a, 0, SEEK_CUR);
        char c = ~fgetc(a);
        if(feof(a)) break;
        fseek(a, -1, SEEK_CUR);
        fputc(c, a);
    }
    fclose(a);

    return 0;
}