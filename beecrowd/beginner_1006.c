/*
Information: 
    - beecrowd | 1006 - Average 2
    - Adapted by Neilor Tonin, URI Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1006
Statement: Read 3 values, in this case, variables A, B and C, which are a student's three grades. Next, calculate the student's average, knowing that grade A has a weight of 2, grade B has a weight of 3 and grade C has a weight of 5. Consider that each grade can go from 0 to 10.0, always with one decimal place.

Input: The input file contains 3 values with one decimal place, double precision.

Output: Print the message "MEDIA" and the student's average as per the example below, with 1 digit after the decimal point and with a blank space before and after equality. As with all problems, don't forget to print the end of line after the result, otherwise you will get "Presentation Error".
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1006
Enunciado: Leia 3 valores, no caso, variáveis A, B e C, que são as três notas de um aluno. A seguir, calcule a média do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5. Considere que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.

Entrada: O arquivo de entrada contém 3 valores com uma casa decimal, de dupla precisão (double).

Saída: Imprima a mensagem "MEDIA" e a média do aluno conforme exemplo abaixo, com 1 dígito após o ponto decimal e com um espaço em branco antes e depois da igualdade. Assim como todos os problemas, não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".
__________________________________________________________________________________________________________________________________________________

Input Examples                   Output Examples
     5.0
     6.0                         MEDIA = 6.3
     7.0
__________________________________________________
     5.0
     10.0                        MEDIA = 9.0
     10.0
__________________________________________________    
     10.0
     10.0                        MEDIA = 7.5
     5.0
*/

#include <stdio.h>

int main(void) {
    double a, b, c;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    printf("MEDIA = %.1lf\n", (((a * 2) + (b * 3) + (c * 5)) / 10));

    return 0;
}