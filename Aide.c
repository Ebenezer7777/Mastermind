#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include "conio.h"



void aide(){
    int choix;
    system("cls");
    Color(RED,BLACK);
    printf("\t\t\t         *      ** *****   ******\n");
    printf("\t\t\t       ** **    ** ******  ******\n");
    printf("\t\t\t      **   **   ** **   ** *\n");
    printf("\t\t\t     **     **  ** **   ** *****\n");
    Color(BLUE,BLACK);
    printf("\t\t\t     *********  ** **   ** *\n");
    printf("\t\t\t    **       ** ** ******  ******\n");
    printf("\t\t\t    **       ** ** *****   ******\n");
    printf("\n\n");
    Color(YELLOW,BLACK);
    printf (" \t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf (" \t\t\t\t\t%c                                                               %c\n",186,186);
    printf ("Aides General\t\t\t\t%c      Espacements:                                             %c\n",186,186);
    printf (" \t\t\t\t\t%c    0 : Les 04 Saisies Doivent Etre Separer D'Un Espace ' '    %c\n",186,186);
    printf (" \t\t\t\t\t%c       Exemple: 1 2 3 4                                        %c\n",186,186);
    printf (" \t\t\t\t\t%c    1 : Puis Pour Valider Ces Entrer Cliquer sur ENTRER        %c\n",186,186);
    printf (" \t\t\t\t\t%c    2 : Les Chiffres A Choisir Sont Entre 0 et 5 Inclus        %c\n",186,186);
    printf (" \t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);


    printf("\n\n");
    Color(BLUE,BLACK);
    printf (" \t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf (" \t\t\t\t\t%c                       %c\n",186,186);
    printf ("Aides Relative Aux Couleurs\t\t%c    Couleur:           %c\n",186,186);
    printf (" \t\t\t\t\t%c    0 : WHITE          %c\n",186,186);
    printf (" \t\t\t\t\t%c    1 : YELLOW         %c\n",186,186);
    printf (" \t\t\t\t\t%c    2 : RED            %c\n",186,186);
    printf (" \t\t\t\t\t%c    3 : BLUE           %c\n",186,186);
    printf (" \t\t\t\t\t%c    4 : GREEN          %c\n",186,186);
    printf (" \t\t\t\t\t%c    5 : PURPLE         %c\n",186,186);
    printf (" \t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    Color(RED,BLACK);
  printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Retour <-----\t ");
    scanf("%d",&choix);

    system("cls");
        switch (choix)
        {
            case  0 :      menu();;

                        break;

            case  1 :      exit(0);

                        break;

        }
}



