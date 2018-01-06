#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TALLA 10

float * mayores(float vector[], int talla, int * nummayores, int num){
	float * mayor;
	int i, j;
	
	*nummayores = 0;
	for( i=0 ; i<talla; i++)
		if(vector[i] > num)
			(*nummayores)++;

	mayor = malloc(*nummayores * sizeof(float));
	
	j = 0;
	for( i=0; i<talla; i++)
		if(vector[i] > num)
			mayor[j++] = vector[i];

	return mayor;
}

int main(void){
	float vector[TALLA];
	float * seleccion;
	int seleccionadas;
	int i, num;

	srand(time(0));
	for( i=0; i<TALLA; i++)
		vector[i] = rand()%200/10.0;

	printf("Lista de numeros\n");
	for( i=0; i<TALLA; i++)
		printf("%f\n",vector[i]);
	
	printf("\nNumero : "); scanf("%d",&num);
	
	seleccion = mayores(vector, TALLA, &seleccionadas, num);
	
	printf("\nNumero seleccionados mayores a <%d>\n", num);
	for( i=0; i< seleccionadas; i++)
		printf("%f\n",seleccion[i]);

	free(seleccion);
	seleccion = NULL;

	return 0;
}
