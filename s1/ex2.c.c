#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b, c;
	printf("valeur 1: ");
	scanf("%d", &a);
	printf("valeur 2: ");
	scanf("%d", &b);
	c = a;
	a = b;
	b = c;
	printf("valeur de a : %d\n", a);
	printf("valeur de b : %d\n", b);
}
