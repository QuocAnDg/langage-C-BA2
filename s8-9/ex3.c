/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define TAILLE 256
#define n 6
#define m 100
int main(int argc, char *argv[])
{
    char ligne[TAILLE];
    int taillePhy = 0;
    char **tabDyn = (char**)malloc(n*sizeof(char*));
    for (int i=0; i<n; i++) {
        tabDyn[i] = (char*)malloc((m+1)*sizeof(char));
    }

    while (fgets(ligne, TAILLE, stdin) != NULL){
        int find = 1;
        if (ligne[strlen(ligne)-1] == '\n'){
            ligne[strlen(ligne)-1] = 0;
        }
        for (int i = 0; i < n; i++) {
            if (strncmp(tabDyn[i], ligne, 5) == 0){
                char substr[strlen(ligne)-5];
                strncpy(substr, ligne+5, strlen(ligne)-4);
                substr[strlen(substr)] = '\0';
                strcat(tabDyn[i], substr);
                find = 0;
                break;
                
            }
        }
        if (find == 1){
            strcpy(tabDyn[taillePhy], ligne);
            taillePhy++;
        }
        
    }
    for (int i = 0; i < taillePhy; i++){
        printf("%s\n", tabDyn[i]);
    }

    
    return 0;
}
