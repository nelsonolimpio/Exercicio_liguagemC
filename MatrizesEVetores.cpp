/*Dado o programa a seguir , o que sera impresso ao final da execução?*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int m1[2][4] = {{1,2,3,4},{5,6,7,8}}, m2[4][2];
	int x,y;
	for(x=0;x<4;x++){
		for(y=0;y<2;y++){
			m2[x][y] = m1[y][x];
			printf("%d",m2[x][y]);
		}
		printf("\n");
	}
	return 0;
}

/* Vai imprimir os valores 15 26 37 48  */
