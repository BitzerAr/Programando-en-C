#include<stdio.h>

int main(void){
	int x, y, mcd;
	int num1 , num2;
	
	printf("Numero1 : "); scanf("%d", &num1);
	printf("Numero2 : "); scanf("%d", &num2);
	
	x = num1;
	y = num2;
	
	while( x != y){
		if( x > y)	
			x -= y;
		else
			y -= x;
	}
	
	mcd = x;
	printf("El MCD de %d y %d es : %d", num1, num2, mcd);
}
