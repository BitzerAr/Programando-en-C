#include<stdio.h>
#include<math.h>

int main(void){
	int capital, years;
	float interes;
	printf("Capital : "); scanf("%d", &capital);
	printf("interes : "); scanf("%f", &interes);
	printf("Años : "); scanf("%d", &years);

	float M;
	M = capital*pow((1+interes/100.0), years);

	printf("%d euros al %.1f%c de interes anual se CONVIERTE EN %.2f euros al cabo de %d años\n", capital, interes, 37, M, years);
	
	return 0; 
}
