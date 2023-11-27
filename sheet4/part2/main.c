#include <stdio.h>

int main() {
    int num, i;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num >= 1 && num <= 9) {
        printf("Multiplication table for %d:\n", num);
        for (i = 1; i <= 10; i++) {
            printf("%d * %d = %d\n", num, i, num * i);
        }
    } else {
        printf("The number is not a digit (1-9).\n");
    }

    return 0;
}
