/*
Information: 
    - beecrowd | 1014 - Consumption
    - Adapted by Neilor Tonin, URI Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1014
Statement: Calculate the average consumption of a car by providing the total distance traveled (in km) and the total fuel used (in liters).

Input: The input file contains two values: an integer value X representing the total distance traveled (in km), and a real value Y representing the total fuel spent, with a digit after the decimal point.

Output: Present the value that represents the average consumption of the car with 3 places after the decimal point, followed by the message "km/l".
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1014
Enunciado: Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em Km) e o total de combustível gasto (em litros).

Entrada: O arquivo de entrada contém dois valores: um valor inteiro X representando a distância total percorrida (em Km), e um valor real Y representando o total de combustível gasto, com um dígito após o ponto decimal.

Saída: Apresente o valor que representa o consumo médio do automóvel com 3 casas após a vírgula, seguido da mensagem "km/l".
__________________________________________________________________________________________________________________________________________________

Input Examples             Output Examples
    500                     14.286 km/l
    35.0
__________________________________________________
    2254                    18.119 km/l
    124.4
__________________________________________________
    4554                    9.802 km/l
    464.6
*/

#include <stdio.h>

int main(void) {
    int totalDistance;
    double totalFuel;

    scanf("%d", &totalDistance);
    scanf("%lf", &totalFuel);

    printf("%.3lf km/l\n", (totalDistance / totalFuel));

    return 0;
}