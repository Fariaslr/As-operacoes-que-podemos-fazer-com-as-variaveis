#include <stdio.h>
#include <locale.h>

/*
    15) Faça um programa para ler um número inteiro positivo de três dígitos. Em seguida, calcule e mostre o número formado pelos dígitos invertidos do número lido. 
    Exemplo: 
    Número lido = 123 
    Número gerado = 321
*/

int main(){
    int nmr,c,d,u;
    setlocale(LC_ALL,"");
    printf("Digite um número de 3 dígitos para inverter: ");
    scanf("%d",&nmr);

    if(nmr>99 & nmr<999){
        
		c=nmr/100;
        d=(nmr%100)/10;
        u=(nmr%10);
        
        printf("O número %d invertido é %d%d%d.\n",nmr,u,d,c);
    }
    else printf("Digite somente número de 3 dígitos!\n");

    return 0;
}
