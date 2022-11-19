#include <stdio.h>
#include <locale.h>//biblioteca de acentos
#include <math.h>//necessita para usar math.h
#define pi 3.141592

/*
	12) Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro. 
	O volume de um cilindro circular é calculado por meio da seguinte fórmula:
	V = pi * raio2 * altura,em que ?pi = 3.141592.
*/

int main(){
    float raioCilindro, volumeCilindro, alturaCilindro;
    setlocale(LC_ALL,"");//Permite caracteres especiais
    
    printf("Insira o valor do raio do cilindro (cm): ");
    scanf("%f",&raioCilindro);
    
    printf("Insira a altura do cilindro (cm): ");
    scanf("%f",&alturaCilindro);
    
    volumeCilindro = pi * pow(raioCilindro,2);
	
	printf("\nRaio -> %.1f cm \tAltura -> %.1f cm\nVolume do cilindro -> %.1f cm³",raioCilindro,alturaCilindro,volumeCilindro);
    return 0;
}
