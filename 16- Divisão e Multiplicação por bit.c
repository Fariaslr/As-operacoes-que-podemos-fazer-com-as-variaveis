#include <stdio.h>
#include <locale.h>
#define exp 1

/*
	16) Escreva um programa que leia um número inteiro e mostre a multiplicação e a 
	divisão desse número por dois (utilize os operadores de deslocamento de bits).
*/

int main(){

	int numero, divisor, multiplicador;
	setlocale(LC_ALL,"");
	
	printf("Digite um valor para ser multiplicado por bits: ");
	scanf("%d",&numero);
	
	divisor = numero >> exp;
	multiplicador =numero << exp;
	
	printf("%d >> %d = %d (Divisão, um bit à direita)\n",numero, exp, divisor);
	printf("%d << %d = %d (Multiplicação, bit à esquerda)\n",numero, exp,multiplicador);
 
 return 0;
}
