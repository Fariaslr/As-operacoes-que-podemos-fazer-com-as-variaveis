#include <stdio.h>
#include <locale.h>//biblioteca de acento

/*
	3) Faça um programa que leia três valores inteiros e mostre sua soma.
*/

int main(){
	
    int primeiroNumero, segundoNumero, terceiroNumero; 
	int soma;
    setlocale(LC_ALL,"");//Permite caracteres especiais
    
    printf("Digite o primeiro número: ");
    scanf("%d",&primeiroNumero);
    
    printf("Digite o segundo número: ");
    scanf("%d",&segundoNumero);
    
    printf("Digite o terceiro número: ");
    scanf("%d",&terceiroNumero);
    
    soma = primeiroNumero + segundoNumero + terceiroNumero;
    
    printf("\nA soma dos números -> %d",soma);  
    
    return 0;
}
