#include <stdio.h>
#include <stdlib.h>

/*
PRINTANDO VARI�VEIS
%d ou %i --> int
%f --> float ou double
%c ou %s --> char
*/

/*
Ler dois valores e imprimir uma das tr�s mensagens a seguir: �N�meros
iguais�, caso os n�meros sejam iguais �Primeiro � maior�, caso o primeiro seja
maior que o segundo; �Segundo maior�, caso o segundo seja maior que o
primeiro.
*/

int main () {
	float n1;
	float n2;
	float n3;
	
	printf("Escreva o valor n1: ");
	scanf("%f", &n1);
	printf("Escreva o valor n2: ");
	scanf("%f", &n2);
	
	if(n1>n2){
		printf("Primeiro maior");
	}else if(n2>1){
		printf("Segundo maior");
	}else{
		printf("Numeros Iguais");
	}

return 0;
}

