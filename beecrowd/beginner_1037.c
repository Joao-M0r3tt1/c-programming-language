/*
Information: 
    - beecrowd | 1037 - Interval
    - Adapted by Neilor Tonin, URI Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1037
Statement: You must make a program that read a float-point number and print a message saying in which of following intervals the number belongs: [0,25] (25,50], (50,75], (75,100]. If the read number is less than zero or greather than 100, the program must print the message “Fora de intervalo” that means "Out of Interval".

The symbol '(' represents greather than. For example:
[0,25] indicates numbers between 0 and 25.0000, including both.
(25,50] indicates numbers greather than 25 (25.00001) up to 50.0000000.

Input: The input file contains a floating-point number.

Output: The output must be a message like following example.
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1037
Enunciado: Você deve fazer um programa que leia um número de ponto flutuante e imprima uma mensagem dizendo a qual dos seguintes intervalos o número pertence: [0,25] (25,50], (50,75], (75,100]. Se a leitura número for menor que zero ou maior que 100, o programa deverá imprimir a mensagem “Fora de intervalo” que significa “Fora de Intervalo”.

O símbolo '(' representa maior que. Por exemplo:
[0,25] indica números entre 0 e 25,0000, incluindo ambos.
(25,50] indica números maiores que 25 (25,00001) até 50,0000000.

Entrada: O arquivo de entrada contém um número de ponto flutuante.

Saída: A saída deve ser uma mensagem como o exemplo a seguir.
*/

#include <stdio.h>

int main(void) {
    double number;
    char interval[][9] = {"[0,25]", "(25,50]", "(50,75]", "(75,100]"};

    scanf("%lf", &number);

    if(number < 0 || number > 100) puts("Fora de intervalo");
    else if(number >= 0 && number <= 25) printf("Intervalo %s\n", interval[0]);
    else if(number > 25 && number <= 50) printf("Intervalo %s\n", interval[1]);
    else if(number > 50 && number <= 75) printf("Intervalo %s\n", interval[2]);
    else printf("Intervalo %s\n", interval[3]);

    return 0;
}