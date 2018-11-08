#include<stdio.h>
#include<stdlib.h>
#include"pendu.h"

int main (void){
	system("clear");
	printf("Creation d'un jeu...\n");
	char** tab = NULL;	
	Lesmots ensemble;
	ensemble.nombremots = recuptaille();
	ensemble.adresse = alloctabV3(tab, ensemble.nombremots);
	printf("Remplissage du tableau :\n");
	remplissage(ensemble.adresse, ensemble.nombremots);
	return 0;
}
