#include<stdio.h>
#include<math.h>
int main(void){
	double num, flag;
	printf("Num binary : ");
	scanf("%lf",&num);
	flag = num;
	while( flag>0 ){
		if( (int)flag%10 < 2 )
			flag = flag/10;
		else{
			printf("Error contiene digitos diferentes a 1 y 0\n");
			printf("Num binary : ");
			scanf("%lf",&num);
			flag = num;
		}
	}
	int d = 0;
	int i=0;
	while(num>0){
		flag = (int)num%10;
		d += flag*pow(2,i); 
		num = num/10;
		++i;
	}
	printf("Num decimal : %d", d);
	return 0;
}
