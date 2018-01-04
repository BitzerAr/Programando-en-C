#include<stdio.h>

int main(void){
	int d;
	printf("Dinero : "); scanf("%d", &d);
	
	if( d >= 500){
		printf("%d billetes de 500.\n", d/500);
		d = d%500;
	}
	if( d >= 200 ){
		printf("%d billetes de 200.\n", d/200);
		d = d%200;
	}
	if( d >= 100 ){
		printf("%d billetes de 100.\n", d/100);
		d = d%100;
	}
	if( d >= 50 ){
		printf("%d billetes de 50.\n", d/50);
		d = d%50;
	}
	if( d >= 20 ){
		printf("%d billetes de 20.\n", d/20);
		d = d%20;
	}
	if( d >= 10 ){
		printf("%d billetes de 10.\n", d/10);
		d = d%10;
	}
	if( d >= 5 ){
		printf("%d monedas de 5.\n", d/5);
		d = d%5;
	}
	if( d >= 2){
		printf("%d monedas de 2.\n", d/2);
		d = d%2;
	}
	if( d>= 1){
		printf("%d monedas de 1.\n", d/1);
	}
}
