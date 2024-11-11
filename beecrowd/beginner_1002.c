/*
Information: 
    - beecrowd | 1002 - Circle Area
    - Adapted by Neilor Tonin, URI Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1002
Statement: The formula for calculating the area of a circle is: 'area = π . radius2'. Considering for this problem that π = 3.14159:
- Calculate the area, squaring the radius value and multiplying by π.

Input: The input contains a floating point value (double precision), in this case, the variable radius.

Output: Display the message "A=" followed by the value of the area variable, as shown in the example below, with 4 places after the decimal point. Use double precision variables. Like all problems, don't forget to print the end of line after the result, otherwise you will get "Presentation Error".
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1002
Enunciado: A fórmula para calcular a área de uma circunferência é: 'area = π . raio2'. Considerando para este problema que π = 3.14159:
- Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por π.

Entrada: A entrada contém um valor de ponto flutuante (dupla precisão), no caso, a variável raio.

Saída: Apresentar a mensagem "A=" seguido pelo valor da variável area, conforme exemplo abaixo, com 4 casas após o ponto decimal. Utilize variáveis de dupla precisão (double). Como todos os problemas, não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".
__________________________________________________________________________________________________________________________________________________

Input Examples                   Output Examples
    2.00                            A=12.5664
__________________________________________________
    100.64                          A=31819.3103
__________________________________________________
    150.00                          A=70685.7750
*/

#include <stdio.h>

int main(void) {
    double radius, n = 3.14159;

    scanf("%lf", &radius);

    printf("A=%.4lf\n", (n * (radius * radius)));

    return 0;
}