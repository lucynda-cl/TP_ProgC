#include <limits.h>
#include <stdio.h>

int main(void)
{
    const unsigned int largeur = sizeof(unsigned int) * CHAR_BIT;
    unsigned int d;
    unsigned int bit4;
    unsigned int bit20;

    if (largeur < 20) {
        fprintf(stderr, "Un unsigned int doit contenir au moins 20 bits.\n");
        return 1;
    }

    d = (1u << (largeur - 4)) | (1u << (largeur - 20));
    bit4 = (d >> (largeur - 4)) & 1u;
    bit20 = (d >> (largeur - 20)) & 1u;

    printf("%u\n", bit4 == 1u && bit20 == 1u);
    return 0;
}