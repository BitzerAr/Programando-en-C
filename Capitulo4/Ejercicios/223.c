#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TALLA 10

int * num_mayores_n(int v[], int n, int talla){
	int *a;
	int i, j ,aux;
	for( i=2; i<=talla; i++)
		for( j=0; j<= talla-i; j++)
			if(v[j] > v[j+1]){
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}
	a = malloc( n* sizeof(int));
	for( i=talla-n ,j=0; i<talla ;i++, j++)
		a[j] = v[i];
	
	return a;
}

int main(void){
	int n, i;
	int *vector2, *vector1;
	
	srand(time(0));
	vector1 = malloc(TALLA * sizeof(int));
	for( i=0; i<TALLA; i++)
		vector1[i] = rand()%30+5;	
	do{	
		printf("Valor de  n : "); scanf("%d", &n);
		if(n>TALLA)
			printf("el valor de n : %d debe ser menor a la talla del vector %d", n, TALLA);
	}while( n > TALLA );
	
	for( i=0; i<TALLA; i++)
		printf("%d ", vector1[i]);
	printf("\n");
	vector2 = num_mayores_n(vector1, n, TALLA);
		
	
	for( i=0; i<n; i++)
		printf("%d ", vector2[i]);
	printf("\n");
	
	free(vector1);
	free(vector2);

	vector1 = NULL;
	vector2 = NULL;
	
	return 0;
}

