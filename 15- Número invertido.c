#include <stdio.h>
#include <locale.h>

/*
    15) Faça um programa para ler um número inteiro positivo de três dígitos. Em seguida, calcule e mostre o número formado pelos dígitos invertidos do número lido. 
    Exemplo: 
    Número lido = 123 
    Número gerado = 321
*/

int main(){
    int numero,centena,dezena,unidade;
    setlocale(LC_ALL,"");
    printf("Digite um número de 3 dígitos para inverter: ");
    scanf("%d",&numero);

    if(numero > 99 & numero < 999){
        
		centena = numero / 100;
        dezena = (numero % 100)/10;
        unidade = (numero % 10);
        
        printf("O número %d invertido é %d%d%d.\n",numero,unidade,dezena,centena);
    }
    else printf("Digite somente número de 3 dígitos!\n");

    return 0;
}
