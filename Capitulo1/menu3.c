#include<stdio.h>
enum{Saludar=1 , Despedirse, Hola, Adios};
int main(void){
	int opcion;
	printf("1) Saluda\n");
	printf("2) Despide\n");
	printf("3) Di Hola\n");
	printf("4) Di adios\n");
	scanf("%d", &opcion);
	switch( opcion ){
		case Saludar :
		case Hola :
			printf("Hola\n");
			break;
		case Despedirse : 
		case Adios : 
			printf("Adios\n");
			break;
		default :
			printf("Opcion no valida\n");
			break;
	}	

	return 0;
}
