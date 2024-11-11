/*
Information: 
    - beecrowd | 1046 - Game Time
    - Adapted by Neilor Tonin, URI Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1046
Statement: Read the start time and end time of a game, in hours. Then calculate the duration of the game, knowing that the game can begin in a day and finish in another day, with a maximum duration of 24 hours. The message must be printed in portuguese “O JOGO DUROU X HORA(S)” that means “THE GAME LASTED X HOUR(S)”

Input: Two integer numbers representing the start and end time of a game.

Output: Print the duration of the game as in the sample output.
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1046
Enunciado: Leia o horário de início e término de um jogo, em horas. Em seguida, calcule a duração do jogo, sabendo que o jogo pode começar em um dia e terminar em outro dia, com duração máxima de 24 horas. A mensagem deverá ser impressa em português “O JOGO DUROU X HORA(S)” que significa “O JOGO DUROU X HORA(S)”

Entrada: Dois números inteiros que representam o horário de início e término de um jogo.

Saída: Imprima a duração do jogo como no exemplo de saída.
*/

#include <stdio.h>

int main(void) {
    int startTime, endTime;

    scanf("%d %d", &startTime, &endTime);

    if(startTime == endTime) puts("O JOGO DUROU 24 HORA(S)");
    else if(startTime > endTime) printf("O JOGO DUROU %d HORA(S)\n", ((24 - startTime) + endTime));
    else printf("O JOGO DUROU %d HORA(S)\n", (endTime - startTime));

    return 0;
}