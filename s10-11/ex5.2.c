/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>
#define MAX_LONG 27 
int litEtValideChaine (char* inv, char* s, int sz);

int litEtValideChaine (char* inv, char* s, int sz){
    printf("%s", inv);
    char ligne[MAX_LONG+2];
    while (fgets(ligne, MAX_LONG+2, stdin) != NULL && strlen(ligne) -1 < sz) {
        int taille = strlen(ligne)-1;

        // Variante 1: traitement du cas où le mot entré est trop long
        if (ligne[taille] != '\n') {
        	printf("Erreur: le mot entré est trop long.\n");

        	// vidage du buffer stdin
        	while (fgets(ligne, MAX_LONG+2, stdin) && ligne[strlen(ligne)-1] != '\n') ;
            
        	continue;
        }
        
    }    
    ligne[strlen(ligne)] = '\0';
    return strlen(ligne) - 1 ;
}
int main()
{
    char* inv = "Veuillez entrez une chaîne de caractère plus grand que sz : \n";
    char* s;
    int sz = 3;
    printf("%d\n", litEtValideChaine(inv, s, sz));

    return 0;
}
