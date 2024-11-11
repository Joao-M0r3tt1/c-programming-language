/*
Information: 
    - beecrowd | 1045 - Triangle Types
    - Adapted by Neilor Tonin, URI Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1045
Statement: Read 3 double numbers (A, B and C) representing the sides of a triangle and arrange them in decreasing order, so that the side A is the biggest of the three sides. Next, determine the type of triangle that they can make, based on the following cases always writing an appropriate message:

- if A ≥ B + C, write the message: NAO FORMA TRIANGULO
- if A² = B² + C², write the message: TRIANGULO RETANGULO
- if A² > B² + C², write the message: TRIANGULO OBTUSANGULO
- if A² < B² + C², write the message: TRIANGULO ACUTANGULO
- if the three sides are the same size, write the message: TRIANGULO EQUILATERO
- if only two sides are the same and the third one is different, write the message: TRIANGULO ISOSCELES

Input: The input contains three double numbers, A (0 < A) , B (0 < B) and C (0 < C).

Output: Print all the classifications of the triangle presented in the input.
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1045
Enunciado: Leia 3 números duplos (A, B e C) que representam os lados de um triângulo e organize-os em ordem decrescente, de modo que o lado A seja o maior dos três lados. A seguir, determine o tipo de triângulo que eles podem fazer, com base nos seguintes casos, sempre escrevendo uma mensagem apropriada:

- se A ≥ B + C, escreva a mensagem: NAO FORMA TRIANGULO
- se A² = B² + C², escreva a mensagem: TRIANGULO RETANGULO
- se A² > B² + C², escreva a mensagem: TRIANGULO OBTUSANGULO
- se A² < B² + C², escreva a mensagem: TRIANGULO ACUTANGULO
- se os três lados forem do mesmo tamanho, escreva a mensagem: TRIANGULO EQUILATERO
- se apenas dois lados forem iguais e o terceiro for diferente, escreva a mensagem: TRIANGULO ISOSCELES

Entrada: A entrada contém três números duplos, A (0 <A), B (0 <B) e C (0 <C).

Saída: Imprima todas as classificações do triângulo apresentadas na entrada.
*/

#include <stdio.h>
#define SIZE 3

void triangleTypes(double v[]) {
    if(v[0] >= (v[1] + v[2])) puts("NAO FORMA TRIANGULO");
    else {
        if((v[0] * v[0]) == ((v[1] * v[1]) + (v[2] * v[2]))) puts("TRIANGULO RETANGULO");
        if((v[0] * v[0]) > ((v[1] * v[1]) + (v[2] * v[2]))) puts("TRIANGULO OBTUSANGULO");
        if((v[0] * v[0]) < ((v[1] * v[1]) + (v[2] * v[2]))) puts("TRIANGULO ACUTANGULO");
        if(v[0] == v[1] && v[0] == v[2]) puts("TRIANGULO EQUILATERO");
        if((v[0] == v[1] && v[0] != v[2]) || (v[0] == v[2] && v[0] != v[1]) || (v[1] == v[2] && v[1] != v[0])) puts("TRIANGULO ISOSCELES");
    }
}

int main(void) {
    double sidesVector[SIZE];   

    for(int i = 0; i < SIZE; i++)
        scanf("%lf", &sidesVector[i]);

    for(int i = 1; i <= SIZE - 1; i++)
        for(int j = 0; j < SIZE - i; j++)
            if(sidesVector[j] < sidesVector[j + 1]) {
                double aux = sidesVector[j];
                sidesVector[j] = sidesVector[j + 1];
                sidesVector[j + 1] = aux; 
            }

    triangleTypes(sidesVector);

    return 0;
}