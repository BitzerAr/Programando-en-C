#include<stdio.h>

int main(void){
	long long a = 1;
	int n;
	printf("n : "); scanf("%d",&n);
	for( int i = 0; i < n; i++){
		printf("2**%2d = %15lld\n", i, a);
		a<<=1;
	}
	return 0;
}
