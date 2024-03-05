// 2. Fazer um programa que imprima, com apenas um comando printf, as frases abaixo exatamente como est�o.
// Todos os valores num�ricos devem estar armazenados dentro de vari�veis.
// a) "Vendemos 50% a mais que no ano passado."
// b) Em 31 / 12 / 2000 nosso capital era de R$ 50.000.000, 00.
// c) A barra utilizada para pastas seria '/' ou '\'?

#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "");
	int porcentagem = 50, dia=31, mes=12, ano=2000;
	float valor = 50000000;
	printf("\"Vendemos %d%% a mais que no ano passado\" \nEm %d / %d / %d nosso capital era de R$ %.2f. \n A barra utilizada para pastas seria '/' ou '\\'?", porcentagem, dia, mes, ano, valor);
	// Professor, quando fui formatar o numero 50.000.000, 00 usando o comando %'.2f junto com o locale.h meu compilador não aceitou
	// então deixei o %2.f da maneira que funcionava aqui no meu compilador, mas possivelmente em outro compilador o código a seguir
	// funcione: 
	// printf("\"Vendemos %d%% a mais que no ano passado\" \nEm %d / %d / %d nosso capital era de R$ %'.2f. \n A barra utilizada para pastas seria '/' ou '\\'?", porcentagem, dia, mes, ano, valor);
	// a ' na formatação de floats deveria ser o suficiente para fazer o texto de saida ficar igual com os textos que você pediu.
	return 0;
}