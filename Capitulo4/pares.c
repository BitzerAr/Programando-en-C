#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TALLA 10

int * selecciona_pares(int a[], int talla, int *numpares){
	int i, j;
	int *pares;
	
	//Contamos el numero de elementos pares en el parametro numpares, pasado por referencia
	*numpares = 0;
	for( i=0 ; i<talla; i++)
		if( a[i]%2 == 0)
			(*numpares)++;

	pares = malloc(*numpares * sizeof(int));

	j = 0;
	for( i=0; i<talla; i++)
		if( a[i]%2 == 0)
			pares[j++] = a[i];
	
	return pares;
}

int main(void){
	int vector[TALLA], i;
	int * seleccion, seleccionados;
	
	//Llenamos el vector con vectores aleatorios
	srand(time(0));
	for( i=0; i<TALLA; i++)
		vector[i] = rand()%40 + 1;

	for( i=0; i<TALLA; i++)
		printf("%d\n",vector[i]);
	printf("\n\n");
	//Seefectua ahora la seleccion de pares
	seleccion = selecciona_pares( vector, TALLA, &seleccionados);
	//La variable seleccion apunta ahora a la zona de memoria con los elementos pares
	//Ademas, la viriable seleccionados contine el numerod de pares

	//ahora los mostramos en pantalla
	for( i=0; i<seleccionados; i++)
		printf("%d\n", seleccion[i]);
	
	free(seleccion);
	seleccion = NULL;
	
	return 0;
}
