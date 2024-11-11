/*
Information: 
    - beecrowd | 1015 - Distance Between Two Points
    - Adapted by Neilor Tonin, URI Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1015
Statement: Read the four values corresponding to the x and y axes of any two points in the plane, p1(x1,y1) and p2(x2,y2) and calculate the distance between them, showing 4 decimal places after the decimal point, according to the formula:

Distance = √(x2 - x1)² + (y2 - y1)²

Input: The input file contains two lines of data. The first line contains two floating point values: x1 y1 and the second line contains two floating point values x2 y2.

Output: Calculate and print the distance value according to the formula provided, with 4 places after the decimal point.
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1015
Enunciado: Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula:

Distancia = √(x2 - x1)² + (y2 - y1)²

Entrada: O arquivo de entrada contém duas linhas de dados. A primeira linha contém dois valores de ponto flutuante: x1 y1 e a segunda linha contém dois valores de ponto flutuante x2 y2.

Saída: Calcule e imprima o valor da distância segundo a fórmula fornecida, com 4 casas após o ponto decimal.
__________________________________________________________________________________________________________________________________________________

Input Examples             Output Examples
    1.0 7.0                     4.4721
    5.0 9.0
__________________________________________________
    -2.5 0.4                    16.1484
    12.1 7.3
__________________________________________________
    2.5 -0.4                    16.4575
   -12.2 7.0
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    double x1, y1, x2, y2;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    printf("%.4lf\n", sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1))));

    return 0;
}