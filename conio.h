#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


    //TAILLES ET CHIFFRES SIGNIFICATIF
        #define COUP_MAX    10      // Nombre de coup Maximal
        #define NB_CHIFFRE  4       // Nombre de chiffre dans le code
        #define BORNE_MAX   6      // Borne superieur du hasard
    // DIFFERENTS MENU D'AFICHAGE
        #define RESULTAT    'r'
        #define GAGNE       'g'
        #define PERDU       'p'
        #define MENU        'm'
        #define IN  1
    //COULEURS
        #define WHITE 15            // 0
        #define YELLOW 14           // 1
        #define RED 12              // 2
        #define BLUE 9              // 3
        #define GREEN 10            // 4
        #define PURPLE 5            // 5
        #define BLACK 0
        #define GREY 7
        #define TRUE 0
        #define FALSE 1


    // Fonctions externes
    //static void purger(void);
    //static void clean (char *chaine);
    void init_res (char res[COUP_MAX][NB_CHIFFRE]);
    void raz_chiffre (int chiffre[2][6]);
    int hasard(void);
    void saisie (int ROW, int essai[COUP_MAX][NB_CHIFFRE]);
    void teste (int ROW, int *p_bon,char res[COUP_MAX][NB_CHIFFRE], int code[NB_CHIFFRE], int essai[COUP_MAX][NB_CHIFFRE], int chiffre[2][10]);
    void affichage(char mode, int ROW, char res[COUP_MAX][NB_CHIFFRE], int code[NB_CHIFFRE], int essai[COUP_MAX][NB_CHIFFRE]);
    void menu();
    void aide();

