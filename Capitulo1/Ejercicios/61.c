#include<stdio.h>

int main(void){
	int n, m;
	int flag;

	printf("n : "); scanf("%d", &n);
	printf("m : "); scanf("%d", &m);
	if( n > m){
		printf("Si n >m, estos intercambiaran valores.\n");
		flag = n;
		n = m;
		m = flag;
		printf("n : %d\n", n); 
		printf("m : %d\n", m); 	
	}	
	int i;
	float s=0;

	for( i = n; i <= m; i++)
		s += 1.0/i;	

	printf("El valor de la sumatoria es : %.3f\n", s);

	return 0;
}
