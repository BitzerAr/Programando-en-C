#include<stdio.h>

int main(void){
	int x, n, i, r;
	
	printf("x : "); scanf("%d", &x);
	printf("n : "); scanf("%d", &n);
	r = 1;
	i = 0;
	while( i < n ){
		r *= x;
		i++;
	}
	printf("%d**%d = %d\n", x, n, r);
	
	return 0;
}
