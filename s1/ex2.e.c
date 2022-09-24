#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    printf("entrez un nombre : ");
    scanf("%d", &a);
    if (a<= 0){
        printf("le nombre %d n'est pas strictement positif\n", a);
        return 0;
    }
    for (int i = 1; i <= a; i++) {
        if (a % i == 0){
            printf("diviseur : %d\n", i);
        }
    }

    return 0;
}
