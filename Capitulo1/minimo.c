#include<stdio.h>

int main(void){
	int a, b, c, minimo;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if( a<b )
		if( a<c ) minimo = a;
		else minimo = c;
	else
		if( b<c ) minimo = b;
		else minimo = c;
	
	printf("%d\n", minimo);
	return 0;
}
