#include<stdio.h>
#include<math.h>

int main(){
	float i, j;
	int flag;
	for(i=0 ; i<= 360 ; i+=15){
		for(j=-10 ; j < 10 ; j+=1){
			flag=sin(i/180*M_PI)*10;
			if(flag == j) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
		
			
}

