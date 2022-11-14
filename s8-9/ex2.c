#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define TAILLE 256
int main(int argc, char *argv[])
{
    char ligne[TAILLE];
    int nonTrouves = 0;
    for (int i = 1; i < argc; i++) {
        printf("%d) %s\n",i,argv[i]);
    }
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