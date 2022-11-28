#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>
#define TAILLE 256
void impTable (char ** t, int sz);
void impTable (char ** t, int sz){
    for (int i = 1; i < sz; i++) {
        assert(strlen(t[i]) != 0);
    }
    for (int i = 1; i < sz; i++) {
        printf("%d) %s\n",i,t[i]);
    }
}

int main(int argc, char *argv[])
{
    
    char ligne[TAILLE];
    int nonTrouves = 0;
   impTable(argv,argc);
    while (fgets(ligne, TAILLE, stdin) != NULL){
        if (strlen(ligne) > 27){
            fflush(stdin);
        }
        int a = 1;
        char tmp[strlen(ligne)];
        strcpy(tmp, ligne);
        if (tmp[strlen(tmp)-1] == '\n'){
            tmp[strlen(tmp)-1] = 0;
        }
        printf("%s(longueur %d)\n", tmp, (int) strlen(ligne));
        for (int i = 1; i < argc; i++) {
            int value = strcmp(tmp, argv[i]);
            if (value == 0){    
                a = 0;
                printf("présent\n");
                break;
            }
        }
        if ( a == 1){
            nonTrouves++;
            printf("absent\n");
            a = 0;
        }
    }
    printf("mots non trouvés : %d", nonTrouves);
    return 0;
}