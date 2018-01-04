#include<stdio.h>
int main(void){
	char a;
	int i;
	printf("+----------+----------+\n");
	printf("| Decimal  | Caracter |\n");
	printf("+----------+----------+\n");
	for( a=32 ; a<126 ;  a++)
		printf("|%10hhd|%10c\n", a, a);
		//printf("|%10d|%10c|\n", a, a);
	return 0;
}
