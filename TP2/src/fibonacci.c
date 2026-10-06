#include <stdio.h>

int main(void)
{
    int n;
    unsigned long long precedent = 0;
    unsigned long long courant = 1;

    printf("Entrez le nombre de termes (0 a 94) : ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 94) {
        fprintf(stderr, "Valeur invalide : le nombre de termes doit etre compris entre 0 et 94.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        unsigned long long terme;

        if (i == 0) {
            terme = precedent;
        } else if (i == 1) {
            terme = courant;
        } else {
            terme = precedent + courant;
            precedent = courant;
            courant = terme;
        }

        if (i > 0) {
            printf(", ");
        }
        printf("%llu", terme);
    }
    printf("\n");

    return 0;
}