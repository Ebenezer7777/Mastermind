#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include "conio.h"

// FONCTION INITIALISATION DU TABLEAU RESULTAT
    void init_res (char res[COUP_MAX][NB_CHIFFRE]) {
        int j;
        for (j = 0; j < COUP_MAX; j++) {
            int i;
            for (i = 0; i < NB_CHIFFRE; i++)
                res[j][i] = '.';
                //printf("%d",res[j][i]);
        }
    }
