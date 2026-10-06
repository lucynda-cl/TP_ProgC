#include <limits.h>
#include <stdio.h>

int main(void)
{
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int nombre_count = (int)(sizeof nombres / sizeof nombres[0]);
    int bits[sizeof(int) * CHAR_BIT];

    for (int i = 0; i < nombre_count; i++) {
        int valeur = nombres[i];
        int nombre_bits = 0;

        for (int reste = valeur; reste > 0; reste /= 2) {
            bits[nombre_bits] = reste % 2;
            nombre_bits++;
        }

        printf("%d en binaire : ", valeur);
        if (nombre_bits == 0) {
            printf("0");
        } else {
            for (int j = nombre_bits - 1; j >= 0; j--) {
                printf("%d", bits[j]);
            }
        }
        printf("\n");
    }

    return 0;
}