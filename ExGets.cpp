#include<stdio.h>
#include<stdlib.h>
int main(){
	char palavra[50];
	printf("Digite uma palavra qualquer:");
	gets(palavra);
	printf("\n\nPalavra digitada: %s\n\n\n", palavra);
	system("pause");
	return 0;
}
