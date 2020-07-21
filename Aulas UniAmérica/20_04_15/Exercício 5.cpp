#include <stdio.h>
#include <stdlib.h>

/*
PRINTANDO VARIÁVEIS
%d ou %i --> int
%f --> float ou double
%c ou %s --> char
*/

/*
As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e R$
1,00 se forem compradas pelo menos 12. Escreva um programa que leia o
número de maçãs compradas, calcule e escreva o custo total da compra.
*/

int main () {
	float quant;
	
	printf ("Digite quantas macas voce comprou: \n");
	scanf ("%f", &quant);
	
	if(quant<12){
		quant = quant*1.3;
		printf("Preco: R$ %.2f",quant);
	}else{
		quant = quant*1;
		printf("Preco: R$ %.2f",quant);
	}

return 0;
}

