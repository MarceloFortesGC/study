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
Escreva um programa que leia as medidas dos lados de um tri�ngulo e escreva
se ele � Equil�tero, Is�sceles ou Escaleno. Sendo que: - Tri�ngulo Equil�tero:
possui os 3 lados iguais. - Tri�ngulo Is�scele: possui 2 lados iguais. - Tri�ngulo
Escaleno: possui 3 lados diferentes.
*/

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	float lado1;
	float lado2;
	float lado3;
	
	printf("Digite a primeira medida do tri�ngulo: ");
	scanf("%f", &lado1);
	printf("Digite a segunda medida do tri�ngulo: ");
	scanf("%f", &lado2);
	printf("Digite a terceira medida do tri�ngulo: ");
	scanf("%f", &lado3);
	
	if (lado1 == lado2 && lado1 == lado2 && lado1==lado3){
		printf("Triangulo Equilatero");
	}else if (lado1 == lado2 || lado1 == lado3 || lado3==lado2){
		printf("Triangulo Isoscele");
	}else{
		printf("Triangulo Escaleno");
	}

return 0;
}

