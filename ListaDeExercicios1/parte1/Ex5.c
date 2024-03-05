// 5. Fazer um programa que leia dois valores do tipo float do teclado e mostre a sua soma, divisão, multiplicação e
// média aritmética real e inteira.

#include<stdio.h>

int main()
{
    float x, y;
    printf("Atribua um valor para x e para y: \n");
    scanf("%f %f", &x, &y);
    printf("x = %.2f \ny = %.2f \nx + y = %.2f \nx - y = %.2f \nx / y = %.2f \nx . y = %.2f \nmedia = %.2f \n", x, y, x + y, x - y, x/y, x*y, (x + y) / 2);
    return 0;
}
