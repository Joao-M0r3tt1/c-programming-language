/*
Information: 
    - beecrowd | 1017 - Fuel Expense
    - Adapted by Neilor Tonin, URI Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1017
Statement: Joaozinho wants to calculate and show the number of liters of fuel spent on a trip, when using a car that does 12 KM/L. To do this, he would like you to help him through a simple program. To carry out the calculation, you must provide the time spent on the trip (in hours) and the average speed during the trip (in km/h). Thus, you can obtain distance traveled and then calculate how many liters would be needed. Show the value with 3 decimal places after the point.

Input: The input file contains two integers. The first is the time spent on the trip (in hours) and the second is the average speed during the trip (in km/h).

Output: Print the number of liters needed to make the trip, with three digits after the decimal point
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1017
Enunciado: Joaozinho quer calcular e mostrar a quantidade de litros de combustível gastos em uma viagem, ao utilizar um automóvel que faz 12 KM/L. Para isso, ele gostaria que você o auxiliasse através de um simples programa. Para efetuar o cálculo, deve-se fornecer o tempo gasto na viagem (em horas) e a velocidade média durante a mesma (em km/h). Assim, pode-se obter distância percorrida e, em seguida, calcular quantos litros seriam necessários. Mostre o valor com 3 casas decimais após o ponto.

Entrada: O arquivo de entrada contém dois inteiros. O primeiro é o tempo gasto na viagem (em horas) e o segundo é a velocidade média durante a mesma (em km/h).

Saída: Imprima a quantidade de litros necessária para realizar a viagem, com três dígitos após o ponto decimal
__________________________________________________________________________________________________________________________________________________

Input Examples             Output Examples
    10                          70.833
    85
__________________________________________________
    2                           15.333
    92
__________________________________________________
    22                          122.833
    67
*/

#include <stdio.h>

int main(void) {
    int timeOfTravel, averageSpeed;

    scanf("%d", &timeOfTravel);
    scanf("%d", &averageSpeed);

    printf("%.3lf\n", ((timeOfTravel * averageSpeed) / 12.0));
    
    return 0;
}