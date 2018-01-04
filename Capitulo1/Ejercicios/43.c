#include<stdio.h>

int main(void){
	int n, flag;
	printf("num : "); scanf("%d", &n);
	if( n%2 == 0){
		flag = n/2;
		if( flag%2 != 0 )
			printf("%d es el doble de %d, que es impar.\n", n, n/2);
	}
	return 0;
}
