#include<stdio.h>
int main(void){
	float a, b;
	printf("a : ");scanf("%f", &a);
	printf("b : ");scanf("%f", &b);
	
	printf("La ecuacion ax + b = 0 tiene ");
	
	if( a==0 && b==0 ) 
		printf("INFINITAS SOLUCIONES.\n");
	else if( a == 0) 
		printf("NO TIENE SOLUCION.\n");
	else 
		printf("UNA SOLUCION ES %f\n", -b/a);

	return 0;
}
