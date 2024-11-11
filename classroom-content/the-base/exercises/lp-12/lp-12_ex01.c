/*
en-US: EXERCISE_01.C - Exercise 01. Histogram
- Statement: Command line arguments are always passed as Strings, even when they are numeric. Using the atoi() function, declared in stdlib.h, which converts a string into an integer, create the program lp-12_ex01.exe so that it works as shown below

c:\>lp-12_ex01 3 5 2 ↵
***
*****
**
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_01.C - Exercicio 01. Histograma
- Enunciado: Argumentos da linha de comando sempre são passados como Cadeias, mesmo quando são numéricos. Usando a função atoi(), declarada em stdlib.h, que converte uma cadeia em inteiro, crie o programa lp-12_ex01.exe para que ele funcione como exemplificado a seguir

c:\>lp-12_ex01 3 5 2  ↵
***
*****
**
_____________________________________________________________________________________________________________________

Obs.: Executable 'lp-12_ex01.exe' in the output folder
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int stringOfIntegers[3];
    
    for(int i = 1; i < argc; i++) {
        stringOfIntegers[i - 1] = atoi(argv[i]);

        for(int j = 0; j < stringOfIntegers[i - 1]; j++) printf("*");
        puts("");
    }

    return 0;
}