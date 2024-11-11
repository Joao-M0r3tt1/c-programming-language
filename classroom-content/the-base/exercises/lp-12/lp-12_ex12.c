/*
en-US: EXERCISE_12.C - Exercise 12. Rotate to right
- Statement: In right shift, the rightmost n bits are lost. Using bitwise operators, create the function ror(b, n), which rotates the value of byte b (unsigned char) n bits to the right, so that the n bits that leave on the right enter on the left. For example:

ror('*', 3) = ror(0x2Au, 3)
             = rol(0010 1010, 3) = 0100 0101
             = 0x45u = 'E'
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_12.C - Exercicio 12. Rotação à direita (rotate to right)
- Enunciado: No deslocamento à direita, os n bits mais à direita são perdidos. Usando operadores bit-a-bit, crie a função ror(b, n), que rotaciona o valor do byte b (unsigned char) n bits à direita, de modo que os n bits que saírem pela direita entrem pela esquerda. Por exemplo: 

ror('*', 3) = ror(0x2Au, 3)
            = rol(0010 1010, 3) = 0100 0101
            = 0x45u = 'E'
*/

#include <stdio.h>

unsigned char ror(unsigned char b, int n) {
    // Gets the total number of bits in a byte
    int total_bits = sizeof(unsigned char) * 8;
    
    // Normalizes the value of n to be within the range [0, total_bits)
    n %= total_bits;
    
    // Performs right rotation
    return (b >> n) | (b << (total_bits - n));
}

int main(void) {
    unsigned char byte = '*'; // Example byte
    int n = 3; // Number of bits to rotate

    printf("Original byte: 0x%02X. Character: %c\n", byte, byte);
    byte = ror(byte, n);
    printf("Byte after %d bits right rotation: 0x%02X. Character: %c\n", n, byte, byte);

    return 0;
}