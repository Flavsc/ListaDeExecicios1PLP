// Fazer um programa que leia um caracter do teclado com a função scanf e mostre o seu código ASCII
// correspondente. Refaça o programa usando para a leitura do teclado as funções getch, getche e getchar.

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main() 
{
    setlocale(LC_ALL, "");
    char c;
    printf("Digite um caractere para ser transformado em ASCII:\n");
    scanf("%c", &c);
    printf("O código ASCII de '%c' é: %d\n", c, c);
    return 0;
}

// Segunda parte do Ex abaixo.

// VSCode Tip: (CTRL + ;) para tirar os comentarios das linhas de código.

// int main()
// {
//     char c;
//     // getch()
//     printf("Digite um caractere para ser transformado em ASCII:\n");
//     c = getch();
//     printf("\nO código ASCII de '%c' é: %d\n", c, c);

//     // getche()
//     printf("Digite um caractere para ser transformado em ASCII:\n");
//     c = getche();
//     printf("\nO código ASCII de '%c' é: %d\n", c, c);

//     // getchar()
//     printf("Digite um caractere para ser transformado em ASCII:\n");
//     c = getchar();
//     printf("\nO código ASCII de '%c' é: %d\n", c, c);

//     return 0;
// }