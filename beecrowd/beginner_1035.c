/*
Information: 
    - beecrowd | 1035 - Selection Test 1
    - Adapted by Neilor Tonin, URI Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1035
Statement: Read 4 integer values A, B, C and D. Then if B is greater than C and D is greater than A and if the sum of C and D is greater than the sum of A and B and if C and D were positives values and if A is even, write the message “Valores aceitos” (Accepted values). Otherwise, write the message “Valores nao aceitos” (Values not accepted).

Input: Four integer numbers A, B, C and D.

Output: Show the corresponding message after the validation of the values​​.
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1035
Enunciado: Leia 4 valores inteiros A, B, C e D. Então, se B for maior que C e D for maior que A e se a soma de C e D for maior que a soma de A e B e se C e D forem valores positivos e se A for par, escreva a mensagem “Valores aceitos”. Caso contrário, escreva a mensagem “Valores não aceitos”.

Entrada: Quatro números inteiros A, B, C e D.

Saída: Mostrar a mensagem correspondente após a validação dos valores.
*/

#include <stdio.h>

int main(void) {
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(b > c && d > a && (c + d) > (a + b) && c > 0 && d > 0 && a % 2 == 0)
        puts("Valores aceitos");
    else puts("Valores nao aceitos");
    
    return 0;
}