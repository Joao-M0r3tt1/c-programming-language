/*
en-US: EXERCISE_11.C - Exercise 11. Rotate to left
- Statement: In left shift, the leftmost n bits are lost. Using bitwise operators, create the function rol(b, n), which rotates the value of byte b (unsigned char) n bits to the left, so that the n bits that leave on the left enter on the right. For example:

rol('E', 3) = rol(0x45u, 3)
             = rol(0100 0101, 3) = 0010 1010
             = 0x2Au = '*'
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_11.C - Exercicio 11. Rotação à esquerda (rotate to left)
- Enunciado: No deslocamento à esquerda, os n bits mais à esquerda são perdidos. Usando operadores bit-a-bit, crie a função rol(b, n), que rotaciona o valor do byte b (unsigned char) n bits à esquerda, de modo que os n bits que saírem pela esquerda entrem pela direita. Por exemplo: 

rol('E', 3) = rol(0x45u, 3)
            = rol(0100 0101, 3) = 0010 1010
            = 0x2Au = '*'
*/

#include <stdio.h>

unsigned char rol(unsigned char b, int n) {
    // Gets the total number of bits in a byte
    int total_bits = sizeof(unsigned char) * 8;
    
    // Normalizes the value of n to be within the range [0, total_bits)
    n %= total_bits;
    
    // Performs left rotation
    return (b << n) | (b >> (total_bits - n));
}

int main(void) {
    unsigned char byte = 'E'; // Example byte
    int n = 3; // Number of bits to rotate

    printf("Original byte: 0x%02X. Character: %c\n", byte, byte);
    byte = rol(byte, n);
    printf("Byte after %d bits left rotation: 0x%02X. Character: %c\n", n, byte, byte);

    return 0;
}