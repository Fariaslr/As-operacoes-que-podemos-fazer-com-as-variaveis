#include <stdio.h>
#include <locale.h>
#define exp 1

/*
	16) Escreva um programa que leia um n�mero inteiro e mostre a multiplica��o e a 
	divis�o desse n�mero por dois (utilize os operadores de deslocamento de bits).
*/

int main(){

	int numero, divisor, multiplicador;
	setlocale(LC_ALL,"");
	
	printf("Digite um valor para ser multiplicado por bits: ");
	scanf("%d",&numero);
	
	divisor = numero >> exp;
	multiplicador =numero << exp;
	
	printf("%d >> %d = %d (Divis�o, um bit � direita)\n",numero, exp, divisor);
	printf("%d << %d = %d (Multiplica��o, bit � esquerda)\n",numero, exp,multiplicador);
 
 return 0;
}
