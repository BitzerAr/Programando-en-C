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

int main(){
	int talla, i, j;
	float * v1, *v2;
	float aux;
	scanf("%d",&talla);
	
	//Vector donde ingresaremos los valores desde teclado 	
	v1 = vectorInput(talla);
	for(i=0 ; i<talla; i++)
		printf("%.2f ",v1[i]);
	printf("\n");
	
	/*Vector que copiara los valores del vector anterior
	 *y sera ordernado de menor a mayor
	*/
	v2 = malloc(talla * sizeof(float));
	for(i=0; i<talla; i++)
		v2[i] = v1[i];
	
	//Algoritmo burbuja	
	for( i=2; i<=talla; i++)
		for( j=0; j<=talla-i; j++){
			if( v2[j] > v2[j+1]){
				aux = v2[j];
				v2[j] = v2[j+1];
				v2[j+1] = aux;
			}
		}
	for(i=0 ; i<talla; i++)
		printf("%.2f ",v2[i]);
	printf("\n");	
	
	free(v1);
	v1=NULL;
	free(v2);
	v2=NULL;
	
	return 0;
}
