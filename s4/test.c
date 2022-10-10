#include <stdio.h>
#include <stdlib.h>

int main(){
	int x = 1;
	int y = 1;
	int t[4] = {3,4};
	int *ptr2 = t;
	int *ptr1 = &x;
	(*ptr1)++;
	ptr2++;
	*(t+y) = *ptr1;
	ptr1 = ptr2 + x;
	ptr1 = &(t[x+1]);
	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d\n", ptr1);
	printf("%d\n", ptr2);
	
	for (int i = 0; i < 4; i++){
		printf("euh %d\n",t[i]);
	}
	printf("\n");
	y = (*ptr1)++;
	printf("%d\n", x);
        printf("%d\n", y);
        printf("%d\n", ptr1);
        printf("%d\n", ptr2);
	for (int i = 0; i < 4; i++){
                printf("euh %d\n",t[i]);
        }
	x = ptr1-t;
	printf("\n");
	printf("%d\n", x);
        printf("%d\n", y);
        printf("%d\n", ptr1);
        printf("%d\n", ptr2);
        for (int i = 0; i < 4; i++){
                printf("euh %d\n",t[i]);
        }




}
