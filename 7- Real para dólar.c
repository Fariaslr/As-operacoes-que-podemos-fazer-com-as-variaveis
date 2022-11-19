#include <stdio.h>
#include <locale.h>//biblioteca de acentos

/*
	7) Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, 
	imprima o valor correspondente em dólares.
*/

int main(){
	
	float real, dolar, cotacaoDolar;
	setlocale(LC_ALL,"");//Permite caracteres especiais
	
	printf("Valor em real: ");
	scanf("%f",&real);
	
	printf("Cotação atual do dólar: ");
	scanf("%f",&cotacaoDolar);
	
	dolar = real / cotacaoDolar;
	
	printf("R$%.2f -> US$ %.2f",real, dolar);    
	
    return 0;
}
