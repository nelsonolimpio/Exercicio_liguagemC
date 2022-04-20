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

/* A Função Puts() = escreve o conteúdo da String na unidade de saída e coloca um "\n" no final.

sintaxe: puts(<indentificador/string>);

a função puts() pode escrever apenas de Caracteres, não podendo escrever números ou fazer
conversões de formato. Se quisermos utilizar caracteres de controle na função puts, devendo utilizar 
separadamente da variável String.
