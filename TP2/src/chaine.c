#include <stdio.h>

int main(void)
{
    char premiere[100];
    char deuxieme[100];
    char copie[100];
    char concatenee[200];
    size_t longueur_premiere = 0;
    size_t longueur_deuxieme = 0;
    size_t i;
    int caractere;

    printf("Entrez la premiere chaine : ");
    if (fgets(premiere, sizeof premiere, stdin) == NULL) {
        fprintf(stderr, "Erreur de lecture de la premiere chaine.\n");
        return 1;
    }
    for (i = 0; premiere[i] != '\0' && premiere[i] != '\n'; i++) {
    }
    if (premiere[i] == '\n') {
        premiere[i] = '\0';
    } else if (!feof(stdin)) {
        caractere = getchar();
        if (caractere != '\n' && caractere != EOF) {
            while (caractere != '\n' && caractere != EOF) {
                caractere = getchar();
            }
            fprintf(stderr, "La premiere chaine est trop longue.\n");
            return 1;
        }
    }
    longueur_premiere = i;

    printf("Entrez la deuxieme chaine : ");
    if (fgets(deuxieme, sizeof deuxieme, stdin) == NULL) {
        fprintf(stderr, "Erreur de lecture de la deuxieme chaine.\n");
        return 1;
    }
    for (i = 0; deuxieme[i] != '\0' && deuxieme[i] != '\n'; i++) {
    }
    if (deuxieme[i] == '\n') {
        deuxieme[i] = '\0';
    } else if (!feof(stdin)) {
        caractere = getchar();
        if (caractere != '\n' && caractere != EOF) {
            while (caractere != '\n' && caractere != EOF) {
                caractere = getchar();
            }
            fprintf(stderr, "La deuxieme chaine est trop longue.\n");
            return 1;
        }
    }
    longueur_deuxieme = i;

    for (i = 0; i <= longueur_premiere; i++) {
        copie[i] = premiere[i];
        concatenee[i] = premiere[i];
    }
    for (i = 0; i < longueur_deuxieme; i++) {
        concatenee[longueur_premiere + i] = deuxieme[i];
    }
    concatenee[longueur_premiere + longueur_deuxieme] = '\0';

    printf("Longueur de la chaine concatenee : %zu\n",
           longueur_premiere + longueur_deuxieme);
    printf("Copie de la premiere chaine : %s\n", copie);
    printf("Chaines concatenees : %s\n", concatenee);

    return 0;
}