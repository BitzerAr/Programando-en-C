/************************************************************
*Un programa ejemplo
*--------------------------------------
*Proposito : mostrar algunos efectos que se pueden lograr con
*comentarios de C
************************************************************/
#include<stdio.h>

/*-----------------------------------------------------------
*Programa principal
*----------------------------------------------------------*/

int main(void){
	int a, b, c;
	int m;
	
	printf("a : "); scanf("%d", &a);
	printf("b : "); scanf("%d", &b);
	printf("c : "); scanf("%d", &c);

	if( a>b )
		if( a>c ) 
			m = a;
		else
			m = c;
	else
		if( b>c )
			m = b;
		else
			m = c;

	printf("El maximo de %d %d %d es %d\n", a, b, c, m);
			
	return 0;
}
