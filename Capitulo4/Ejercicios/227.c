#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct Polinomio{
	float * p;
	int grado;
};

void lee_polinomio(struct Polinomio * pol){
	int i;	
	printf("\tGrado : "); scanf("%d", &pol->grado);
	pol->p = malloc( pol->grado*sizeof(struct Polinomio) );
	for(i=pol->grado ; i>=0 ; i--){
		printf("\tConstante de variable con grado %d : ", i); scanf("%f", &pol->p[i]);
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
	printf("\t\tEvaluar en x : ");scanf("%d",&x);
	for( i=pol->grado; i>=0; i--)
		sum += pol->p[i]*pow(x, i);
	
	return sum;
}
void sumar_polinomio(struct Polinomio *pol, struct Polinomio *pol1, struct Polinomio *polsuma){
	int i;

	if(pol->grado > pol1->grado)
		polsuma->grado = pol->grado;
	else
		polsuma->grado = pol1->grado;
	
	polsuma->p = malloc( polsuma->grado* sizeof(struct Polinomio));
	
	if( pol->grado > pol1->grado){
		for( i=pol->grado ; i > pol1->grado; i--)
			polsuma->p[i] = pol->p[i]; 
		for( i=pol1->grado ; i >=0; i--)
			polsuma->p[i] = pol->p[i] + pol1->p[i]; 
	}
	else{
		for( i=pol1->grado ; i > pol->grado; i--)
			polsuma->p[i] = pol1->p[i]; 
		for( i=pol->grado ; i >=0; i--)
			polsuma->p[i] = pol->p[i] + pol1->p[i]; 
	}	
	
	for( i=polsuma->grado; i>=0; i--)	
		printf("\t\tcoeficiente de la variable de grado %d : %f\n", i, polsuma->p[i]);		
}

void multiplicar_polinomio(struct Polinomio * pol, struct Polinomio * pol1, struct Polinomio * polmultiplicar){
	int i, j;
	
	polmultiplicar->grado = pol->grado + pol1->grado;
	polmultiplicar->p = malloc( polmultiplicar->grado*sizeof(struct Polinomio));
	
	for( i=0; i<=pol->grado; i++)
		polmultiplicar->p[i] = 0;
	
	for( i=0; i<=pol->grado; i++)
		for( j=0; j<=pol1->grado; j++)
			polmultiplicar->p[i+j] += pol->p[i]*pol1->p[j];

	printf("\t\tResultado de multiplicacion de 2 polinomios.\n");
	for( i=polmultiplicar->grado; i>=0; i--)
		printf("\t\tCoeficiente de la variable con grado %d : %f\n", i, polmultiplicar->p[i]);
}
	
void menu(){
	printf("\n1 Ingresar un Polinomio.\n");
	printf("2 Ingresar segundo Polinomio.\n");
	printf("3 Evaluar Polinomio.\n");
	printf("4 Sumar Polinomio.\n");
	printf("5 Multiplicar Polinomio\n");
	printf("6 Salir\n");
	
}
void submenu(){
	printf("\n\t1 Evaluar primer Polinomio\n");
	printf("\t2 Evaluar segundo Polinomio\n");
	printf("\t3 Volver al menu anterior\n");
}
int main(){
	struct Polinomio pol[4];
	
	float evaluar;
	int opcion, flag1=0, flag2=0;
	do{
		menu();
		printf("Opcion : ");scanf("%d",&opcion);
		switch(opcion){
			case 1: 
						lee_polinomio(&pol[0]);
						flag1 = 1;
						break;
			case 2:
						lee_polinomio(&pol[1]);
						flag2 = 1;
						break; 
			case 3: 
						do{
							submenu();
							printf("\tOpcion : "); scanf("%d",&opcion);
							switch(opcion){
								case 1:
											if(flag1){
												evaluar = evaluar_polinomio(&pol[0]);
												printf("\t\tValor del Polinomio evaluado : %f\n",evaluar);
											}
											else
												printf("\t\t---Polinomio no ingresado---\n");
											break;
								case 2:
											if(flag2){
												evaluar = evaluar_polinomio(&pol[1]);
												printf("\tValor del Polinomio evaluado : %f\n",evaluar);
											}
											else
												printf("\t---Polinomio no ingresado---\n");
											break;
								case 3:
											printf("\t-----Volviendo al menu anterior.-----\n");
											break;
								default: 
											printf("Opcion no valida\n");
											break;
							}
						}while( opcion!=3);
						break;
			case 4:	
						if( flag1 && flag2 )
							sumar_polinomio(&pol[0], &pol[1], &pol[2]);
						else
							printf("---Falta ingresar un polinomio.---\n");
						break;
			case 5:
						if( flag1 && flag2 )
							multiplicar_polinomio(&pol[0], &pol[1], &pol[3]);
						else
							printf("---Falta ingresar un polinomio.---\n");
						break;
			case 6:
						printf("Acabando el programa.\n");
						break;
			default: 
						printf("Opcion no valida\n");
						break;
		}
	}while( opcion!=6 );
	
	libera_polinomio(&pol[0]);
	libera_polinomio(&pol[1]);
	libera_polinomio(&pol[2]);
	libera_polinomio(&pol[3]);
	
	return 0;

}


