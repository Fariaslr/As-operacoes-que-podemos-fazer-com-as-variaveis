#include <stdio.h>
#include <locale.h>//biblioteca de acento

/*
	2) Faça um programa que leia um número real e imprima a quinta parte desse número.
*/

int main(){
	
    float numero, quintaparte;
    setlocale(LC_ALL,"");//Permite caracteres especiais
   
    printf("Imprima um número real: ");
    scanf("%f",&numero);
    
    quintaparte =  numero *  1/5;
    
    printf("A quinta parte de %.2f é %.2f\n",numero, quintaparte);
    
    return 0;
}
