/*
en-US: EXERCISE_13.C - Exercise 13. Weak encryption
- Statement: Using the rol() and ror() rotation functions, create the encryption(s, k) function, which encrypts or decrypts a string s with key k (with an absolute value between 1 and 7). If k is positive, the function must encrypt s (using left rotation); otherwise, it must decrypt s (using right rotation). The cryptography() function must return as a response the address of the string received as input. Also write a program to test this function
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_13.C - Exercicio 13. Criptografia fraca
- Enunciado: Usando as funções de rotação rol() e ror(), crie a função criptografia(s, k), que criptografa ou descriptografa uma string s com chave k (com valor absoluto entre 1 e 7). Se k for positivo, a função deve criptografar s (usando rotação à esquerda); caso contrário, ela deve descriptografar s (usando rotação à direita). A função criptografia() deve devolver como resposta o endereço da string recebida como entrada. Faça também um programa para testar essa função
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Encryption
unsigned char rol(unsigned char b, int n) {
    int total_bits = sizeof(unsigned char) * 8;
    n %= total_bits;
    return (b << n) | (b >> (total_bits - n));
}

// Decrypt
unsigned char ror(unsigned char b, int n) {
    int total_bits = sizeof(unsigned char) * 8;
    n %= total_bits;
    return (b >> n) | (b << (total_bits - n));
}

char* encryption(char* s, int k) {
    int len = strlen(s);
    
    // Normalizes the value of k to be in the range [1, 7]
    if(k >= 0) k = abs(k) % 7;
    
    if (k > 0) {
        for (int i = 0; i < len; i++) {
            s[i] = rol(s[i], k);
        }
    } else {
        for (int i = 0; i < len; i++) {
            s[i] = ror(s[i], abs(k));
        }
    }
    
    return s;
}

int main(void) {
    char text[] = "Encryption";
    int key = 3; // Encryption key
    
    printf("Texto original: %s\n", text);
    
    char* encrypted_text = encryption(text, key);
    printf("Texto criptografado com chave %d: %s\n", key, encrypted_text);
    
    char* decrypted_text = encryption(encrypted_text, -key);
    printf("Texto descriptografado: %s\n", decrypted_text);
    
    return 0;
}