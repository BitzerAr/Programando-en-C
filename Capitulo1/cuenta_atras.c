#include<stdio.h>

int main(void){

	int a;

	printf("Introduce un entero a : ");
	scanf("%d", &a);
	
	while( a>0 ){
		printf("%d", a);
		a -= 1;
	}
	printf("Boom!!\n");

	return 0;
}
