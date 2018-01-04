#include<stdio.h>
enum{Saludar=1 , Despedirse};
int main(void){
	int opcion;
	printf("1) Saluda\n");
	printf("2) Despide\n");
	scanf("%d", &opcion);
	switch( opcion ){
		case Saludar :
			printf("Hola\n");
			break;
		case Despedirse : 
			printf("Adios\n");
			break;
		default :
			printf("Opcion no valida\n");
			break;
	}	

	return 0;
}
