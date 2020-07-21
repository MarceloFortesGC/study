#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
PRINTANDO VARI�VEIS
%d ou %i --> int
%f --> float ou double
%c ou %s --> char
*/

/*
Ler 3 valores (A, B e C) representando as medidas dos lados de um
tri�ngulo e escrever se formam ou n�o um tri�ngulo. OBS: para formar um
tri�ngulo, o valor de cada lado deve ser menor que a soma dos outros 2 lados.
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
	
	printf("%s", (i == 1 ? "� um tri�ngulo" : "N�o � um tri�ngulo"));

return 0;
}

