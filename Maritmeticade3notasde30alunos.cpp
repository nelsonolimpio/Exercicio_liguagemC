#include<stdio.h>
#include<stdlib.h>

int main(){
	int cont;
	float n1,n2,n3,media;
	for(cont=1;cont<=3;cont++){
		printf("Digite tres notas\n");
		scanf("%f%f%f",&n1,&n2,&n3);
		media=(n1+n2+n3)/3;
		printf("A media e igual a %0.2f\n\n",media);
	}
	system("pause");
	return 0;
}
