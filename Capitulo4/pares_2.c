#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct VectorDinamicoEnteros{
	int * elementos;
	int talla;
};

struct VectorDinamicoEnteros selecciona_pares( struct VectorDinamicoEnteros entrada){
	int i, j;
	struct VectorDinamicoEnteros pares;

	pares.talla = 0;
	for( i=0; i<entrada.talla; i++)
		if( entrada.elementos[i]%2 == 0)
			pares.talla++;

	pares.elementos = malloc( pares.talla* sizeof(int));

	j = 0;
	for( i=0; i<entrada.talla; i++)
		if( pares.elementos[i]%2 == 0)
			pares.elementos[j++] = entrada.elementos[i];

	return pares;
}

int main(void){
	int i;
	struct VectorDinamicoEnteros vector, seleccionados;

	vector.talla = 10;
	vector.elementos = malloc( vector.talla * sizeof(int));
	srand(time(0));
	for( i=0; i<vector.talla; i++)
		vector.elementos[i] = rand()%20 + 1;

	seleccionados = selecciona_pares(vector);

	for( i=0; i<seleccionados.talla; i++)
		printf("%d\n", seleccionados.elementos[i]);

	free(seleccionados.elementos);
	seleccionados.elementos = NULL;
	seleccionados.talla = 0;
	return 0;
}
