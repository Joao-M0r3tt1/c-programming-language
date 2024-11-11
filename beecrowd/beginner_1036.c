/*
Information: 
    - beecrowd | 1036 - Bhaskara's Formula
    - Adapted by Neilor Tonin, URI Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1036
Statement: Read 3 floating-point numbers. After, print the roots of bhaskara’s formula. If it's impossible to calculate the roots because a division by zero or a square root of a negative number, presents the message “Impossivel calcular”.

Input: Read 3 floating-point numbers (double) A, B and C.

Output: Print the result with 5 digits after the decimal point or the message if it is impossible to calculate.
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1036
Enunciado: Leia 3 números de ponto flutuante. Depois, imprima as raízes da fórmula de bhaskara. Caso seja impossível calcular as raízes devido à divisão por zero ou raiz quadrada de um número negativo, apresenta a mensagem “Impossível calcular”.

Entrada: Leia 3 números de ponto flutuante (duplos) A, B e C.

Saída: Imprima o resultado com 5 dígitos após a vírgula ou a mensagem se for impossível calcular.
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, delta;

    scanf("%lf %lf %lf", &a, &b, &c);

    delta = ((b * b) - (4 * a * c));
    if(a == 0 || delta < 0) puts("Impossivel calcular");
    else {
        printf("R1 = %.5lf\n", ((-b + sqrt(delta)) / (2 * a)));
        printf("R2 = %.5lf\n", ((-b - sqrt(delta)) / (2 * a)));
    }

    return 0;
}