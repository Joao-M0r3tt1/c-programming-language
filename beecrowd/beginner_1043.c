/*
Information: 
    - beecrowd | 1043 - Triangle
    - Adapted by Neilor Tonin, URI Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1043
Statement: Read three-sided floating values (A, B and C) and verify if is possible to make a triangle with them. If it is possible, calculate the perimeter of the triangle and print the message:

Perimetro = XX.X
If it is not possible, calculate the area of the trapezium which basis A and B and C as height, and print the message:
Area = XX.X

Input: The input file has tree floating point numbers.

Output: Print the result with one digit after the decimal point.
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1043
Enunciado: Leia valores flutuantes de três lados (A, B e C) e verifique se é possível fazer um triângulo com eles. Se for possível, calcule o perímetro do triângulo e imprima a mensagem:

Perímetro = XX,X
Caso não seja possível, calcule a área do trapézio que tem como altura C e lados A e B, e imprima a mensagem:
Área = XX,X

Entrada: O arquivo de entrada possui números de ponto flutuante em árvore.

Saída: Imprima o resultado com um dígito após a vírgula decimal.
*/

#include <stdio.h>

int main(void) {
    double pointA, pointB, pointC;

    scanf("%lf %lf %lf", &pointA, &pointB, &pointC);

    if((pointA + pointB) > pointC && (pointB + pointC) > pointA && (pointA + pointC) > pointB)
        printf("Perimetro = %.1lf\n", (pointA + pointB + pointC));
    else printf("Area = %.1lf\n", ((pointA + pointB) * pointC) / 2);

    return 0;
}