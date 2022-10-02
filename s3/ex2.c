#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n;
    do{
	printf("veuillez entrez un nombre entre 2 à 100 : ");
       	scanf("%d", &n);

    }while(n > 100 || n < 2);
    int premiers[n];
    int a = 0;
    for (int i = 2; i <= n; i++){
        premiers[a] = i;
        a++;
    } 
    for (int k = 2;k <= sqrt(n); k++){
    
        for (int j = 0; j < n; j++){
            if (premiers[j] == 0){
                continue;
            }
            if (premiers[j] % k == 0 && premiers[j] != k){
                premiers[j] = 0;
            }
        }
    }
    for (int i = 0; i < a; i++){
        if (premiers[i] == 0){
            continue;
        }
        printf("nbr premier : %d\n", premiers[i]);
    }
    return 0;
}
