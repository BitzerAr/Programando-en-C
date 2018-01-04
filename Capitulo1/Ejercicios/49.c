#include<stdio.h>
int main(){
	int n, m;
	long long f1, f2, f3;
	int i;
	printf("n : ");scanf("%d",&n);
	printf("m : ");scanf("%d",&m);
	printf("Si m > n intercambiaran valores.\n");
	if( m > n ){
		f1 = n;
		n = m;
		m = f1;	
		printf("n : %d\n",n);
		printf("m : %d\n",m);
	}	
	
	f1 = f2 = f3 = 1;
	for(i = 1 ; i <= n ; i++){
		f1 *= i;
		if( i <= m)
			f2 *= i;
		if( i <= n-m )
			f3 *= i;
	}
	
	printf("\nCombinatoria de n elementos tomados de m en m es : %lld\n\n", f1/(f3*f2));
}
