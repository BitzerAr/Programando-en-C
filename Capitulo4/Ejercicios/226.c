#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define R 1
struct Punto{
	float x, y;
};

struct Poligono{
	struct Punto *p;
	int puntos;
};

void lee_poligono_regular(struct Poligono * pol){
	int i;
	printf("Numero de puntos : "); scanf("%d", &pol->puntos);
	pol->p = malloc(pol->puntos * sizeof(struct Punto));
	for(i=0; i<pol->puntos; i++){
		printf("\nPunto %d : \n", i);
		pol->p[i].x = R*cos(i*2*M_PI/pol->puntos);
		pol->p[i].y = R*sin(i*2*M_PI/pol->puntos);
		printf("\t x : %f", pol->p[i].x);
		printf("\t y : %f", pol->p[i].y );
	}
}

void libera_poligono(struct Poligono * pol){
	free(pol->p);
	pol->p = NULL;
	pol->puntos = 0;
}

float perimetro_poligono(struct Poligono * pol){
	int i;
	float perim = 0.0;
	
	for( i=1; i<pol->puntos ; i++)
		perim += sqrt((pol->p[i].x-pol->p[i-1].x) * (pol->p[i].x-pol->p[i-1].x) + (pol->p[i].y-pol->p[i-1].y) * (pol->p[i].y-pol->p[i-1].y));
	perim += sqrt((pol->p[pol->puntos-1].x-pol->p[0].x) * (pol->p[pol->puntos-1].x-pol->p[0].x) + (pol->p[pol->puntos-1].y-pol->p[0].y) * (pol->p[pol->puntos-1].y-pol->p[0].y));
	return perim;
}

void crea_poligono(struct Poligono * pol){
	float perim ;
	int j;	
	pol->puntos = 3;
	do{
		pol->p = malloc(pol->puntos * sizeof(struct Punto));
		for(j=0; j<pol->puntos; j++){
			pol->p[j].x = R*cos(j*2*M_PI/pol->puntos);
			pol->p[j].y = R*sin(j*2*M_PI/pol->puntos);
		}
		perim = perimetro_poligono(pol);
		
		(pol->puntos)++;
		if( perim>2*M_PI){
			printf("En %d lados tiene mas proximitud 2*PI\n", pol->puntos);
			printf("Siendo su perimetro : %f\n", perim);	
		}
	}while(perim<2*M_PI);	
	
}
int main(void){
	struct Poligono un_poligono, pr;
	//struct Poligono pr;
	float perimetro;

	lee_poligono_regular(&un_poligono);
	perimetro = perimetro_poligono(&un_poligono);
	printf("\nPerimetro %f\n", perimetro);
	crea_poligono(&pr);
	libera_poligono(&un_poligono);
	libera_poligono(&pr);
	return 0;
}
