#include<stdio.h>

int main(void){
	int x, n;
	printf("x : "); scanf("%d",&x);
	printf("n : "); scanf("%d",&n);
	int i, s=1;
	for(i=0 ; i<n ; i++ )
		s *= x;
	printf("x^n = %d\n",s);
	
	return 0;
}
