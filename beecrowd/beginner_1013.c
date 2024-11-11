/*
Information: 
    - beecrowd | 1013 - The biggest
    - Adapted by Neilor Tonin, beecrowd Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1013
Statement: Write a program that reads three values and displays the largest of the three values read followed by the message “eh the largest”. Use the formula: MajorAB = (a+b+abs(a-b))/2

Note: the formula only calculates the largest between the first two (a and b). A second step is therefore necessary to achieve the expected result.

Input: The input file contains three integer values.

Output: Print the largest of the three values followed by a space and the message "eh the largest".
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1013
Enunciado: Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula: MaiorAB = (a+b+abs(a-b))/2

Obs.: a fórmula apenas calcula o maior entre os dois primeiros (a e b). Um segundo passo, portanto é necessário para chegar no resultado esperado.

Entrada: O arquivo de entrada contém três valores inteiros.

Saída: Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".
__________________________________________________________________________________________________________________________________________________

Input Examples             Output Examples
    7 14 106                106 eh o maior
__________________________________________________
    217 14 6                217 eh o maior
*/

#include <stdio.h>

int absolute(int n) {
    if(n < 0) return -n;
    else return n;
}

int main(void) {
    int a, b, c, biggest;

    scanf("%d %d %d", &a, &b, &c);

    biggest = (a + b + absolute(a - b)) / 2;
    if(biggest == a) biggest = (a + c + absolute(a - c)) / 2;
    else biggest = (b + c + absolute(b - c)) / 2;

    printf("%d eh o maior\n", biggest);

    return 0;
}