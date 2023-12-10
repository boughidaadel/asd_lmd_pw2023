#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two positive non-zero integers: ");
    scanf("%d %d", &a, &b);

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

    return 0;
}
