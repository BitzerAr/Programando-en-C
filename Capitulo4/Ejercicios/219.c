#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TALLA 10

int * selecciona_pares(int a[], int talla, int * numpositivos){
	int i, j;
	int * positivos;
	
	*numpositivos = 0;
	for( i=0; i<talla; i++)
		if(a[i] > 0)
			(*numpositivos)++;
	
	positivos = malloc( *numpositivos * sizeof(int));

	j = 0;
	for( i=0; i<talla; i++)
		if(a[i] > 0)
			positivos[j++] = a[i];

	return positivos;
}

int main(void){
	int vector[TALLA], i;
	int * seleccion, seleccionados;
	
	srand(time(0));
	for(i=0 ; i<TALLA; i++)
		vector[i] = rand()%20 - 10;

	printf("Lista de numeros\n");
	for( i=0 ; i<TALLA; i++)
		printf("%d\n", vector[i]);

	seleccion = selecciona_pares(vector, TALLA, &seleccionados);

	printf("\nNumeros seleccionados\n");
	for( i=0 ; i<seleccionados; i++)
		printf("%d\n", seleccion[i]);

	free(seleccion);
	seleccion = NULL;
	
	return 0;
}
