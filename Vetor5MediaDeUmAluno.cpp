#include<stdio.h>
#include<stdlib.h>

int main(){
	float nota[5],soma,media;
	int i;
	soma = 0;
	printf("Digite os valores das cincos notas:\n");
	 
	for(i=0;i<5;i++)
	  scanf("%f",&nota[i]);
	for(i=0;i<5;i++)
	  soma = soma + nota[i];
	media = soma/5;
	printf("media das notas: %.1f", media);
	system("pause");
	return 0;    
}
