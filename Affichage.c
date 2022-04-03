#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include "conio.h"


  // FONCTION AFFICHAGE
    void affichage(char mode, int ROW, char res[COUP_MAX][NB_CHIFFRE], int code[NB_CHIFFRE], int essai[COUP_MAX][NB_CHIFFRE]) {
        //FILE* fichier=NULL;
        int i, j;
        //fichier = fopen("Masternint.txt","w");
        switch (mode) {
            case 'r' :
              //  if(fichier!=NULL)
                printf("\n\n");
               // printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
                 for (j = 0; j <= ROW; j++) {
                     Color(GREY,BLACK);
                    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",218,194,196,196,196,194,194,196,196,196,194,194,196,196,196,194,194,196,196,196,194,191);
                    printf("%c",179);
                    for (i = 0; i < NB_CHIFFRE; i++){

                        printf("%c ",179);
                        if(essai[j][i]==0){Color(WHITE,BLACK);essai[j][i]=219;printf("%c ", essai[j][i]);Color(GREY,BLACK);}
                        else if(essai[j][i]==1){Color(YELLOW,BLACK);essai[j][i]=219;printf("%c ", essai[j][i]);Color(GREY,BLACK);}
                        else if(essai[j][i]==2){Color(RED,BLACK);essai[j][i]=219;printf("%c ", essai[j][i]);Color(GREY,BLACK);}
                        else if(essai[j][i]==3){Color(BLUE,BLACK);essai[j][i]=219;printf("%c ", essai[j][i]);Color(GREY,BLACK);}
                        else if(essai[j][i]==4){Color(GREEN,BLACK);essai[j][i]=219;printf("%c ", essai[j][i]);Color(GREY,BLACK);}
                        else if(essai[j][i]==5){Color(PURPLE,BLACK);essai[j][i]=219;printf("%c ", essai[j][i]);Color(GREY,BLACK);}
                        printf("%c",179);

                        }
                        printf("%c  ORDINATEUR",179);
                        printf("\n" );

                    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",192,193,196,196,196,193,193,196,196,196,193,193,196,196,196,193,193,196,196,196,193,217);
                    printf("\n" );

                  Color(BLACK,WHITE);
                printf("\t\t\t\t\t\t\t*********************************************************\t\t\n" );
                printf("\t\t\t\t\t\t\t*\t\t\tRAPPELS\t\t\t\t*\n" );
                printf("\t\t\t\t\t\t\t*\t\t\t\t\t\t\t*\n" );
                printf("\t\t\t\t\t\t\t*- UTILISEZ UNE COMBINAISON DU STYLE:");
                Color(GREEN,BLACK);
                printf(" 1 2 3 4\t\t*\n");
                Color(WHITE,BLACK);
                printf("\t\t\t\t\t\t\t*- PUIS CLIQUEZ SUR:");
                Color(YELLOW,BLACK);
                printf("  ENTREE\t\t\t\t*\n" );
                Color(WHITE,BLACK);
                printf("\t\t\t\t\t\t\t*- LES NOMBRES POSSIBLE SONT COMPRIS ENTRE 0 ET 5" );
                printf("\t*\n" );
                printf("\t\t\t\t\t\t\t*\t\t\t\t\t\t\t*\n" );
                Color(GREY,BLACK);
                printf("\t\t\t\t\t\t\t*\t\t\tAIDE COULEUR\t\t\t*\n");
                Color(WHITE,BLACK);
                printf("\t\t\t\t\t\t\t*- 0--->WHITE\t\t\t\t\t\t*\n");
                Color(YELLOW,BLACK);
                printf("\t\t\t\t\t\t\t*- 1--->YELLOW\t\t\t\t\t\t*\n");
                Color(RED,BLACK);
                printf("\t\t\t\t\t\t\t*- 2--->RED\t\t\t\t\t\t*\n");
                Color(BLUE,BLACK);
                printf("\t\t\t\t\t\t\t*- 3--->BLUE\t\t\t\t\t\t*\n");
                Color(GREEN,BLACK);
                printf("\t\t\t\t\t\t\t*- 4--->GREEN\t\t\t\t\t\t*\n");
                Color(PURPLE,BLACK);
                printf("\t\t\t\t\t\t\t*- 5--->PURPLE\t\t\t\t\t\t*\n");
                Color(WHITE,BLACK);
                printf("\t\t\t\t\t\t\t*********************************************************\t\t\n" );

                    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",218,194,196,196,196,194,194,196,196,196,194,194,196,196,196,194,194,196,196,196,194,191);

                    for (i = 0; i < NB_CHIFFRE; i++)
                        printf("%c%c %c ",219,219, res[j][i]);
                    printf("%c%c",219,219);
                    printf("\n" );
                    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",192,193,196,196,196,193,193,196,196,196,193,193,196,196,196,193,193,196,196,196,193,217);
                    printf("\n" );
                    printf("\n" );

                }

                break;
            case 'p' :
                 Color(RED,BLACK);
                printf("\nPERDU, LE CODE CORRECT ETAIT :\t" );
                Color(WHITE,BLACK);
                for (i = 0; i < NB_CHIFFRE; i++)
                    printf("%d ", code[i]);
                printf("\n\n" );
                break;
            case 'g' :
                Color(YELLOW,BLACK);
                printf("\nGAGNE, LES QUATRES COULEURS ETAIT BIEN:\t" );
                Color(WHITE,BLACK);
                for (i = 0; i < NB_CHIFFRE; i++)
                    printf("%d ", code[i]);
                printf("\n\n" );
                break;
            case 'm' :
                printf("\n");
                Color(YELLOW,PURPLE);
                //textbackground(12);
                printf("**********************************************************************************************************\n");
                printf("**********************************************************************************************************\n");
                printf("**\t\t**     **      *      ****** ****** ****** ****** **     ** ** *    ** ****   \t\t**\n");
                printf("**\t\t***   ***    ** **    ****** ****** ****** **  ** ***   *** ** **   ** *****  \t\t**\n");
                printf("**\t\t** *** **   **   **   *        **   *      *****  ** *** ** ** ***  ** **   * \t\t**\n");
                printf("**\t\t**  *  **  **     **  ******   **   *****  ****** **  *  ** ** ** * ** **    *\t\t**\n");
                printf("**\t\t**     **  *********       *   **   *      **  ** **     ** ** **  *** **    *\t\t**\n");
                printf("**\t\t**     ** **       ** ******   **   ****** **  ** **     ** ** **   ** ****** \t\t**\n");
                printf("**\t\t**     ** **       ** ******   **   ****** **  ** **     ** ** **    * *****  \t\t**\n");
                printf("**********************************************************************************************************\n");
                printf("**********************************************************************************************************\n");

                printf("\n\n" );

                Color(WHITE,RED);
                break;
        }
    }
