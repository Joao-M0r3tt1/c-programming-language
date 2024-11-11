/*
en-US: EXERCISE_06.C - Exercise 06. Minimum
- Statement: Using only bitwise operators, create the minint() function, which returns the minimum value that a variable of type int can store (note that the minimum value has all bits turned off, except the leftmost bit, which is the sign bit)
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_06.C - Exercicio 06. Mínimo
- Enunciado: Usando apenas operadores bit-a-bit, crie a função minint(), que devolve o valor mínimo que uma variável do tipo int pode armazenar (note que o valor mínimo tem todos os bits desligados, exceto o bit mais à esquerda que é o bit de sinal)
*/

#include <stdio.h>

int minint() {
    // Shifts the sign bit to the correct position
    return 1 << 31;
}

int main(void) {
    printf("Minimum value that a variable of type int can store: %d", minint());

    return 0;
}