/*
Information: 
    - beecrowd | 1042 - Simple Sort
    - Adapted by Neilor Tonin, URI Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1042
Statement: Read three integers and sort them in ascending order. After, print these values in ascending order, a blank line and then the values in the sequence as they were readed.

Input: The input contains three integer numbers.

Output: Present the output as requested above.
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1042
Enunciado: Leia três números inteiros e classifique-os em ordem crescente. Após imprima esses valores em ordem crescente, uma linha em branco e a seguir os valores na sequência conforme foram lidos.

Entrada: A entrada contém três números inteiros.

Saída: Apresente a saída conforme solicitado acima.
*/

#include <stdio.h>
#define SIZE 3

void display(int *v) {
    for(int i = 0; i < SIZE; i++) printf("%d\n", v[i]);
    puts("");
}

int main(void) {
    int aux, vector[SIZE], vectorSort[SIZE];

    for(int i = 0; i < SIZE; i++)
        scanf("%d", &vector[i]);

    for(int i = 0; i < SIZE; i++) vectorSort[i] = vector[i];

    for(int i = 1; i <= SIZE; i++)
        for(int j = 0; j < SIZE - i; j++) {
            if(vectorSort[j] > vectorSort[j + 1]) {
                aux = vectorSort[j];
                vectorSort[j] = vectorSort[j + 1];
                vectorSort[j + 1] = aux;
            }
        }

    display(vectorSort);
    display(vector);

    return 0;
}