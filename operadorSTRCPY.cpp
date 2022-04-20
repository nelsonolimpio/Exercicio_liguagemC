#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char palavra1[50], palavra2[30], palavra3[30];
	printf("Digite uma palavra qualquer:");
	gets(palavra1);
	strcpy(palavra2, palavra1);
	strcpy(palavra3,"Palavra digitada:");
	printf("\n\n%s%s.\n\n\n",palavra3,palavra2);
	system("pause");
	return 0;
}

/*Função STRCPY(); = Copia o conteúdo de uma string para outra string. Para utilizar esta função acrescente ao seu programa a 
biblioteca String.h .

Sintaxe:strcpy(<string_destino>,<string_origem>);

a linguagem de programação C não permite atribuição de valores para uma variável do tipo caractere com 
o operador "=". Para tal operação exite a função strcpy.
*/
