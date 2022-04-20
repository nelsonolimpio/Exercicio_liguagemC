/* Dado o programa abaixo, quais o valores impressos após o final da execução do mesmo?*/

#include<stdio.h>
#include<stdlib.h>

int mains(){
	int vet[9] = {12,6,9,5,14,8,33,54,35};
	int x =2, y=3;
	printf("\n%d",vet[x]);
	printf("\n%d",vet[x+1]);
	printf("\n%d",vet[x*2]);
	printf("\n%d",vet[x+y]);
	printf("\n%d",vet[x*y+2]);
	printf("\n%d",vet[vet[x-1]+1]);
    printf("\n%d",vet[vet[x+1]]);
	printf("\n%d",vet[vet[x+1]-(y+1)]);
	printf("\n%d",vet[vet[x+1]-vet[2+y]]);
	printf("\n%d",vet[vet[x*y+1]%vet[y-x]]);
	system("pause");
	return 0;	
}
