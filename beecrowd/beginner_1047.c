/*
Information: 
    - beecrowd | 1047 - Game Time with Minutes
    - Adapted by Neilor Tonin, URI Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1047
Statement: Read the start time and end time of a game, in hours and minutes (initial hour, initial minute, final hour, final minute). Then print the duration of the game, knowing that the game can begin in a day and finish in another day,
Obs.: With a maximum game time of 24 hours and the minimum game time of 1 minute.

Input: Four integer numbers representing the start and end time of the game.

Output: Print the duration of the game in hours and minutes, in this format: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” . Which means: the game lasted XXX hour(s) and YYY minutes.
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1047
Enunciado: Leia o horário de início e término de um jogo, em horas e minutos (hora inicial, minuto inicial, hora final, minuto final). Depois imprima a duração do jogo, sabendo que o jogo pode começar em um dia e terminar em outro dia,
Obs.: Com tempo máximo de jogo de 24 horas e tempo mínimo de jogo de 1 minuto.

Entrada: Quatro números inteiros representando o horário de início e término do jogo.

Saída: Imprima a duração do jogo em horas e minutos, neste formato: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” . O que significa: o jogo durou XXX hora(s) e YYY minutos.
*/

#include <stdio.h>

int main(void) {
    int initialHour, initialMinute, finalHour, finalMinute, hourTotal, minuteTotal;

    scanf("%d %d %d %d", &initialHour, &initialMinute, &finalHour, &finalMinute);

    initialMinute = initialHour * 60 + initialMinute;
    finalMinute = finalHour * 60 + finalMinute;
    minuteTotal = finalMinute - initialMinute;

    if(finalMinute <= initialMinute){
        minuteTotal += (24 * 60);
    }

    hourTotal = minuteTotal / 60;
    minuteTotal %= 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hourTotal, minuteTotal);

    return 0;
}