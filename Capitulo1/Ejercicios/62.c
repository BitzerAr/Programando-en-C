#include<stdio.h>
int main(){
	int n, flag;
	int i, j;

	printf("Numero : "); scanf("%d", &n);
	
	for( i = 1; i <= n ; i++){
		flag = 0;
		for( j = i; j > 0; j--){
			if( i%j == 0 )	++flag;
			if( flag > 2 ) break;
		}
		if( flag == 2)
			printf("%d\n", i);
	}

	return 0;
}
