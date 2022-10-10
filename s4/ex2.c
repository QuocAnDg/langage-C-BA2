#include <stdio.h>
#include <stdlib.h>

int main(){
	int etape = 1, n;
	do{
	printf("round %d\n", etape);
	int *tab1 = NULL, *tab2=NULL;
        scanf("%d", &n);
        tab1 =(int*) malloc(sizeof(int)*n);
        tab2 = (int*)malloc(sizeof(int)*n);
	int* ptr = tab1, *ptr2 = tab2;
        int j=0,k=0;
	for (int i = 0; i < n; i++){
		int nbr;
		scanf("%d", &nbr);
		if (nbr >= 0){
			*(ptr) = nbr;
			ptr++;
			j++;
		}
		else{
			*(ptr2) = nbr;
			ptr2++;
			k++;
		}
	}
	
	for (int i = 0 ; i < j; i++){
		printf("%d ", tab1[i]);
	}
	printf("\n");
	for (int i = 0; i < k; i++){
                printf("%d ", tab2[i]);
        }
	printf("\n");
	free(tab1);
	free(tab2);
	etape++;
	}while(n>0);	
	return 0;
}
