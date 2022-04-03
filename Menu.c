#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include "conio.h"



void menu()
    {
    int choix;
    int essai[COUP_MAX][NB_CHIFFRE] = {{0}};            // Tableau conteant les combinaisons essayees
    char res[COUP_MAX][NB_CHIFFRE];                     // Tableau contenant les resultats de chaques combinaisons
    int code[NB_CHIFFRE] = {0};                         // Tableau contenant le code a decouvrir
    int chiffre[2][6] = {{0,1,2,3,4,5},{0}};   // Tableau de controle des valeurs jouees
    int bon;
    int ROW;                                            // Indique la ligne en cours de traitement
    int coup;                                           // Indique le nombre de coup joue
    int i;
    coup = 1;
    ROW = 0;
    //system ("CLS");
    Color(YELLOW,BLACK);
    printf("********  ** ****** *    ** **      ** ****** *    ** **  ** ******     ****         *      *    ** ******\n");
    printf("********* ** ****** **   ** **      ** ****** **   ** **  ** ******     *****      ** **    **   ** ******\n");
    printf("**     ** ** **     ***  **  **    **  **     ***  ** **  ** **         **   *    **   **   ***  ** *       \n");
    Color(RED,BLACK);
    printf("*******   ** *****  ** * **    ** **   *****  ** * ** **  ** *****      **    *  **     **  ** * ** ******\n");
    printf("**     ** ** **     **  ***     ***    **     **  *** **  ** **         **    *  *********  **  ***      *\n");
    printf("********* ** ****** **   **     ***    ****** **   ** ****** ******     ******  **       ** **   ** ******\n");
    printf("********  ** ****** **    *      *     ****** **    * ****** ******     *****   **       ** **    * ******\n");
    printf("\n\n");
    Color(GREEN,BLACK);
    printf("\t\t**     **      *      ****** ****** ****** ****** **     ** ** *    ** ****\n");
    printf("\t\t***   ***    ** **    ****** ****** ****** **  ** ***   *** ** **   ** *****\n");
    printf("\t\t** *** **   **   **   *        **   *      *****  ** *** ** ** ***  ** **   *\n");
    Color(GREY,BLACK);
    printf("\t\t**  *  **  **     **  ******   **   *****  ****** **  *  ** ** ** * ** **    *\n");
    printf("\t\t**     **  *********       *   **   *      **  ** **     ** ** **  *** **    *\n");
    printf("\t\t**     ** **       ** ******   **   ****** **  ** **     ** ** **   ** ******\n");
    printf("\t\t**     ** **       ** ******   **   ****** **  ** **     ** ** **    * *****\n");


    printf ("\n");
Color(BLUE,BLACK);
    printf ("\t \t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf ("\t \t\t\t\t%c                       %c\n",186,186);
    printf ("\t1\t\t\t\t%c  Demarrer une partie  %c\n",186,186);
    printf ("\t \t\t\t\t%c                       %c\n",186,186);
    printf ("\t \t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
Color(YELLOW,BLACK);
    printf ("\t \t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf ("\t \t\t\t\t%c                       %c\n",186,186);
    printf ("\t2\t\t\t\t%c          Aide         %c\n",186,186);
    printf ("\t \t\t\t\t%c                       %c\n",186,186);
    printf ("\t \t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
Color(RED,BLACK);
    printf ("\t \t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf ("\t \t\t\t\t%c                       %c\n",186,186);
    printf ("\t3\t\t\t\t%c    Quitter le jeu     %c\n",186,186);
    printf ("\t \t\t\t\t%c                       %c\n",186,186);
    printf ("\t \t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    printf("\n\n");
Color(GREEN,BLACK);

    printf ("Aller A ----->    ");
    scanf("%d",&choix);
    printf("\n");

       system("cls");
    switch (choix)
        {
            case  1 :
                        // initialise le tableau RES & CODE
                        init_res (res);
                        // Generation du code aleatoire
                        srand(time(NULL));
                        for (i = 0; i < NB_CHIFFRE; i++) {
                            code[i] = hasard();
                            printf("%d ", code[i]);
                        }
                        // Affichage du menu
                        affichage(MENU,0,res,code,essai);
                        // Test de l'essai


                        Affichage_Init(ROW);
                        system("PAUSE");

                        do {

                            printf("\n\n\n");
                            saisie(ROW,essai);
                            bon = 0;
                            teste(ROW,&bon,res,code,essai,chiffre);     // On teste le code entré
                            system("cls");
                            affichage(MENU,0,res,code,essai);
                            affichage(RESULTAT,ROW,res,code,essai);     // On affiche le code essaye et son resultat


                            raz_chiffre(chiffre); // On reinitialise le tableau de controle
                            //ROW++;
                            coup++;

                        }

                        while (bon != NB_CHIFFRE && coup <= COUP_MAX);
                        if (bon == NB_CHIFFRE)
                            affichage(GAGNE,0,res,code,essai);
                        else
                            affichage(PERDU,0,res,code,essai);

                        break;

        case 2 :       aide();

                        break;

        case 3 :       exit(0);
                        break;
        }
    }

