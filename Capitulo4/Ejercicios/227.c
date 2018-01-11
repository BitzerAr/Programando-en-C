#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct Polinomio{
	float * p;
	int grado;
};

void lee_polinomio(struct Polinomio * pol){
	int i;	
	printf("Grado : "); scanf("%d", &pol->grado);
	pol->p = malloc( pol->grado*sizeof(struct Polinomio) );
	for(i=pol->grado ; i>=0 ; i--){
		printf("\t Constante de variable con grado %d : ", i); scanf("%f", &pol->p[i]);
	}
}
void libera_polinomio(struct Polinomio * pol){
	free(pol->p);
	pol->p = NULL;
	pol->grado = 0;
}
float evaluar_polinomio(struct Polinomio * pol){
	int i, x;
	float sum = 0.0;
	printf("\n\tEvaluar en x : ");scanf("%d",&x);
	for( i=pol->grado; i>=0; i--)
		sum += pol->p[i]*pow(x, i);
	
	return sum;
}
int main(){
	struct Polinomio * pol;
	float evaluar;
	lee_polinomio(pol);
	evaluar = evaluar_polinomio(pol);
	printf("\nBt%f", evaluar);
	libera_polinomio(pol);
	return 0;

}


