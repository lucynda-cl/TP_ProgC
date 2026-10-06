#include <stdio.h>

int main(void)
{
    const char *noms[5] = {"Dupont", "Martin", "Bernard", "Petit", "Robert"};
    const char *prenoms[5] = {"Marie", "Pierre", "Sophie", "Lucas", "Emma"};
    const char *adresses[5] = {
        "20, boulevard Niels Bohr, Lyon",
        "22, boulevard Niels Bohr, Lyon",
        "5, rue de la Republique, Lyon",
        "18, avenue Jean Jaures, Villeurbanne",
        "7, rue Victor Hugo, Lyon"
    };
    float notes_c[5] = {16.5f, 14.0f, 18.0f, 12.5f, 15.0f};
    float notes_systeme[5] = {12.1f, 14.1f, 17.5f, 13.0f, 16.0f};

    for (int i = 0; i < 5; i++) {
        printf("Etudiant.e %d :\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prenom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note en Programmation en C : %.1f\n", notes_c[i]);
        printf("Note en Systeme d'exploitation : %.1f\n\n", notes_systeme[i]);
    }

    return 0;
}