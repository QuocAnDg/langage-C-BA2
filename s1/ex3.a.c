#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main(){
	int fact = 1, a;
	while ((a = getchar()) != EOF){
		if (a == '\n') {
			continue;
		}
		printf("caractère : %c", a);
		a-='0'; // on veut les chiffres et getchar() prend les nombres ascii donc a = 31 donc a -= 30
		for (int i = 2; i <= a; i++){
                	fact = fact * i;
        	}
		 printf("factorielle de %d! = %d\n", a, fact);
		fact = 1;

	}
	return 0;
}
