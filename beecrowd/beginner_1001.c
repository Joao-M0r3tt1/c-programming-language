/*
Information: 
    - beecrowd | 1001 - Extremely Basic
    - Adapted by Neilor Tonin, URI Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1001
Statement: Read 2 integer values and store them in variables A and B. Make the sum of A and B, assigning your result to variable X. Print X as per the example shown below. Do not present any message other than what is being specified and do not forget to print the end of line after the result, otherwise you will receive "Presentation Error".

Input: Input contains 2 integer values.

Output: Print the message "X = " (capital letter X) followed by the value of the variable X and the end of the line. Make sure there is a space before and after the equal sign, as shown in the example below.
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1001 
Enunciado: Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma de A e B atribuindo o seu resultado na variável X. Imprima X conforme exemplo apresentado abaixo. Não apresente mensagem alguma além daquilo que está sendo especificado e não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".

Entrada: A entrada contém 2 valores inteiros.

Saída: Imprima a mensagem "X = " (letra X maiúscula) seguido pelo valor da variável X e pelo final de linha. Cuide para que tenha um espaço antes e depois do sinal de igualdade, conforme o exemplo abaixo.
__________________________________________________________________________________________________________________________________________________

Input Examples                   Output Examples
        10                            X = 19
        09 
__________________________________________________
       -10                            X = -6
        04
__________________________________________________
        15                            X = 8
       -07
*/

#include <stdio.h>

int main(void) {
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("X = %d\n", (a + b));

    return 0;
}