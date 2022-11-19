#include <stdio.h>
#include <locale.h>//biblioteca de acento

/*
	4) Leia quatro valores do tipo float. Calcule e exiba a média aritimética desses valores.
*/

int main(){
	
    float primeiroNumero, segundoNumero, terceiroNumero, quartoNumero, media;
    setlocale(LC_ALL,"");//Permite caracteres especiais
    
    printf("Digite o primeiro valor: ");
    scanf("%f",&primeiroNumero);
    
    printf("Digite o segundo valor: ");
    scanf("%f",&segundoNumero);
    
    printf("Digite o terceiro valor: ");
    scanf("%f",&terceiroNumero);
    
    printf("Digite o quarto valor: ");
    scanf("%f",&quartoNumero);
    
    media = (primeiroNumero+segundoNumero+terceiroNumero+quartoNumero)/4;
    
    printf("A média é de %.1f",media);	
    
    return 0;
}
