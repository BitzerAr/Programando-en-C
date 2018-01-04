#include<stdio.h>
#include<math.h>

int main(void){
	int r;
	
	printf("radio : "); scanf("%d", &r);
	printf("Perimetro : %f\nArea : %f\n", (float)2*M_PI*r, (float)M_PI*pow(r,2));
}
