#include<stdio.h>
enum{Saludar=1 , Salir};
int main(void){
	int opcion;
	do{
		printf("1) Saluda\n");
		printf("2) Salir\n");
		scanf("%d", &opcion);
		switch( opcion ){
			case Saludar :
				printf("Hola\n");
			break;
			case Salir : 
				printf("Adios\n");
				break;
			default :
				printf("Opcion no valida\n");
				break;
		}	
	}while(opcion != 2);
	return 0;
}
