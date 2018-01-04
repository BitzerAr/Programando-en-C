#include<stdio.h>
int main(void){
	float a, b, c;
	float discriminante;
	printf("a : ");scanf("%f", &a);
	printf("b : ");scanf("%f", &b);
	printf("c : ");scanf("%f", &c);
	
	printf("La ecuacion ax^2 + bx + c = 0  ");
	discriminante = b*b - 4*a*c;
	if( a==0 && b==0 && c==0 )
		printf("TIENE INFINITAS SOLUCIONES.\n");
	else if( discriminante < 0 ) 
		printf("NO TIENEN SOLUCION REAL.\n");
	else if( discriminante == 0) 
		printf("TIENE UNA UNICA SOLUCION REAL.\n");
	else 
		printf("TIENE DOS SOLUCIONES REALES.\n");

	return 0;
}
