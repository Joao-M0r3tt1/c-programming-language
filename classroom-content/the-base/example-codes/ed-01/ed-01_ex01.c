/*
en-US: EXAMPLE_01.C - Example 01. body mass index 
- Statement: A person's body mass index (BMI) is their weight divided by the square of their height. Create a program to calculate a person's BMI
_____________________________________________________________________________________________________________________

pt-BR: EXEMPLO_01.C - Exemplo 01. índice de massa corporal
- Enunciado: o índice de massa corporal (IMC) de uma pessoa é o seu peso dividido pelo quadrado de sua altura. Crie um programa para calcular o IMC de uma pessoa
_____________________________________________________________________________________________________________________

obs: bmi = body mass index | imc = índice de massa corporal
*/

#include <stdio.h>	// standard input and output
#include <math.h>	// mathematical functions

int main(void) {
	// variable declaration
	float weight, height, bmi;	
	
	// commands
	printf("Weight and height? ");
	scanf("%f %f", &weight, &height);
	bmi = weight / pow(height, 2);	// bmi = weight / (height * height);
	printf("BMI = %.2f\n", bmi);

	// return from main function
	return 0;
}