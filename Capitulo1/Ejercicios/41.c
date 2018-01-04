#include<stdio.h>

int main(void){
	char c;
	printf("Caracter : "); scanf("%c", &c);
	if( 65 <= c && c <= 90)
		printf("Es una MAYUSCULA\n");
	else if( 97 <= c && c <= 122 )
		printf("Es una MINUSCULA\n");
	
	return 0;
}
