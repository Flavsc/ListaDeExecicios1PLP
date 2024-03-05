// 1. Usando apenas um comando printf fazer um programa que imprima os valores de vari�veis representando a
// popula��o de um pa�s, o peso de uma pessoa e o s�mbolo do oxig�nio.

#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "");
	float peso = 85.2;
	int pop = 2000000;
	char simb = 'O';

	printf("A população do pais é: %d pessoas. \nO peso de uma pessoa é: %.2f \n e o simbolo do oxigênio é: %c", pop, peso, simb);
	return 0;
}
