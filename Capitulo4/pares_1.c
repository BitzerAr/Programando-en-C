#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TALLA 10

void selecciona_pares( int a[], int talla, int * pares[], int * numpares){
	
	int i, j;
	
 	*numpares = 0;
	for( i=0; i<talla; i++)
		if( a[i]%2 == 0)
			(*numpares)++;

	*pares = malloc( *numpares * sizeof(int));
	
	j=0;
	for( i=0; i<talla; i++)
		if( a[i]%2 == 0)
			(*pares)[j++] = a[i];
}

int main(void){
	
	int vector[TALLA], i;
	int * seleccion, seleccionados;

	srand(time(0));
	for( i=0; i<TALLA; i++)
		vector[i] = rand()%20 + 1;

	selecciona_pares(vector, TALLA, &seleccion, &seleccionados);

	for( i=0; i<seleccionados; i++)
		printf("%d\n", seleccion[i]);
		
	free(seleccion);
	seleccion = NULL;

	return 0;
}
