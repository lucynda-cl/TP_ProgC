
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1;
    int num2;
    char op;

    printf("Entrez deux entiers et un operateur (+, -, *, /, %%, &, |, ~) : ");
    if (scanf("%d %d %c", &num1, &num2, &op) != 3) {
        fprintf(stderr, "Entree invalide.\n");
        return EXIT_FAILURE;
    }

    switch (op) {
    case '+':
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
        break;
    case '/':
        if (num2 == 0) {
            fprintf(stderr, "Division par zero impossible.\n");
            return EXIT_FAILURE;
        }
        printf("%d / %d = %d\n", num1, num2, num1 / num2);
        break;
    case '%':
        if (num2 == 0) {
            fprintf(stderr, "Modulo par zero impossible.\n");
            return EXIT_FAILURE;
        }
        printf("%d %% %d = %d\n", num1, num2, num1 % num2);
        break;
    case '&':
        printf("%d & %d = %d\n", num1, num2, num1 & num2);
        break;
    case '|':
        printf("%d | %d = %d\n", num1, num2, num1 | num2);
        break;
    case '~':
        printf("~%d = %d\n", num1, ~num1);
        break;
    default:
        fprintf(stderr, "Operateur non reconnu : %c\n", op);
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
