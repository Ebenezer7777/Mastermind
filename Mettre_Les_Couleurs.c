#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include "conio.h"

 // FONCTION DE SAISIE DE LA COMBINAISON
    void saisie (int ROW, int essai[COUP_MAX][NB_CHIFFRE]) {
        FILE* fichier=NULL;

        int n;


        fichier = fopen("Mastermind.txt","w+");

        if(fichier != NULL){

            do {

            char chaine[20];
            Color(BLUE,BLACK);
            printf("\n VOTRE PROPOSITION  [4 COULEURS SEPAREES ''] ?: ");
            fputs("\n VOTRE PROPOSITION  [4 COULEURS SEPAREES ''] ?: ",fichier);
            Color(GREEN,BLACK);
            fgets(chaine,sizeof chaine,stdin);
            n = sscanf(chaine, "%d %d %d %d %d", &essai[ROW][0], &essai[ROW][1], &essai[ROW][2], &essai[ROW][3] );
            fprintf(fichier,"%d %d %d %d %d\n",essai[ROW][0] , essai[ROW][1], essai[ROW][2], essai[ROW][3]);
            //clean(chaine);
            Color(WHITE,BLACK);

                if (n != NB_CHIFFRE || essai[ROW][0]>5 || essai[ROW][1]>5 || essai[ROW][2]>5 || essai[ROW][3]>5){
                    puts("ERREUR \n");}



            }
            while (n != NB_CHIFFRE || essai[ROW][0]>5 || essai[ROW][1]>5 || essai[ROW][2]>5 || essai[ROW][3]>5);
        fclose(fichier);
    }
}
