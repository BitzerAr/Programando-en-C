#include<stdio.h>

int main(void){
	int a, b;
	printf("Introduce un entero a : ");
	scanf("%d", &a);
	
	b=2;
	while( b<a ){
		if( a%b == 0 ){
			break;
		}
		printf("\n<>\n");
		b += 1;
	}
	if( b == a ){
		printf("%d es primo. \n",a);
	}
	else{
		printf("%d no es primo.\n",a);
	}

	return 0;
}
