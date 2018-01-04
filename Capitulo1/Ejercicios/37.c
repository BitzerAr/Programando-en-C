#include<stdio.h>
#include<math.h>

int main(void){
	int a, b;
	printf("a : "); scanf("%d", &a);
	printf("b : "); scanf("%d", &b);

	if( pow(a,2) == b ) printf("El segundo es el cuadrado exacto del primero.\n");
	else if( pow(a,2) > b ) printf("El segundo es menor que el cuadrado del primero.\n");
	else printf("El segundo es mayor que el cuadrado del primero.\n");
	
	return 0;
}
