#include <stdio.h>
#include <stdlib.h>

int main(){
	float a;
	float b;
	printf("valeur 1 : ");
	scanf("%f", &a);
	printf("\nvaleur 2 : ");
	scanf("%f", &b);
	float res;
	res = a * b;
	printf("\nresultat de a*b est : %f\n", res);
}
