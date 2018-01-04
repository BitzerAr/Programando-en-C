#include<stdio.h>
#include<math.h>

int main(){
	int a, b, i;
	float s;
	
	//Pedir Limite inferior y superior
	printf("Limite inferior : ");
	scanf("%d",&a);
	while( a<0 ){
		printf("No puede ser negativo\n");
		printf("Limite inferior : ");
		scanf("%d",&a);
	}
	printf("Limite superior : ");
	scanf("%d",&b);
	while( b<a ){
		printf("No puede ser menor que %d\n",a);
		printf("Limite superior : ");
		scanf("%d",&b);
	}
	
	//Calculando la sumatoria
	s = 0.0;
	for( i=a ; i<=b ; i++ )
		s += sqrt(i);

	//Mostrando resultado
	printf("\nSumatoria de raices ");
	printf("de %d a %d : %f \n", a, b, s);
	return 0;
}
