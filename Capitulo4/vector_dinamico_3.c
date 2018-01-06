#include<stdlib.h>
#include<stdio.h>

int main(void){
	int *a = NULL;
	int talla, i;
	int *p;
	
	printf("Numero de elementos: "); scanf("%d", &talla);
	a = malloc( talla*sizeof(int) );
	for( i=0, p=a; i <talla; i++, p++)
		*p = i;
	free(a);
	a = NULL;
	
	return 0;
}
