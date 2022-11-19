#include <stdio.h>
#include <math.h>

/*
	13) Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação: 
	h =	Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa 
	através da fórmula dada. Imprima o resultado
*/

int main(){
	
	float catetoA, catetoB, hipotenusa;
	
	printf("Insira o cateto A (cm): ");
	scanf("%f",&catetoA);
	
	printf("Insira o cateto B (cm): ");
	scanf("%f",&catetoB);
	
	hipotenusa = sqrt(pow(catetoA,2) + pow(catetoB,2));
	
	printf("\nCateto A -> %.1f\nCateto B -> %.1f\nHipotenusa -> %.1f",catetoA,catetoB,hipotenusa);
		
	return 0;
}
