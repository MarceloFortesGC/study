#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
PRINTANDO VARIÁVEIS
%d ou %i --> int
%f --> float ou double
%c ou %s --> char
*/

/*
Ler 3 valores (A, B e C) representando as medidas dos lados de um
triângulo e escrever se formam ou não um triângulo. OBS: para formar um
triângulo, o valor de cada lado deve ser menor que a soma dos outros 2 lados.
*/

int main () {

	setlocale(LC_ALL, "Portuguese");
	
	float a,b,c;
	bool i;
	
	printf("Escreva o valor de A: ");
	scanf("%f", &a);
	printf("Escreva o valor de B: ");
	scanf("%f", &b);
	printf("Escreva o valor de C: ");
	scanf("%f", &c);
	
	i = (a<b+c && b<a+c && c<a+b);  
	
	printf("%s", (i == 1 ? "É um triângulo" : "Não é um triângulo"));

return 0;
}

