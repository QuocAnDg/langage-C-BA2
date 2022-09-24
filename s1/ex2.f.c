#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b, quotient = 0;
	printf("entrez le premier nombre : ");
	scanf("%d", &a);
	printf("entrez le deuxième nombre : ");
	scanf("%d", &b);
	if (b > a){
		int c = a;
		a = b;
		b = c;
	}
	if (b == 0){
		printf("nombre vaut 0\n");
		return 0;
	}
	while (a >= b){
		a-=b;
		quotient++;
	}
	printf("quotient = %d et reste = %d\n", quotient, a);
}
