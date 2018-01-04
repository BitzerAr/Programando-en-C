#include<stdio.h>

int main(void){
	int x;
	printf("x : ");
	scanf("%d", &x);
	
	printf("x^4 - x^2 +1 = %.2f\n ",(float) x*x*x*x - x*x +1);
	return 0;
}
