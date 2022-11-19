#include <stdio.h>
#include <locale.h>//biblioteca de acentos

/*
	10) A importância de R$780.000,00 será dividida entre três ganhadores de um concurso, sendo que:
	
		i. O primeiro ganhador receberá 46% do total.
		ii. O segundo receberá 32% do total.
		iii. O terceiro receberá o restante.
		
	Calcule e imprima a quantia recebida por cada um dos ganhadores
*/

int main(){
	
    float valorDoPremio, primeiroGanhador, segundoGanhador, terceiroGanhador;
    float partePrimeiroGanhador = 46;
    float parteSegundoGanhador = 32;
    float parteTerceiroGanhador;
    setlocale(LC_ALL,"");//Permite caracteres especiais
    
    printf("Insira o valor do prêmio em reais: ");
    scanf("%f",&valorDoPremio);
    
    primeiroGanhador = valorDoPremio *(partePrimeiroGanhador/100);
    segundoGanhador = valorDoPremio *(parteSegundoGanhador/100);
    terceiroGanhador = valorDoPremio - primeiroGanhador - segundoGanhador;
    parteTerceiroGanhador = 100 - partePrimeiroGanhador - parteSegundoGanhador;
    
    printf("\nPrimeiro ganhador -> R$%.2f\n",primeiroGanhador);
    printf("Segundo ganhador -> R$%.2f\n",segundoGanhador);
    printf("Terceiro ganhador -> R$%.2f",terceiroGanhador);

    return 0;
}
