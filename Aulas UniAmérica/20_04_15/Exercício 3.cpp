#include <stdio.h>
#include <stdlib.h>

/*
PRINTANDO VARIÁVEIS
%d ou %i --> int
%f --> float ou double
%c ou %s --> char
*/

/*
Ler dois valores (considere que não serão lidos valores iguais) e escrever o
maior deles.
*/

int main () {
	float n1;
	float n2;
	
	printf ("Digite o valor 1 \n");
	scanf ("%f", &n1);
	printf ("Digite o valor 2 \n");
	scanf ("%f", &n2);
	
	if (n1>n2){
		printf("Valor 1 maior que valor 2: %.2f > %f \n", n1, n2);
	}else if (n2>n1){
		printf("Valor 2 maior que valor 1: %.2f > %f \n", n2, n1);
	}else{
		printf ("Valores iguais! \n");
	}
return 0;
}

