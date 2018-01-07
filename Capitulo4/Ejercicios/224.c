#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TALLA 10

int * num_mayores_n(int v[], int n, int talla){
	int *a;
	int i ;
	
	a = malloc( n* sizeof(int));
	for( i=0; i<n ;i++)
		if(i<talla)
			a[i] = v[i];
		else
			a[i] = 0;
	
	return a;
}

int main(void){
	int n, i;
	int *vector2, *vector1;
	
	srand(time(0));
	vector1 = malloc(TALLA * sizeof(int));
	for( i=0; i<TALLA; i++)
		vector1[i] = rand()%30+5;	
	
	printf("Valor de  n : "); scanf("%d", &n);
	
	for( i=0; i<TALLA; i++)
		printf("%d ", vector1[i]);
	printf("\n");
	vector2 = num_mayores_n(vector1, n, TALLA);
		
	
	for( i=0; i<n; i++)
		printf("%d ", vector2[i]);
	printf("\n");
	printf("%d",vector2[10]);	
	free(vector1);
	free(vector2);

	vector1 = NULL;
	vector2 = NULL;
	
	return 0;
}
