#include<stdio.h>
#include<stdlib.h>

int recuptaille(void);
int* alloctab(int);
void remplissage(int*, int);
void affichage(int*, int);
void liberation(int*);

void recuptailleV2(int*);
void allotabV2(int**, int);

void recuptaille2D(int);
void alloctabV3(int***, int);
void affichage2d(int**, int);
void liberation2D(int**);




int recuptaille(){
	int taille;
	printf("Entrez la taille du tableau :\n");
	scanf(" %d", &taille);
	return taille;
}

int* alloctab(int taille){
	int* tab= NULL;
	tab = (int*)malloc(sizeof(int)*taille);
	return tab;
}

void remplissage(int* adresse, int taille){
	int i=0;
	printf("Remplissez les %d cases du tableau svp\n", taille);
	for (i; i!=taille;i++){
		scanf("%d", &adresse[i]);
	}
}

void affichage(int* tab, int taille){
	int i = 0;
	for (i; i!= taille; i++){
		printf("case %d a pour valeur %d \n", &tab[i], tab[i]);
	}
}

void liberation(int* adresse){
	free(adresse);
}

void recuptailleV2(int* taille){
	printf("Entrez la taille du tableau :\n");
	scanf(" %d", taille);
	
}

void allotabV2(int** tableau, int taille){
	*tableau = (int*)malloc(sizeof(int)*taille);
}

int recuptaille2D(int taille){
	int taille;
	printf("Entrez la taille du tableau et de chaque sous-tableau :\n");
	scanf(" %d", &taille);
	return taille;
}

void alloctabV3(int*** tableau, int taille){
	*tableau = (int*)malloc(sizeof(int)*taille);
	int i=0;
	for(i;i!=taille;i++){
		(*tableau)[i] = (int*)malloc(sizeof(int)*taille);
	}
}

void affichage2d(int** tab, int taille){
	int i = 0;
	int j =0;
	for(i;i!=taille;i++){
		for(j;j!=taille;j++){
			printf("Sous-tableau case %d a pour valeurs: [%d]", i,tab[j]);
		}
	}
}

void liberation2D(int** tab){
	int i =0;
	for(i;i!=taille;i++){
		free((*tab)[i]);
	}
	free(tab);
}
