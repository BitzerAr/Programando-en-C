#include<stdio.h>
int main(void){
	int num;
	long long fac;
	printf("Num : "); scanf("%d",&num);
	int i;
	fac = 1;
	for( i =1 ; i<=num; i++)
		fac = fac *i;
	
	printf("Factorial de %d es %lld\n", num, fac);
}
