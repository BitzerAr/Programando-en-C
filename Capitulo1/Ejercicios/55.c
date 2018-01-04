#include<stdio.h>
#include<math.h>
int main(void){
	int x1, y1, z1;
	int x2, y2, z2;
	int opcion, flag1, flag2;

	float cruz, punto;
	float l1, l2;
	flag1 = flag2 = 0;
	do{
		printf("1) Introducir el primer vector.\n");
		printf("2) Introducir el segundo vector.\n");
		printf("3) Calcular la suma.\n");
		printf("4) Calcular la diferencia.\n");
		printf("5) Calcular el producto vectorial.\n");
		printf("6) Calcular el producto escalar.\n");
		printf("7) Calcular el angulo en grados entre ellos.\n");
		printf("8) Calular la longitus.\n");
		printf("9) Finalizar.\n");

		printf("OPCION : "); scanf("%d",&opcion);
		switch(opcion){
			case 1 : 
						printf("\tx1 : "); scanf("%d", &x1);
						printf("\ty1 : "); scanf("%d", &y1);
						printf("\tz1 : "); scanf("%d", &z1);
						flag1 =1;
						break;
			case 2 : 
						printf("\tx2 : "); scanf("%d", &x2);
						printf("\ty2 : "); scanf("%d", &y2);
						printf("\tz2 : "); scanf("%d", &z2);
						flag2 =1;
						break;
			case 3 : 
						if( flag1 && flag2)
							printf("\tLa suma de vectores es  x: %d y: %d z: %d\n", x1+x2, y1+y2, z1+z2);
						else
							printf("\tIntroducir valor a los vectores\n");
						break;	
			case 4 : 
						if( flag1 && flag2 ){
							do{
								printf("\t\t1) Primer vector menos el segundo vector\n");
								printf("\t\t2) Segundo vector menos el primer vector\n");
								printf("\t\t3) Menu anterior\n");
						 		printf("\t\tOpcion : ");scanf("%d",&opcion);
								switch(opcion){
									case 1:
											printf("\t\tLa diferencia de vectores es  x: %d y: %d z: %d\n", x1-x2, y1-y2, z1-z2);
											break;
										case 2:
											printf("\t\tLa diferencia de vectores es  x: %d y: %d z: %d\n", x2-x1, y2-y1, z2-z1);
											break;
									case 3 : 
											printf("\t\tVolviendo al menu anterior.\n");
											break;
									default:
											printf("\t\tOPCION NO VALIDA\n");
											break;
								}
							}while( opcion!=3 );
						}else
							printf("\tIntroducir valor a los vectores\n");
						break;	
			case 5 : 
						if( flag1 && flag2 ){
							do{
								printf("\t\t1) Primer vector producto vectorial segundo vector\n");
								printf("\t\t2) Segundo vector productor vectorial primer vector\n");
								printf("\t\t3) Menu anterior\n");
						 		printf("\t\tOpcion : ");scanf("%d",&opcion);
								switch(opcion){
									case 1:
											printf("\t\tEl Producto vectorial es  x: %d y: %d z: %d\n", y1*z2 - z1*y2, -(x1*z2 - x2*z1), x1*y2 - x2*y1);
											break;
									case 2:
											printf("\t\tEl Producto vectorial es  x: %d y: %d z: %d\n", y2*z1 - y1*z2, -(x2*z1 - x1*z2), x2*y1 - x1*y2);
											break;
									case 3 : 
											printf("\t\tVolviendo al menu anterior.\n");
											break;
									default:
											printf("\t\tOPCION NO VALIDA\n");
											break;
								}
							}while( opcion!= 3 );
						}else
							printf("\tIntroducir valor a los vectores\n");
						break;
			case 6 : 
						if( flag1 && flag2 )
							printf("\tEl producto escalar es : %d\n", x1*x2 + y1*y2 + z1*z2);
						else
							printf("\tIntroducir valor a los vectores\n");
						break;
			case 7 :
						if( flag1 && flag2 ){
							cruz  = sqrt( pow( (y1*z2 - z1*y2), 2) + pow( (-(x1*z2 - x2*z1)),2) + pow((x1*y2 - x2*y1),2));
						 	punto = x1*x2 + y1*y2 + z1*z2;
							l1 = sqrt(x1*x1 + y1*y1 + z1*z1);
							l2 = sqrt(x2*x2 + y2*y2 + z2*z2);
							if( cruz >= 0){
								if( punto >= 0)
									printf("\tEl angulo es %f\n",asin(cruz/(l1*l2)));
								else	
									printf("\tEl angulo es %f\n",M_PI - asin(cruz/(l1*l2)));
							}else{
								if( punto < 0)	
									printf("\tEl angulo es %f\n",M_PI - asin(cruz/(l1*l2)));
								else
									printf("\tEl angulo es %f\n",2*M_PI + asin(cruz/(l1*l2)));
							}
						}
						else
							printf("\tIntroducir valor a los vectores\n");
						break;
			case 8 : 
						if( flag1 && flag2){
							do{
								printf("\t\t1) Longitud del primer vector\n");
								printf("\t\t2) Longitud del segundo vector\n");
								printf("\t\t3) Menu anterior\n");
						 		printf("\t\tOpcion : ");scanf("%d",&opcion);
								switch(opcion){
									case 1:
											printf("\t\tLa longitud es %f\n", sqrt(x1*x1 + y1*y1 + z1*z1));
											break;
									case 2:
											printf("\t\tLa longitud es %f\n", sqrt(x2*x2 + y2*y2 + z2*z2));
											break;
									case 3 : 
											printf("\t\tVolviendo al menu anterior.\n");
											break;
									default:
											printf("\t\tOPCION NO VALIDA\n");
											break;
								}
							}while( opcion!= 3 );	
						}
						break;
			case 9 : 
						printf("\n\t<<<<FINALIZANDO>>>\n\n");
						break;
			default : 
						printf("OPCION NO VALIDA.\n");
						break;
		}
	}while(opcion != 9);
}
