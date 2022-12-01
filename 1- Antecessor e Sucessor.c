#include <stdio.h>
#include <locale.h>//biblioteca de acentos

/*
	1) Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor.
*/

int main(){
	
    int numero, antecessor, sucessor;
    setlocale(LC_ALL,"");//Permite caracteres especiais
    
    printf("Adicione um número: ");
    scanf("%d",&numero);
    
    antecessor = numero - 1;
    sucessor = numero + 1;
    
    printf("\nNúmero = %d\nAntecessor -> %d\nSucessor -> %d",numero, antecessor, sucessor);

    return 0;

}
