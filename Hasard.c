#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include "conio.h"

    // FONCTION HASARD
    int hasard() {
        return (int)(rand()/(double)RAND_MAX * (BORNE_MAX));
    }
