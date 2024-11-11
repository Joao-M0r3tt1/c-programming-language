/*
en-US: EXERCISE_02.C - Exercise 02. Simple calculator
- Statement: The atof() function, declared in stdlib.h, converts a string to real. Using this function, create the lp-12_ex02.exe program so that it works as shown below:

c:\>lp-12_ex02 1.2 + 7.3 ↵
8.5

The program must be able to calculate the value of expressions composed of just two operands and an arithmetic operator (+, -, * or /), in addition to reporting a syntax error in the call
_____________________________________________________________________________________________________________________

pt-BR: EXERCICIO_02.C - Exercicio 02. Calculadora simples
- Enunciado: A função atof(), declarada em stdlib.h, converte uma cadeia em real. Usando essa função, crie o programa lp-12_ex02.exe para que ele funcione como exemplificado a seguir:

c:\>lp-12_ex02 1.2 + 7.3  ↵
8.5

O programa deve ser capaz de calcular o valor de expressões compostas por apenas dois operandos e um operador aritmético (+, -, * ou /), além de informar erro de sintaxe da chamada
_____________________________________________________________________________________________________________________

Obs.: Executable 'lp-12_ex02.exe' in the output folder
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double stringOfFloating[2];
    int count;

    if(argc != 4) { 
        printf("You passed additional arguments to the function, you only need to pass three arguments, namely: 1st operand, operator (+ or - or * or /), 2nd operand\n");
        exit(EXIT_FAILURE);
    } else {
        for(int i = 1; i < argc; i++) {
            if(i == 1 || i == 3) stringOfFloating[count++] = atof(argv[i]);
        }

        switch(*argv[2]) {
        case '+':
            printf("%.2lf\n", (stringOfFloating[0] + stringOfFloating[1]));
            break;
        case '-':
            printf("%.2lf\n", (stringOfFloating[0] - stringOfFloating[1]));
            break;
        case '*':
            printf("%.2lf\n", (stringOfFloating[0] * stringOfFloating[1]));
            break;
        case '/':
            printf("%.2lf\n", (stringOfFloating[0] / stringOfFloating[1]));
            break;
        
        default:
            printf("You passed an invalid arithmetic operator as a parameter. Valid are: (+, -, *, /)");
            break;
        }
    }

    return 0;
}