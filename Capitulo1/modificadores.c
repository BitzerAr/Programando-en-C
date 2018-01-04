#include<stdio.h>

int main(void){
	char c = 'a';
	int i = 1000000;
	float f = 2e1;

	printf("c   : %c %hhd  <- !IMPORTANTE¡ Estudia la diferencia.\n",c , c);
	printf("i   : %d | %10d| %-10d|\n", i, i, i);
	printf("f   : %f | %10.2f| %+4.2f|\n", f, f, f);

	return 0;
}
