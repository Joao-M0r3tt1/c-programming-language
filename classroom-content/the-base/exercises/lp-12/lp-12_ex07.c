/*
en-US: EXERCISE_07.C - Exercise 07. Uppercase and lowercase
- Statement: Comparing the ASCII codes of any uppercase letter and its corresponding lowercase letter, we can observe that they differ by a single bit. For example:

                ⭣
'A' = 0x41 = 0100 0001
'a' = 0x61 = 0110 0001
                ⭡

Based on this information, use bitwise operators to create the functions:
     - uppercase(c), which returns the capitalization of the character c
     - lowercase(c), which returns the lower case of the character c

Functions must check whether the character c can be converted. If it can, they must return the conversion result; otherwise, they must return their own c
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_07.C - Exercicio 07. Maiúscula e minúscula
- Enunciado: Comparando os códigos ASCII de uma letra maiúscula qualquer e de sua correspondente minúscula, podemos observar que eles diferem em um único bit. Por exemplo:

               ⭣ 
'A' = 0x41 = 0100 0001
'a' = 0x61 = 0110 0001
               ⭡ 

Com base nessa informação, use operadores bit-a-bit para criar as funções:
    - maiuscula(c), que devolve a maiúscula do caractere c
    - minuscula(c), que devolve a minúscula do caractere c

As funções devem verificar se o caracter c pode ser convertido. Caso ele possa, elas devem devolver o resultado da conversão; caso contrário, elas devem devolver o próprio c
*/

#include <stdio.h>

char uppercase(char c) {
    return c & 0xdf;
}

char lowercase(char c) {
    return c | 0x20;
}

int main(void) {
    char character;

    printf("Character?");
    scanf("%c", &character);

    if(character >= 65 && character <= 90)
        printf("Lowercase of the character %c: %c", character, lowercase(character));
    else if(character >= 97 && character <= 122)
        printf("Capitalization of the character %c: %c", character, uppercase(character));
    else printf("invalid %c character", character);

    return 0;
}