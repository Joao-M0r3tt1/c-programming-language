/*
en-US: EXERCISE_08.C - Exercise 08. Swap
- Statement: Using the bitwise 'exclusive or' operator, create the function swap(v, i, j), which swaps the elements in positions i and j of the vector v. The function must consider that the items in the vector v are integers and that no auxiliary variables can be used
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_08.C - Exercicio 08. Troca
- Enunciado: Usando o operador 'ou exclusivo' bit-a-bit, crie a função troca(v, i, j), que troca os elementos das posições i e j do vetor v. A função deve considerar que os itens do vetor v são números inteiros e que nehuma variável auxiliar pode ser usada
*/

#include <stdio.h>

void swap(int v[], int i, int j) {
    if(i != j) {
        v[i] ^= v[j];
        v[j] ^= v[i];
        v[i] ^= v[j];

        /* or: 
            int a = v[i] ^ v[j];
            v[i] ^= a;
            v[j] ^= a;
        */
    }
    else printf("Values of i and j are the same, it is not possible to exchange\n");
}

void display(int v[], int size) {
    for(int i = 0; i < size; i++) {
        printf(" %02d ", v[i]);
        printf("|");
    }
    puts("\n");
}

int main(void) {
    int v[] = {1, 2, 3, 4, 5};

    printf("Vector before swap: ");
    display(v, 5);
    
    swap(v, 2, 4);
    
    printf("Vector after swap: ");
    display(v, 5);

    return 0;
}