/*
Information: 
    - beecrowd | 1041 - Coordinates of a Point
    - Adapted by Neilor Tonin, URI Brasil - Timelimit: 1
__________________________________________________________________________________________________________________________________________________

en-US: beecrowd | 1041
Statement: Write an algorithm that reads two floating values (x and y), which should represent the coordinates of a point in a plane. Next, determine which quadrant the point belongs, or if you are at one of the Cartesian axes or the origin (x = y = 0).
          Y
          |
    Q2    |    Q1 
__________|__________ X
          |
    Q3    |    Q4 
          |
    
If the point is at the origin, write the message "Origem". If the point is at X axis write "Eixo X", else if the point is at Y axis write "Eixo Y".

Input: The input contains the coordinates of a point.

Output: The output should display the quadrant in which the point is.
__________________________________________________________________________________________________________________________________________________

pt-BR: beecrowd | 1041
Enunciado: Escreva um algoritmo que leia dois valores flutuantes (x e y), que devem representar as coordenadas de um ponto em um plano. A seguir, determine a qual quadrante o ponto pertence, ou se você está em um dos eixos cartesianos ou na origem (x = y = 0).
    
Se o ponto estiver na origem, escreva a mensagem “Origem”. Se o ponto estiver no eixo X escreva "Eixo X", caso contrário se o ponto estiver no eixo Y escreva "Eixo Y".

Entrada: A entrada contém as coordenadas de um ponto.

Saída: A saída deve exibir o quadrante em que o ponto está.
*/

#include <stdio.h>

int main(void) {
    double x, y;

    scanf("%lf %lf", &x, &y);

    if(x == 0 && y == 0) puts("Origem");
    else if(y == 0) puts("Eixo X");
    else if(x == 0) puts("Eixo Y");
    else if(x > 0 && y > 0) puts("Q1");
    else if(x < 0 && y > 0) puts("Q2");
    else if(x < 0 && y < 0) puts("Q3");
    else puts("Q4");

    return 0;
}