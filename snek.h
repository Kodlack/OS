#include <stdio.h>
#include <stdlib.h>

void afficher_menu(void);
void lancer_jeu(void);
void consulter_resultat(void);
void quitter_jeu(void);


afficher_menu(void){
	system("clear");
	char touche;
	printf("Bienvenue dans le jeu Snek\n");
	printf("Pour jouer, appuyez sur la touche j.\nPour consulter les meilleurs scores, appuez sur la touche s.\nPour quitter le jeu, appuyez sur la touche q.\n")
	scanf(" %c", &touche);
	while(1){
		if(touche == 'j'){
			lancer_jeu();
		}
	
		if(touche == 's'){
			consulter_resultat();
		}
	
		if(touche == 'q'){
			quitter_jeu();
		}
	
		else{
			printf("Mauvaise entree, appuyez sur une bonne touche...")
		}
	}
}

consulter_resultat(void){



}

quitter_jeu(void){


}
