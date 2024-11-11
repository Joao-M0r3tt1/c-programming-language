/*
en-US: EXERCISE_03.C - Exercise 03. Odd
- Statement: Using only bitwise operators, create the function odd(n), which returns true if and only if the natural number n is odd
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_03.C - Exercicio 03. ímpar
- Enunciado: Usando apenas operadores bit-a-bit, crie a função impar(n), que devolve verdade se e só se o número natural n for ímpar
*/

#include <stdio.h>
#include <stdbool.h>

bool odd(int n) {
    if(n & 1)   // 1 = 0000 0001
        return true;
    else return false;
}

/*

n-ex:   0xAD    (1010 1101)
Mask:   0x01    (0000 0001)  &
____________________________
Res.:   0x01    (0000 0001)

*/

int main(void) {
    int n;

    printf("Number? ");
    scanf("%d", &n);

    printf(odd(n) ? "The number is odd" : "The number is not odd");

    return 0;
}