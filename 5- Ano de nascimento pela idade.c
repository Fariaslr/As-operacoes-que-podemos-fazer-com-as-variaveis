#include <stdio.h>
#include <locale.h>//biblioteca de acento

/*
	5) Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua 
	idade e do ano atual.
*/

int main(){
	
    int idade ,anoAtual , anoNascimento;
    setlocale(LC_ALL,"");//Permite caracteres especiais
    
    printf("Informe a sua idade: ");
    scanf("%d",&idade);
    
    printf("Informe o ano atual: ");
    scanf("%d",&anoAtual);
    
    anoNascimento = anoAtual - idade;
    
    printf("O seu ano de nascimento é %d\n",anoNascimento);
    
    return 0;
}
