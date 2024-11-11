/*
Information: 
    - beecrowd | 1012 - Area
    - Adapted by Neilor Tonin, URI Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1012
Statement: Write a program that reads three double-precision floating-point values: A, B, and C. Then calculate and display:
a) the area of the right triangle that has A as its base and C as its height.
b) the area of the circle of radius C. (pi = 3.14159)
c) the area of the trapezoid that has A and B for bases and C for height.
d) the area of the square that has side B.
e) the area of the rectangle that has sides A and B.

Input: The input file contains three values with a digit after the decimal point.

Output: The output file must contain 5 lines of data. Each line corresponds to one of the areas described above, always with a corresponding message and a space between the two points and the value. The calculated value must be presented with 3 digits after the decimal point.
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1012
Enunciado: Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.

Entrada: O arquivo de entrada contém três valores com um dígito após o ponto decimal.

Saída: O arquivo de saída deverá conter 5 linhas de dados. Cada linha corresponde a uma das áreas descritas acima, sempre com mensagem correspondente e um espaço entre os dois pontos e o valor. O valor calculado deve ser apresentado com 3 dígitos após o ponto decimal.
__________________________________________________________________________________________________________________________________________________

Input Examples             Output Examples
    3.0 4.0 5.2            TRIANGULO: 7.800
                           CIRCULO: 84.949
                           TRAPEZIO: 18.200
                           QUADRADO: 16.000
                           RETANGULO: 12.000
__________________________________________________
    12.7 10.4 15.2         TRIANGULO: 96.520
                           CIRCULO: 725.833
                           TRAPEZIO: 175.560
                           QUADRADO: 108.160
                           RETANGULO: 132.080
*/

#include <stdio.h>

int main(void) {
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    printf("TRIANGULO: %.3lf\n", (a * c) / 2);
    printf("CIRCULO: %.3lf\n", (c * c) * 3.14159);
    printf("TRAPEZIO: %.3lf\n", ((a + b) * c) / 2);
    printf("QUADRADO: %.3lf\n", (b * b));
    printf("RETANGULO: %.3lf\n", (a * b));

    return 0;
}