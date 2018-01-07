#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct Punto{
	float x, y;
};

struct Poligono{
	struct Punto *p;
	int puntos;
};

struct Poligono lee_poligono(void){
	int i;
	struct Poligono pol;

	printf("Numero de puntos : "); scanf("%d", &pol.puntos);
	pol.p = malloc( pol.puntos * sizeof(struct Punto));
	for( i=0 ; i<pol.puntos; i++){
		printf("Punto %d\n", i);
		printf("x : "); scanf("%f", &pol.p[i].x);
		printf("y : "); scanf("%f", &pol.p[i].y);
	}

	return pol;
}

void libera_poligono(struct Poligono * pol){
	free(pol->p);
	pol->p = NULL;
	pol->puntos = 0;
}

float perimetro_poligono(struct Poligono pol){
	int i;
	float perim = 0.0;

	for( i=0 ; i<pol.puntos; i++)
		perim += sqrt((pol.p[i].x-pol.p[i-1].x)*(pol.p[i].x-pol.p[i-1].x) + (pol.p[i].y-pol.p[i-1].y)*(pol.p[i].y-pol.p[i-1].y));
	
	perim += sqrt((pol.p[pol.puntos-1].x-pol.p[0].x)*(pol.p[pol.puntos-1].x-pol.p[0].x) + (pol.p[pol.puntos-1].y-pol.p[0].y)*(pol.p[pol.puntos-1].y-pol.p[0].y));
	
	return perim;
}

int main(void){
	struct Poligono un_poligono;
	float perimetro;
	
	un_poligono = lee_poligono();
	perimetro = perimetro_poligono(un_poligono);
	printf("Perimetro %f\n", perimetro);
	libera_poligono( &un_poligono);
	return 0;
}
