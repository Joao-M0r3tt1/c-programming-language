/*
Information: 
    - beecrowd | 1007 - Difference
    - Adapted by Neilor Tonin, URI Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1007
Statement: Read four integer values A, B, C and D. Then, calculate and show the difference between the product of A and B and the product of C and D according to the formula: DIFFERENCE = (A * B - C * D).

Input: The input file contains 4 integer values.

Output: Print the message DIFFERENCA with all capital letters, as per the example below, with a blank space before and after the equality.
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1007
Enunciado: Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).

Entrada: O arquivo de entrada contém 4 valores inteiros.

Saída: Imprima a mensagem DIFERENCA com todas as letras maiúsculas, conforme exemplo abaixo, com um espaço em branco antes e depois da igualdade.
__________________________________________________________________________________________________________________________________________________

Input Examples                   Output Examples
     5
     6                           DIFERENCA = -26
     7
     8
__________________________________________________
     0
     0                           DIFERENCA = -56
     7
     8
__________________________________________________    
     5
     6                           DIFERENCA = 86
    -7
     8
*/

#include <stdio.h>

int main(void) {
     int a, b, c, d;

     scanf("%d", &a);
     scanf("%d", &b);
     scanf("%d", &c);
     scanf("%d", &d);

     printf("DIFERENCA = %d\n", ((a * b) - (c * d)));

     return 0;
}