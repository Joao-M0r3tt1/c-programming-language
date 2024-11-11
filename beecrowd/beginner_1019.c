/*
Information: 
    - beecrowd | 1019 - Time Conversion
    - Adapted by Neilor Tonin, URI Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1019
Statement: Read an integer value, which is the duration in seconds of a given event in a factory, and enter it expressed in the format hours:minutes:seconds.

Input: The input file contains an integer value N.

Output: Print the time read from the input file (seconds), converted to hours:minutes:seconds, as per the example provided.
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1019
Enunciado: Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

Entrada: O arquivo de entrada contém um valor inteiro N.

Saída: Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.
__________________________________________________________________________________________________________________________________________________

Input Examples             Output Examples
    556                         0:9:16
__________________________________________________
     1                          0:0:1
__________________________________________________
    140153                      38:55:53
*/

#include <stdio.h>

int main(void) {
    int n, day, hour, minute;

    scanf("%d", &n);

    day = n / 3600;
    n %= 3600;
    hour = n / 60;
    n %= 60;
    minute = n / 1;
    n %= 1;
    printf("%d:%d:%d\n", day, hour, minute);
    
    return 0;
}