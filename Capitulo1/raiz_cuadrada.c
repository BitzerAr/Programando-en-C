#include<stdio.h>
#include<math.h>

int main(void){
	float b;
	
	printf("Escribe un flotante : ");
	scanf("%f", &b);
	
	if( b >= 0.0 ){
		printf("Su raiz cuadrada es %f.\n", sqrt(b));
	}
	else{
		printf("No puedo calcular su raiz cuadrada.\n");
	}

	return 0;
}
