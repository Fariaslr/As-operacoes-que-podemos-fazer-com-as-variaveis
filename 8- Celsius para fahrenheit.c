#include <stdio.h>
#include <locale.h>//biblioteca de acentos


/*
	8) Leia um valor que represente uma temperatura em graus Celsius e apresente-a 
	convertida em graus Fahrenheit. A fórmula de conversão é: F = C * (9.0/5.0) + 
	32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
*/

int main(){
	
	float celsius, fahrenheit;
    setlocale(LC_ALL,"");//Permite caracteres especiais
    
    printf("Insira a temperatura Celsius: ");
    scanf("%f",&celsius);
    
    fahrenheit = celsius * (9.0/5.0) + 32.0;
    
    printf("%.1f ºC -> %.1f ºF",celsius, fahrenheit);
    
    return 0;
}
