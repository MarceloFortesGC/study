#include <stdio.h>
#include <stdlib.h>

/*
PRINTANDO VARIÁVEIS
%d ou %i --> int
%f --> float ou double
%c ou %s --> char
*/

/*Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média
final deste aluno. Considerar que a média é ponderada e que o peso das notas
é 2, 3 e 5. Fórmula para o cálculo da média final é
*/

int main () {
	float n1;
	float n2;
	float n3;
	float media;
	
	printf("Entre com a nota 1: \n");
	scanf("%f", &n1);
	printf("Entre com a nota 2: \n");
	scanf("%f", &n2);
	printf("Entre com a nota 3: \n");
	scanf("%f", &n3);
	
	media = n1*0.2 + n2*0.3 + n3*0.5;
	printf ("A media do aluno e: %.2f \n", media);
	printf ("Nota 1 peso 2: %.2f \n", n1);
	printf ("Nota 2 peso 3: %.2f \n", n2);
	printf ("Nota 3 peso 5: %.2f \n", n3);
	
return 0;
}
