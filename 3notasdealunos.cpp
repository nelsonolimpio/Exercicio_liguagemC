#include<stdio.h>
#include<stdlib.h>
int main(){
	int cont = 0;
	float n1, n2, n3, media;
	
	while (cont<3){
		printf("Digite as tres notas:\n");
		scanf("%f%f%f",&n1,&n2,&n3);
		media = (n1+n2+n3)/3;
		cont++;
		printf("\n\n A media e igual a %0.2f\n\n",media);
	}
	system("pause");
	return 0;
}
