#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include "conio.h"


// FONCTION REMISE A ZERO DU CODE TEMP

  void raz_chiffre (int chiffre[2][6]) {
        int i;
        for (i = 0; i <= 5; i++)
            chiffre[1][i] = 0;
    }
