#include<stdio.h>

int main(void){
	int a, b;
	char c, d;
	
	a = 512;
	b = 127;

	c = a;
	d = b;
	
	printf("%hhd %hhd\n", c, d);
	return 0;
}
