#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	14) Faça um programa que converta uma letra maiúscula em letra minúscula. Use a 
	tabela ASCII para isso.
*/

int main(){
	
    char caracter[2];
    setlocale(LC_ALL,"");
    
    printf("Digite uma letra da alfabeto maiúscula: "); 
    fgets(caracter,2,stdin);
    
    strlwr(caracter);
    
    printf("Minuscúla: %s \n",caracter);    
    
    return 0;
}
