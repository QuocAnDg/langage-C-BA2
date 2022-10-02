#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 26
int main() {
    int m, n;
    printf("veuillez entrez le nombre de lignes : ");
    scanf("%d", &m);
    printf("veuillez entrez le nombre de colonnes : ");
    scanf("%d", &n);
    char tab[m][n]; // ligne par ligne 
    char tab2[m][n]; // colonne par colonne
    char tab3[m][n]; // ligne par ligne lettre au hasard

    char a = 'A';
    char b = 'A';
    printf("\n");
    // remplissage ligne par ligne
    for (int i = 0; i < m; i++){
         for (int j = 0; j < n; j++){
            if (a > 'Z'){
                 a = 'A';
             }
             tab[i][j] = a;
             printf("%c ", tab[i][j]);
             a++;
         }
        printf("\n");
    }
    printf("\n");
    //remplissage colonne par colonne
    for (int i = 0; i < n; i++){
         for (int j = 0; j < m; j++){
            if (b > 'Z'){
                 b = 'A';
             }
             tab2[j][i] = b;
             b++;
         }
    }
    // affichage deuxieme table
    for (int i = 0; i < m; i++){
         for (int j = 0; j < n; j++){
            printf("%c ", tab2[i][j]);
         }
        printf("\n");
    }
    printf("\n");
    //affichage des mêmes valeurs des deux tabs
    for (int i = 0; i < m; i++){
         for (int j = 0; j < n; j++){
            if (tab[i][j] == tab2[i][j]){
                printf("%c en ligne %d et colonne %d\n", tab[i][j], i, j);
            }
         }
    }
    printf("\n");
    //remplissage ligne par ligne lettre au hasard
    for (int i = 0; i < m; i++){
         for (int j = 0; j < n; j++){
                int aleatoire = 65 + (int) (rand() / (RAND_MAX + 1.0) * (90 - 65 + 1));
             tab3[i][j] = (char)aleatoire;
             printf("%c ", tab3[i][j]);
         }
        printf("\n");
    }
    int recurrences[m][N];
     for (int i = 0; i < m; i++){
        for (int j = 0; j < N; j++){
            recurrences[i][j] = 0;
        }
     }
     
    // affichage reccurence
    printf("          ");
    for (char a = 'A'; a <= 'Z'; a++){
        printf("%c ", a);
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            int ascii = tab3[i][j] -65;
            recurrences[i][ascii]+= 1;
        }
    }
     for (int i = 0; i < m; i++){
        printf("\nligne %d : ", i+1);
        for (int j = 0; j < 26; j++){
            printf("%d ", recurrences[i][j]);
        }
    }
    printf("\n");
    return 0;
}
