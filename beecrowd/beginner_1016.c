/*
Information: 
    - beecrowd | 1016 - Distance
    - Adapted by Neilor Tonin, URI Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1016
Statement: Two cars (X and Y) leave in the same direction. Car X leaves with a constant speed of 60 km/h and car Y leaves with a constant speed of 90 km/h.
In one hour (60 minutes) car Y can move 30 kilometers away from car X, that is, it can move one kilometer away every 2 minutes.
Read the distance (in km) and calculate how long it takes (in minutes) for car Y to travel that distance from the other car.

Input: The input file contains an integer.

Output: Print the required time followed by the message "minutes".
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1016
Enunciado: Dois carros (X e Y) partem em uma mesma direção. O carro X sai com velocidade constante de 60 Km/h e o carro Y sai com velocidade constante de 90 Km/h.
Em uma hora (60 minutos) o carro Y consegue se distanciar 30 quilômetros do carro X, ou seja, consegue se afastar um quilômetro a cada 2 minutos.
Leia a distância (em Km) e calcule quanto tempo leva (em minutos) para o carro Y tomar essa distância do outro carro.

Entrada: O arquivo de entrada contém um número inteiro.

Saída: Imprima o tempo necessário seguido da mensagem "minutos".
__________________________________________________________________________________________________________________________________________________

Input Examples             Output Examples
    30                       60 minutos
__________________________________________________
    110                      220 minutos
__________________________________________________
    7                        14 minutos
*/

#include <stdio.h>

int main(void) {
    int distance;

    scanf("%d", &distance);

    printf("%d minutos\n", ((distance * 60) / 30)); // or (distance * 2)
    
    return 0;
}