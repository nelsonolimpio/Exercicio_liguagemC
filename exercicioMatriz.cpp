/* Faça um programa que receba dados do tipo inteiro suficientes para preencher uma matriz com
dimensao 2x5, calcule e mostre a quantidade de numeros impares.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int m1[2][5];
	int i, media, soma;
	soma = 0;
	printf ("Digite os valores:\n");
	  for(i=0;i<2;i++)
	     scanf("%d",&m1[i]);
	  for(i=0;i<5;i++)
	     soma = m1%2;
		 printf("%d",m1[2][5]);    
}
printf("\n");
	
}
 getch();
 return 0;
} 
