#include<stdio.h>
#include<stdlib.h>
int main(){
	char palavra[50];
	printf("Digite uma palavra qualquer:");
	gets(palavra);
	puts("\n\n Palavra digitada:\n");
	puts(palavra);
	puts("\n\n\n");
	system("pause");
	return 0;
}

/* A Fun��o Puts() = escreve o conte�do da String na unidade de sa�da e coloca um "\n" no final.

sintaxe: puts(<indentificador/string>);

a fun��o puts() pode escrever apenas de Caracteres, n�o podendo escrever n�meros ou fazer
convers�es de formato. Se quisermos utilizar caracteres de controle na fun��o puts, devendo utilizar 
separadamente da vari�vel String.
