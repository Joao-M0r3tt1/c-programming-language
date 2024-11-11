/*
Information: 
    - beecrowd | 1003 - Simple Sum
    - Adapted by Neilor Tonin, URI Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1003
Statement: Read two integer values, in this case for variables A and B. Then, calculate the sum between them and assign it to the variable SUM. Then write the value of this variable.

Input: The input file contains 2 integer values.

Output: Print the message "SUM" in all capital letters, with a blank space before and after the equality followed by the value corresponding to the sum of A and B. Like all problems, don't forget to print the end of line after the result, otherwise you will get "Presentation Error".
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1003
Enunciado: Leia dois valores inteiros, no caso para variáveis A e B. A seguir, calcule a soma entre elas e atribua à variável SOMA. A seguir escrever o valor desta variável.

Entrada: O arquivo de entrada contém 2 valores inteiros.

Saída: Imprima a mensagem "SOMA" com todas as letras maiúsculas, com um espaço em branco antes e depois da igualdade seguido pelo valor correspondente à soma de A e B. Como todos os problemas, não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".
__________________________________________________________________________________________________________________________________________________

Input Examples                   Output Examples
    30                              SOMA = 40
    10
__________________________________________________
   -30                              SOMA = -20
    10
__________________________________________________
    0                               SOMA = 0
    0
*/

#include <stdio.h>

int main(void) {
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("SOMA = %d\n", (a + b));
    
    return 0;
}