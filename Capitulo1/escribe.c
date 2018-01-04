#include<stdio.h>

int main(void){
	int a;
	float b;
	
	a = 13%2;
	b = 2.0 / ( 1.0+2-(a+1) );
	printf("El valor de a es %d y el de b es %f\n", a, b);
	return 0;
}
