/*
en-US: EXERCISE_05.C - Exercise 05. Maximum
- Statement: Using only bitwise operators, create the maxint() function, which returns the maximum value that a variable of type int can store (note that the maximum value has all bits turned on, except the leftmost bit, which is the sign bit)
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_05.C - Exercicio 05. Máximo
- Enunciado: Usando apenas operadores bit-a-bit, crie a função maxint(), que devolve o valor máximo que uma variável do tipo int pode armazenar (note que o valor máximo tem todos os bits ligados, exceto o bit mais à esquerda que é o bit de sinal)
*/

#include <stdio.h>

int maxint() {
    // all bits set to 1 except sign bit
    return ~0u >> 1;
}

int main(void) {
    printf("Maximum value that a variable of type int can store: %d", maxint());

    return 0;
}