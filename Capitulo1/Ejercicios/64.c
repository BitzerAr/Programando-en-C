#include<stdio.h>

int main(void){
	int x, y, z, mcd;
	int num1 , num2, num3;
	
	printf("Numero1 : "); scanf("%d", &num1);
	printf("Numero2 : "); scanf("%d", &num2);
	printf("Numero3 : "); scanf("%d", &num3);	
	x = num1;
	y = num2;
	z = num3;
	while( x != y){
		if( x > y)	
			x -= y;
		else
			y -= x;
	}
	while( y != z){
		if( y > z)	
			y -= z;
		else
			z -= y;
	}
	
	mcd = z;
	printf("El MCD de %d y %d es : %d", num1, num2, mcd);
}

