#include <stdio.h>
#include<stdlib.h>
#define CASE_ROND 'O'
#defiwne CASE_CROIX 'X'
#define CASE_VIDE '.'
int main()
{
    int H, L;
    printf("Hauteur = ? ");
    scanf("%d", &H);
    printf("Largeur = ? ");
    scanf("%d", &L);
    char **m;
    m = (char**) malloc(H * sizeof(char*));
    if (m == NULL) exit(1);
    for (int i = 0; i < H; i++) {
        m[i] = (char*) malloc(L * sizeof(char));
        if (m[i] == NULL) exit(1);
    }
      for (int i = 0; i < H; i++) {
        for (int j = 0; j < L; j++) {
            m[i][j] = '.';
            printf("%c ", m[i][j]);
        }
        printf("\n");
    }
    int input;
    int joueur = 1;
    do {
        if (joueur == 1){
             printf("Colonne joueur X ? ");
        }
        else{
            printf("Colonne joueur O ? ");
        }
        scanf("%d", &input);
        if (input > L){
            
            for (int i = 0; i < H; i++) {
                    m[i] = (char*)realloc(m[i],input*sizeof(char));
                    if (m[i] == NULL) exit(1);
            }

            for (int i = 0; i < H; i++) {
                for (int j = L; j < input; j++) {
                    m[i][j] = CASE_VIDE;
                }
            }
            L = input;
                
        }
        if (input < 0){
             for (int i = 0; i < H; i++) {
                    m[i] = (char*)realloc(m[i],(-1*input)*sizeof(char));
                    if (m[i] == NULL) exit(1);
            }
            L = -1*input;
        }
        for (int i = 0; i < H; i++){
            if (m[H-1-i][input-1] == '.'){
                if (joueur == 1){
                    m[H-1-i][input-1] = CASE_CROIX;
                    joueur += 1;
                    break;
                }
                else{
                    m[H-1-i][input-1] = CASE_ROND;
                    joueur -= 1;
                    break;
                }
            }
        }
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < L; j++) {
                printf("%c ", m[i][j]);
            }
        printf("\n");
        }
        
       
    }while (input != 0);
    for (int i = 0; i < H; i++)
        free(m[i]);
        
    free(m);
    return 0;
    
}

