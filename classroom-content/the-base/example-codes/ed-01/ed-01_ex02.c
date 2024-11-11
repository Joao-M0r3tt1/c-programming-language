/*
en-US: EXAMPLE_02.C - Example 02. body mass index 
- Statement: A person with a BMI below 18.5 is 'Thin', above 30 is 'Obese' and otherwise 'Normal'. Change the source code of the ed-01_ex01.c example with this information
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_02.C - Exemplo 02. índice de massa corporal
- Enunciado: pessoa com IMC inferior a 18.5 está 'Magra', superior a 30 está 'Obesa' e, caso contrário, está 'Normal'. Altere o código fonte do exemplo ed-01_ex01.c com essas informações
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    float weight, height, bmi;

    printf("Weight and height? ");
    scanf("%f %f", &weight, &height);
    
    bmi = weight / pow(height, 2);
    printf("BMI = %.2f\n", bmi);

    if(bmi < 18.5) puts("Thinness");
    else if(bmi > 30) puts("Obesity");
    else puts("Normal");
    
    return 0;
}