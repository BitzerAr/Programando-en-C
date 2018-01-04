#include<stdio.h>
#include<math.h>

int main(void){
	int a, b, c;
	float s;
	printf("a : "); scanf("%d", &a);
	printf("b : "); scanf("%d", &b);
	printf("c : "); scanf("%d", &c);

	s = (a + b + c) / 2.0;
	printf("Area : %f\n",(float)sqrt(s * (s-a) * (s-b) * (s-c)));

	return 0;
}
