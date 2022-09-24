#include <stdio.h>
#include <stdlib.h>

int main(){
	for (char i = 'A'; i <= 'Z' ; i++){	
		printf("Caractère= %c ", i);
		printf("code dec. = %d ", i);
		printf("code hex. = %x\n", i);
	}
	for (char i = '1'; i <= '9' ; i++){
		printf("Caractère= %c ", i);
                printf("code dec. = %d ", i);
                printf("code hex. = %x\n", i);
	}
}
