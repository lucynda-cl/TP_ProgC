#include <stdio.h>

int main(void)
{
    int compteur = 5;
    int ligne;
    int colonne;

    printf("Version avec for:\n");
    for (ligne = 1; ligne <= compteur; ligne++) {
        for (colonne = 1; colonne <= ligne; colonne++) {
            if (colonne == 1 || colonne == ligne || ligne == compteur) {
                printf("*");
            } else {
                printf("#");
            }

            if (colonne < ligne) {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("Version avec while:\n");
    ligne = 1;
    while (ligne <= compteur) {
        colonne = 1;
        while (colonne <= ligne) {
            if (colonne == 1 || colonne == ligne || ligne == compteur) {
                printf("*");
            } else {
                printf("#");
            }

            if (colonne < ligne) {
                printf(" ");
            }
            colonne++;
        }
        printf("\n");
        ligne++;
    }

    return 0;
}
