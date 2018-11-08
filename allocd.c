#include<stdio.h>
#include<stdlib.h>
#include<allocd.h>

int main (void){
	system("clear");
	printf("Allocation v1 :\n");
	int taille = recuptaille();
	int* adresse = alloctab(taille);
	remplissage(adresse, taille);
	affichage(adresse, taille);
	liberation(adresse);
	
	printf("Allocation v2 :\n");
	int* tab = NULL;
	int taille2;	
	recuptailleV2(&taille2);
	allotabV2(&tab, taille2);
	remplissage(tab, taille2);
	affichage(tab, taille2);
	liberation(tab);
	
	printf("Allocation v2 tableau 2D :\n");
	int**tab2=NULL;
	int taille3=recuptaille();
	alloctabV3(&tab2 ,taille3);
	int i = 0;
	for(i;i!=taille3;i++){
		remplissage((*tab2)[i], taille3);
	}
	affichage2d(tab2, taille3);
	liberation2D(tab2);
	return 0;
}






