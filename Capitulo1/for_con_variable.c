#include<stdio.h>

int main(void){
	int a = 1;
	for( int i=0 ; i < 32; i++){
		printf("2**%2d = %10u\n", i, a);
		a <<= 1;
	}
	
	return 0;
}
