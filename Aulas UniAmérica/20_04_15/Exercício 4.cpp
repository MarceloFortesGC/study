#include <stdio.h>
#include <stdlib.h>

/*
PRINTANDO VARI�VEIS
%d ou %i --> int
%f --> float ou double
%c ou %s --> char
*/

/*
Ler dois valores (considere que n�o ser�o lidos valores iguais) e escrev� los
em ordem crescente
*/

int main () {
	int n1;
	int n2;
	
	printf ("Escreva o primeiro numero: \n");
	scanf ("%i", &n1);
	printf ("Escreva o segundo numero: \n");
	scanf ("%i", &n2);
	
	printf ("Ordem Crescente: \n");
	
	if (n1>n2){
		printf ("%i		%i", n1, n2);
	}else if (n2>n1){
		printf ("%i		%i", n2, n1);
	}else{
		printf ("Valores Iguais!");
	}


return 0;
}

