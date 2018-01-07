#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct VectorDinamicoEnteros{
	int *elementos;
	int talla;
};

void selecciona_pares(struct VectorDinamicoEnteros entrada, struct VectorDinamicoEnteros * pares){
	int i, j;
	
	pares->talla = 0;
	for( i=0; i<entrada.talla; i++)
		if( entrada.elementos[i]%2 == 0)
			pares->talla++;

	pares->elementos = malloc( pares->talla * sizeof(int));

	j = 0;
	for( i=0; i<entrada.talla; i++)
		if( entrada.elementos[i]%2 == 0)
			pares->elementos[j++] = entrada.elementos[i];
}

int main(void){
	int i;
	struct VectorDinamicoEnteros vector, seleccionados;

	srand(time(0));
	vector.talla = 10;
	vector.elementos = malloc( vector.talla * sizeof(int));
	for( i=0; i<vector.talla; i++)
		vector.elementos[i] = rand()%20+1;

	selecciona_pares(vector, &seleccionados);

	for( i=0 ; i<seleccionados.talla; i++)
		printf("%d\n", seleccionados.elementos[i]);
	
	free(seleccionados.elementos);
	seleccionados.elementos = NULL;
	seleccionados.talla = 0;
	
	return 0;
}
