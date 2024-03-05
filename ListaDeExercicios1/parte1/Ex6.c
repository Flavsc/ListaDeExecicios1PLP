// 6. Fazer um programa que leia do teclado um valor inteiro representando uma temperatura em graus celsius e
// converta-a para uma temperatura em farenheit. (fórmula: c= 5/9 (f-32)) .

#include<stdio.h>

int main ()
{
    int c;
    printf("Coloque um numero inteiro que represente uma temperatura em graus celsius: \n");
    scanf("%d", &c);
    float f = c * 1.8 + 32;
    printf("%d Celsius = %.2f Farenheit. \n", c, f);
    return 0;
}