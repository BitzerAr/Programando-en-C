#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Entrada desde el teclado del vector de tipo flotante 
float * vectorInput( int talla){
	float * vector1;
	int i;
	vector1 = malloc(talla * sizeof(float));
	for(i=0 ; i< talla; i++)
		scanf("%f", &vector1[i]);
	return vector1;
}

/*funcion para copiar el vector que ingresamos 
*desde teclado a un nuevo vector que lo 
*ordenaremos algoritmo de burbuja
*/
float * vectorOrdenadoBurbuja(float *v, int talla){
	float *vector2;
	int i, j;
	float aux;
	vector2 = malloc(talla * sizeof(float));
	for(i=0; i<talla; i++)
		vector2[i] = v[i];
	
	//Algoritmo burbuja	
	for( i=2; i<=talla; i++)
		for( j=0; j<=talla-i; j++){
			if( vector2[j] > vector2[j+1]){
				aux = vector2[j];
				vector2[j] = vector2[j+1];
				vector2[j+1] = aux;
			}
		}

	return vector2;
}

int main(){
	int talla, i;
	float * v1, *v2;

	scanf("%d",&talla);
	
	//Vector donde ingresaremos los valores desde teclado 	
	v1 = vectorInput(talla);
	for(i=0 ; i<talla; i++)
		printf("%.2f ",v1[i]);
	printf("\n");
	/*Vector que copiara los valores del vector anterior
	 *y sera ordernado de menor a mayor
	*/
 	v2 = vectorOrdenadoBurbuja(v1, talla);
	for(i=0 ; i<talla; i++)
		printf("%.2f ",v2[i]);
	printf("\n");	
	
	free(v1);
	v1=NULL;
	free(v2);
	v2=NULL;
	
	return 0;
}
