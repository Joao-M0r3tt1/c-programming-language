/*
en-US: EXERCISE_10.C - Exercise 10. Binary
- Statement: Using bitwise operators, create the function displays(n), which displays the natural n in binary
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_10.C - Exercicio 10. Binário
- Enunciado: Usando operadores bit-a-bit, crie a função exibe(n), que exibe o natural n em binário
*/

#include <stdio.h>

void binary(int n) {
    // Determines the total number of bits in an integer
    int total_bits = sizeof(int) * 8;

    // Iterates from MSB (most significant bit) to LSB (least significant bit)
    for (int i = total_bits - 1; i >= 0; i--) {
        // Extracts the ith bit using a left shift and prints it
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}

int main(void) {
    int n;

    printf("Number? ");
    scanf("%d", &n);

    binary(n);
    
    return 0;
}