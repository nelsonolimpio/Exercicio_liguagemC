#include<stdio.h>
#include<stdlib.h>

int main(){
	int cont = 1;
	float n1,n2,n3,media;
	do{
		printf("Digite tres notas\n");
		scanf("%f%f%f",&n1,&n2,&n3);
		media = (n1+n2+n3)/3;
		printf("A media e igual a %0.2f\n\n",media);
		cont++;
	} while (cont<=3);
	system("pause");
	return 0;
}
