#include <stdio.h>
#include <stdlib.h>

/*
PRINTANDO VARI�VEIS
%d ou %i --> int
%f --> float ou double
%c ou %s --> char
*/

/*
Ler o ano atual e o ano de nascimento de uma pessoa. Escrever uma
mensagem que diga se ela poder� ou n�o votar este ano (n�o � necess�rio
considerar o m�s em que a pessoa nasceu).
*/
int main () {
	int ano1;
	int ano2;
	int idade;
	
	printf ("Digite o ano que voce nasceu: \n");
	scanf ("%i", &ano1);
	printf ("Digite o ano atual: \n");
	scanf ("%i", &ano2);
	
	idade = ano2-ano1;
	printf("Idade: %d \n", idade);
	
	if (idade<18) {
		printf ("Nao pode votar \n");
	} else {
		printf ("Pode votar!");
	}
	
	
	return 0;
}
