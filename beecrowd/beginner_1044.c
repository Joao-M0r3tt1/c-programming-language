/*
Information: 
    - beecrowd | 1044 - Multiples
    - Adapted by Neilor Tonin, URI Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1044
Statement: Read two integer values (A and B). After, the program should print the message "Sao Multiplos" (are multiples) or "Nao sao Multiplos" (aren’t multiples), corresponding to the read values.

Input: The input has two integer numbers.

Output: Print the relative message to the input as stated above.
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1044
Enunciado: Leia dois valores inteiros (A e B). Após, o programa deverá imprimir a mensagem "Sao Multiplos" (são múltiplos) ou "Nao sao Multiplos" (não são múltiplos), correspondente aos valores lidos.

Entrada: A entrada possui dois números inteiros.

Saída: Imprima a mensagem relativa à entrada conforme indicado acima.
*/

#include <stdio.h>

int main(void) {
    int a, b;

    scanf("%d %d", &a, &b);

    if((a % b) == 0 || (b % a) == 0) puts("Sao Multiplos");
    else puts("Nao sao Multiplos");

    return 0;
}