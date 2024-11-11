/*
en-US: EXERCISE_04.C - Exercise 04. Key encryption
- Statement: A stronger operation for encryption is bitwise exclusive-or. With it we can encrypt a character of a text (e.g., 'A'), using a character of a key (e.g., 'b'):

    - Codes: 'A' ^ 'b' = (0x41 ^ 0x62 = 0100 0001 ^ 0110 0010 = 0010 0011 = 0x23) = '#'
    - Decodes: '#' ^ 'b' = (0x23 ^ 0x62 = 0100 0001 ^ 0110 0010 = 0100 0001 = 0x41) = 'A'
    - Cyclic use of the key to match text and key:
        - Text characters: A SECRET PHRASE
        - Key characters.: KEYKEYKEYKEYKEY

    Using this idea, create a program to encrypt and decrypt a file with key. The program must have the following crypto key file syntax
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_04.C - Exercicio 04. Criptografia com chave
- Enunciado: Uma operação mais forte para criptografar é o ou-exclusivo bit-a-bit. Com ela podemos criptografar um caractere de um texto (e.g., 'A'), usando um caractere de uma chave (e.g., 'b'):

    - Codifica..: 'A' ^ 'b' = (0x41 ^ 0x62 = 0100 0001 ^ 0110 0010 = 0010 0011 = 0x23) = '#'
    - Decodifica: '#' ^ 'b' = (0x23 ^ 0x62 = 0100 0001 ^ 0110 0010 = 0100 0001 = 0x41) = 'A'
    - Uso cíclico da chave para correspondência entre texto e chave:
        - Caracteres do texto: UMA FRASE SECRETA
        - Caracteres da chave: CHAVECHAVECHAVECH

    Usando essa ideia, crie um programa para criptografar e descriptografar um arquivo com chave. O programa deve ter a seguinte sintaxe cripto arquivo chave
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void error(char *message) {
    puts(message);
    exit(1);
}

int main(int argc, char *argv[]) {
    if(argc != 3) error("Syntax: lp-13_ex04 file key!");
    if(strcmp(argv[1], argv[2]) == 0) error("Origin equals destination!");

    FILE *o = fopen(argv[1], "r+");
    if(o == NULL) error("File cannot be opened!");

    FILE *k = fopen(argv[2], "r");
    if(k == NULL) error("File cannot be opened!");

    while(1) {
        fseek(o, 0, SEEK_CUR);
        fseek(k, 0, SEEK_CUR);
        char c = fgetc(k) ^ fgetc(o);
        if(feof(o) || feof(k)) break;
        fseek(o, -1, SEEK_CUR);
        fseek(k, -1, SEEK_CUR);
        fputc(c, o);
    }
    fclose(o);
    fclose(k);

    return 0;
}