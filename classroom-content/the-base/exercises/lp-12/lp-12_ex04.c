/*
en-US: EXERCISE_04.C - Exercise 04. Pair
- Statement: Using only bitwise operators, create the function pair(n), which returns true if and only if the natural number n is even
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_04.C - Exercicio 04. Par
- Enunciado: Usando apenas operadores bit-a-bit, crie a função par(n), que devolve verdade se e só se o número natural n for par
*/

#include <stdio.h>
#include <stdbool.h>

bool pair(int n) {
    if(!(n & 1))   // 1 = 0000 0001
        return true;
    else return false;
}

/*

n-ex:   0xAE    (1010 1110)
Mask:   0x01    (0000 0001)  &
____________________________
Res.:   0x01    (0000 0001)

*/

int main(void) {
    int n;

    printf("Number? ");
    scanf("%d", &n);

    printf(pair(n) ? "The number is even" : "The number is not even");

    return 0;
}