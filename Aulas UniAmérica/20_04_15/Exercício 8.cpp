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
Escreva um programa que leia as medidas dos lados de um triângulo e escreva
se ele é Equilátero, Isósceles ou Escaleno. Sendo que: - Triângulo Equilátero:
possui os 3 lados iguais. - Triângulo Isóscele: possui 2 lados iguais. - Triângulo
Escaleno: possui 3 lados diferentes.
*/

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	float lado1;
	float lado2;
	float lado3;
	
	printf("Digite a primeira medida do triângulo: ");
	scanf("%f", &lado1);
	printf("Digite a segunda medida do triângulo: ");
	scanf("%f", &lado2);
	printf("Digite a terceira medida do triângulo: ");
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

