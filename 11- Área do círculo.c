#include <stdio.h>
#include <locale.h>//biblioteca de acentos
#include <math.h>//necessita para usar math.h
#define pi 3.141592

/*
	11) Leia o valor do raio de um círculo. Calcule e imprima a área do círculo correspondente.
	A área do círculo é A = pi * raio2, sendo pi = 3.141592.
*/

int main(){
    float raioDoCirculo,areaDoCirculo;
    setlocale(LC_ALL,"");//Permite caracteres especiais
    
    printf("Insira o valor do raio do círculo: ");
    scanf("%f",&raioDoCirculo);
    
    areaDoCirculo = pi * pow(raioDoCirculo,2);
    
    printf("A área do circulo é de %.2f\n",areaDoCirculo);
    
    return 0;
}
