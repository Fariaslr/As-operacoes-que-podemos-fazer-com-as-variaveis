#include <stdio.h>
#include <locale.h>

/*
    15) Fa�a um programa para ler um n�mero inteiro positivo de tr�s d�gitos. Em seguida, calcule e mostre o n�mero formado pelos d�gitos invertidos do n�mero lido. 
    Exemplo: 
    N�mero lido = 123 
    N�mero gerado = 321
*/

int main(){
    int nmr,c,d,u;
    setlocale(LC_ALL,"");
    printf("Digite um n�mero de 3 d�gitos para inverter: ");
    scanf("%d",&nmr);

    if(nmr>99 & nmr<999){
        
		c=nmr/100;
        d=(nmr%100)/10;
        u=(nmr%10);
        
        printf("O n�mero %d invertido � %d%d%d.\n",nmr,u,d,c);
    }
    else printf("Digite somente n�mero de 3 d�gitos!\n");

    return 0;
}
