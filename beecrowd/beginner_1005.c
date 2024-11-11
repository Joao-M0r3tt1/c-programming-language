/*
Information: 
    - beecrowd | 1005 - Average 1
    - Adapted by Neilor Tonin, URI Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1005
Statement: Read 2 double precision floating point values A and B, which correspond to 2 grades from a student. Next, calculate the student's average, knowing that grade A has a weight of 3.5 and grade B has a weight of 7.5 (The sum of the weights is therefore 11). Assume that each note can go from 0 to 10.0, always with one decimal place.

Input: The input file contains 2 values with one decimal place each.

Output: Print the message "MEDIA" and the student's average as per the example below, with 5 digits after the decimal point and with a blank space before and after equality. Use double precision variables and like all problems, don't forget to print the end of line after the result, otherwise you will receive "Presentation Error".
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1005
Enunciado: Leia 2 valores de ponto flutuante de dupla precisão A e B, que correspondem a 2 notas de um aluno. A seguir, calcule a média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma dos pesos portanto é 11). Assuma que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.

Entrada: O arquivo de entrada contém 2 valores com uma casa decimal cada um.

Saída: Imprima a mensagem "MEDIA" e a média do aluno conforme exemplo abaixo, com 5 dígitos após o ponto decimal e com um espaço em branco antes e depois da igualdade. Utilize variáveis de dupla precisão (double) e como todos os problemas, não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".
__________________________________________________________________________________________________________________________________________________

Input Examples                   Output Examples
     5.0                         MEDIA = 6.43182
     7.1
__________________________________________________
     0.0                         MEDIA = 4.84091
     7.1
__________________________________________________    
     10.0                        MEDIA = 10.00000
     10.0
*/

#include <stdio.h> 

int main(void) {
    double a, b;

    scanf("%lf", &a);
    scanf("%lf", &b);

    printf("MEDIA = %.5lf\n", (((a * 3.5) + (b * 7.5)) / 11));

    return 0;
}