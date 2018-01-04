#include<stdio.h>
#include<stdlib.h>
int main(void){

	int a, b;
	int dis, min;
	printf("Numero1 : ");
	scanf("%d", &a);
	printf("Numero2 : ");
	scanf("%d", &b);
	dis = abs(a-b);
	min = b;
	printf("Numero3 : ");
	scanf("%d", &b);
	if( dis > abs(a-b)){
		dis = abs(a-b);
		min = b;
	}
	printf("Numero4 : ");
	scanf("%d", &b);
	if( dis > abs(a-b)){
		dis = abs(a-b);
		min = b;
	}	
	printf("Numero5 : ");
	scanf("%d", &b);
	if( dis > abs(a-b)){
		dis = abs(a-b);
		min = b;
	}

	printf("Numero mas cercano es %d \n", min);

	return 0;		
}
