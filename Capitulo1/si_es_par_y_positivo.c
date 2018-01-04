#include<stdio.h>

int main(void){
	int a;

	printf("Introduce un entero a : ");
	scanf("%d", &a);
	
	if( a%2 == 0 ){
		printf("El valor de a es par.\n");
		if( a>0 ){
			printf("Y, ademas es positivo.\n");
		}
	}
}
