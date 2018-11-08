#include<stdio.h>
#include<stdlib.h>


int recuptaille(void);
void alloctabV3(char***, int);
void remplissage(char*, int);
void affichage2d(char**, int);
void liberation2D(char**, int);

typedef struct Lesmots{
	char** adresse;
	int nombremots;
}Lesmots;

int recuptaille(){
	int taille;
	printf("Entrez la taille du tableau :\n");
	scanf(" %d", &taille);
	return taille;
}

void alloctabV3(char*** tableau, int taille){
	*tableau = (char*)malloc(sizeof(char)*taille);
	int i=0;
	for(i;i!=taille;i++){
		(*tableau)[i] = (char*)malloc(sizeof(char)*taille);
	}
}

void remplissage(char* adresse, int taille){
	int i=0;
	printf("Remplissez les %d cases du tableau svp\n", taille);
	for (i; i!=taille;i++){
		scanf("%c", &adresse[i]);
	}
}

void affichage2d(char** tab, int taille){
	int i = 0;
	int j =0;
	for(i;i!=taille;i++){
		for(j;j!=taille;j++){
			printf("Sous-tableau case %d a pour valeurs: [%c]", i,tab[j]);
		}
	}
}

void liberation2D(char** tab, taille){
	int i =0;
	for(i;i!=taille;i++){
		free((*tab)[i]);
	}
	free(tab);
}

