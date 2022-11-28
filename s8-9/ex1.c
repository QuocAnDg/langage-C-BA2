#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LONG 27  // longueur maximale d'un mot

int main (int argc, char* argv[]) {
    int nbMots = argc - 1;

    // copie des arguments de la ligne de commande
    char** tabMots = (char**) malloc(nbMots * sizeof(char*));
    if (!tabMots) { perror("erreur d'allocation mémoire"); exit(1); }
	
    for (int i=0; i<nbMots; i++) {
        tabMots[i] = (char*) malloc((strlen(argv[i+1])+1) * sizeof(char));
        if (!tabMots[i]) { perror("erreur d'allocation mémoire"); exit(1); }
		
        strcpy(tabMots[i],argv[i+1]);
        // Attention! l'instruction suivante est une copie superficielle ('shallow copy'
        // --> deux variables partagent le même bloc de mémoire):
        //     tabMot[i] = argv[i+1]
        // elle provoque également une fuite mémoire (perte de l'adresse du bloc alloué via malloc)
        // La fonction strcpy() réalise bien une copie profonde ('deep copy') dans le bloc 
        // de mémoire alloué dynamiquement
        
        // mise en majuscules
        for (int j=0; j<strlen(tabMots[i]); j++)
            tabMots[i][j] = toupper((unsigned char)tabMots[i][j]);
    }

    // affichage du tableau des mots en majuscules
    for (int i=0; i<nbMots; i++){
        printf("%s ", tabMots[i]);
    }
    printf("\n");
    // affichage du tableau des arguments
    for (int i=0; i<nbMots; i++){
        printf("%s ", argv[i+1]);
    }
    printf("\n");
    
    // libération de la mémoire
    for (int i=0;i<nbMots;i++)
        free(tabMots[i]);
    free(tabMots);
}
