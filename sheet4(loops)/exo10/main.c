#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two positive non-zero integers: ");
    scanf("%d %d", &a, &b);

    // Check if a and b are positive and non-zero
    if (a > 0 && b > 0) {
        printf("Calculating GCD by successive subtractions:\n");

        while(a != b) {
            if(a > b) {
                printf("%d - %d = %d\n", a, b, a - b);
                a = a - b;
            } else {
                printf("%d - %d = %d\n", b, a, b - a);
                b = b - a;
            }
        }

        printf("The GCD is: %d\n", a);
    } else {
        printf("Invalid input. Please enter two positive non-zero integers.\n");
    }

    return 0;
}
