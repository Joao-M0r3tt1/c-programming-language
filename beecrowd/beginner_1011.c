/*
Information: 
    - beecrowd | 1011 - Ball
    - Adapted by Neilor Tonin, URI Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1011
Statement: Write a program that calculates and displays the volume of a sphere given the value of its radius (R). The formula for calculating volume is: (4/3) * pi * R3. Consider (assign) the value 3.14159 to pi.

Tip: When using the formula, try to use (4/3.0) or (4.0/3), as some languages (including C++) assume that the result of dividing two integers is another integer.

Input: The input file contains a floating point value (double precision), corresponding to the radius of the sphere.

Output: The output should be a "VOLUME" message as in the example provided below, with a space before and a space after the equality. The value must be presented with 3 places after the point.
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1011
Enunciado: Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (R). A fórmula para calcular o volume é: (4/3) * pi * R3. Considere (atribua) para pi o valor 3.14159.

Dica: Ao utilizar a fórmula, procure usar (4/3.0) ou (4.0/3), pois algumas linguagens (dentre elas o C++), assumem que o resultado da divisão entre dois inteiros é outro inteiro.

Entrada: O arquivo de entrada contém um valor de ponto flutuante (dupla precisão), correspondente ao raio da esfera.

Saída: A saída deverá ser uma mensagem "VOLUME" conforme o exemplo fornecido abaixo, com um espaço antes e um espaço depois da igualdade. O valor deverá ser apresentado com 3 casas após o ponto.
__________________________________________________________________________________________________________________________________________________

Input Examples             Output Examples
    3                      VOLUME = 113.097
__________________________________________________
    15                     VOLUME = 14137.155
__________________________________________________    
    1523                   VOLUME = 14797486501.627
*/

#include <stdio.h>

int main(void) {
    double radius, PI = 3.14159;

    scanf("%lf", &radius);

    printf("VOLUME = %.3lf\n", ((4/3.0) * PI * (radius * radius * radius)));

    return 0;
}