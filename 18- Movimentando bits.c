#include <stdio.h>
#include <locale.h>

/*
	18) Elabore um programa que leia dois números inteiros e exiba o deslocamento, à 
	esquerda e à direita, do primeiro número pelo segundo.
*/

int main(){
	
    int numeroUm, numeroDois, direita, esquerda;
    setlocale(LC_ALL,"");
    
    printf("Insira um número: ");
    scanf("%d",&numeroUm);
    printf("Quantos bit deseja mover: ");
    scanf("%d",&numeroDois);
    
    esquerda = numeroUm << numeroDois;
    direita = numeroUm >> numeroDois;
    
	printf("\n%d << %d = %d\n",numeroUm,numeroDois,esquerda);
	printf("%d >> %d = %d",numeroUm,numeroDois,direita);
	

    return 0;
}
