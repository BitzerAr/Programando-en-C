#include<stdio.h>

int main(void){
	int num;
	
	printf("Numero : ");
  	scanf("%d", &num);
	do{
		if( num %2 == 0 ){
			num /= 2;
			printf("%d ",num);
		}
		else if( num %2 != 0 ){
			num = num*3 + 1;
			printf("%d ", num);
		}
			
	}while( num != 1 );
	
	return 0;
}
