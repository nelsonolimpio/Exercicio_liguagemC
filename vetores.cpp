/* Sejam dois vetores, cada um contendo 5 valores numericos reais, armazenar em um terceiro valor
a média aritmética entre os valores dos dois primeiros, calcular a média dos valores do terceiro vetor,
apresentar cada valor do terceiro vetor comparando com a média geral */

#include<stdio.h>
#include<stdlib.h>

int main(){
	float vetor1[]={33,22,45,13,3}, vetor2[]={8,4,16,28,12}, medarit[5],soma,medgeral;
	int i;
	soma = 0;
	for(i=0;i<5;i++){
		medarit[i] = (vetor1[i]+vetor2[i])/2;
		soma=soma+medarit[i];
	}
	medgeral = soma/5;
	printf("Media geral = %0.1f\n\n",medgeral);
	for(i=0;i<5;i++)
	  printf("Posicao[%d]-Media Aritmetica=%0.1f-",i,medarit[i]);
    system("pause");
    return 0;
}
