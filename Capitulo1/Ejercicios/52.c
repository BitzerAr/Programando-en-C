#include<stdio.h>
#include<math.h>

int main(){
	float i, j;
	int flag1, flag2;
	for(i=0 ; i<= 360 ; i+=15){
		flag1=sin(i/180*M_PI)*10;
		flag2=cos(i/180*M_PI)*10;
		for(j=-10 ; j < 10 ; j+=1){
			if(flag1 == j) printf("*");
			else printf(" ");
			if(flag2 == j) printf("+");
			
		}
		printf("\n");
	}
		
	return 0;	
}
