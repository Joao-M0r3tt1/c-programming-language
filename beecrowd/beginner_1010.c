/*
Information: 
    - beecrowd | 1010 - Simple Calculation
    - Adapted by Neilor Tonin, URI Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1010
Statement: In this problem, you must read the code of a piece 1, the number of pieces 1, the unit value of each piece 1, the code of a piece 2, the number of pieces 2 and the unit value of each piece 2. After , calculate and show the amount to be paid.

Input: The input file contains two lines of data. In each line there will be 3 values, respectively two integers and a value with 2 decimal places.

Output: The output should be a message as per the example provided below, remembering to leave a space after the colon and a space after the "R$". The value must be presented with 2 spaces after the point.
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1010
Enunciado: Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.

Entrada: O arquivo de entrada contém duas linhas de dados. Em cada linha haverá 3 valores, respectivamente dois inteiros e um valor com 2 casas decimais.

Saída: A saída deverá ser uma mensagem conforme o exemplo fornecido abaixo, lembrando de deixar um espaço após os dois pontos e um espaço após o "R$". O valor deverá ser apresentado com 2 casas após o ponto.
__________________________________________________________________________________________________________________________________________________

Input Examples                   Output Examples
    12 1 5.30                   VALOR A PAGAR: R$ 15.50
    16 2 5.10
__________________________________________________
    13 2 15.30                  VALOR A PAGAR: R$ 51.40
    161 4 5.20
__________________________________________________    
    1 1 15.10                   VALOR A PAGAR: R$ 30.20
    2 1 15.10
*/

#include <stdio.h>

int main(void) {
    int pieceCode1, numberPiece1, pieceCode2, numberPiece2; 
    double unitValuePiece1, unitValuePiece2;

    scanf("%d %d %lf", &pieceCode1, &numberPiece1, &unitValuePiece1);
    scanf("%d %d %lf", &pieceCode2, &numberPiece2, &unitValuePiece2);

    printf("VALOR A PAGAR: R$ %.2lf\n", ((numberPiece1 * unitValuePiece1) + (numberPiece2 * unitValuePiece2)));

    return 0;
}