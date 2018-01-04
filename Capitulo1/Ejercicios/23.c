#include<stdio.h>
int main(void){
	int w, h;
	
	printf("Lado1 : "); scanf("%d",&w);
	printf("Lado2 : "); scanf("%d",&h);
	printf("Perimetro : %d\nArea : %d\n", 2*w + 2*h, w*h);
	return 0;
}
