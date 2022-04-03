#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include "conio.h"

 // FONCTION TEST
    void teste (int ROW, int *p_bon, char res[COUP_MAX][NB_CHIFFRE], int code[NB_CHIFFRE], int essai[COUP_MAX][NB_CHIFFRE], int chiffre[2][10]) {
        int i,j,k;
        k = 0;
        /* boucle pour les valeurs presentes et bien placees*/
        for (i = 0; i < NB_CHIFFRE; i++)
            if (essai[ROW][i] == code[i]) {


                res[ROW][k++] = '=';

                chiffre[1][essai[ROW][i]] = IN;
                (*p_bon)++;

            }
        /* boucle pour les valeurs presentes mais mal placees */
        for (i = 0; i < NB_CHIFFRE; i++)
            for (j = 0; j < NB_CHIFFRE; j++)
                if (essai[ROW][i] == code[j] && j != i && chiffre[1][essai[ROW][i]] != IN) {

                    res[ROW][k++] = 'O';

                    chiffre[1][essai[ROW][i]] = IN;
                }
         /* boucle pour les valeurs  mais mal placees */
        for (i = 0; i < NB_CHIFFRE; i++)
            for (j = 0; j < NB_CHIFFRE; j++)
                if (essai[ROW][i] != code[j] && j != i && chiffre[1][essai[ROW][i]] != IN) {

                    res[ROW][k++] = 'X';

                    chiffre[1][essai[ROW][i]] = IN;
                }

    }
