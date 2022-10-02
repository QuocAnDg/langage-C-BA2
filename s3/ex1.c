#include <stdio.h>
#include <stdlib.h>
#define NB 50
int main(){
	float moyenne, ecartMoy, variance;
	int nbrEleves = 0;
	float eleves[NB];
	while(nbrEleves < 50){
		float cote;
		printf("cote de l'élève %d : ", nbrEleves);
		if (scanf("%f", &cote) <= 0){ // CTRL + D ARRET
                        break;
                }
                eleves[nbrEleves] = cote;
		printf("%d", eleves[nbrEleves]);
                moyenne += eleves[nbrEleves];
		nbrEleves++;
	}
	printf("\nnombre d'élèves : %d\n", nbrEleves);
	moyenne /= nbrEleves;
	printf("\nmoyenne de la classe : %f\n", moyenne);
	for (int j = 0; j < nbrEleves; j++){
		float ecartMoy = eleves[j] - moyenne;
		printf("ecart moyenne %d : %f\n", j+1, ecartMoy);
		variance += ecartMoy*2;
	}
	variance /= nbrEleves;
	printf("variance : %f\n", variance);
	return 0;
}
