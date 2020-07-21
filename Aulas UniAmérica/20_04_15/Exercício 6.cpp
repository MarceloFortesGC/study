#include <stdio.h>
#include <stdlib.h>

/*
PRINTANDO VARIÁVEIS
%d ou %i --> int
%f --> float ou double
%c ou %s --> char
*/

/*
Ler 3 valores (considere que não serão informados valores iguais) e escrever o
maior deles.
*/

int main () {
	float n1;
	float n2;
	float n3;
	
	printf ("Digite numeros 1: \n");
	scanf ("%f", &n1);
	printf ("Digite numero 2: \n");
	scanf ("%f", &n2);
	printf ("Digite numero 3: \n");
	scanf ("%f", &n3);
	
	if (n1>n2 && n1>n3) {
		printf("O maior número é: %.2f", n1);
	}else if (n2>n1 && n2>n3){
		printf("O maior numero e: %.2f", n2);
	}else{
		printf("O maior número é: %.2f", n3);
	}
	
return 0;
}

