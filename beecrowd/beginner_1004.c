/*
Information: 
    - beecrowd | 1004 - Simple Product
    - Adapted by Neilor Tonin, URI Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1004
Statement: Read two integer values, in this case for variables A and B. Then, calculate the sum between them and assign it to the variable SUM. Then write the value of this variable.

Input: The input file contains 2 integer values.

Output: Print the message "SUM" in all capital letters, with a blank space before and after the equality followed by the value corresponding to the sum of A and B. Like all problems, don't forget to print the end of line after the result, otherwise you will get "Presentation Error".
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1004
Enunciado: Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta operação à variável PROD. A seguir mostre a variável PROD com mensagem correspondente.   

Entrada: O arquivo de entrada contém 2 valores inteiros.

Saída: Imprima a mensagem "PROD" e a variável PROD conforme exemplo abaixo, com um espaço em branco antes e depois da igualdade. Não esqueça de imprimir o fim de linha após o produto, caso contrário seu programa apresentará a mensagem: “Presentation Error”.
__________________________________________________________________________________________________________________________________________________

Input Examples                   Output Examples
     3                              PROD = 27
     9
__________________________________________________
   -30                              PROD = -300
    10
__________________________________________________
    0                               PROD = 0
    9
*/

#include <stdio.h>

int main(void) {
    int number1, number2;

    scanf("%d", &number1);
    scanf("%d", &number2);

    printf("PROD = %d\n", (number1 * number2));

    return 0;
}