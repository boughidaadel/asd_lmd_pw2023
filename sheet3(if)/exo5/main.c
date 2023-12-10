#include <stdio.h>

int main() {
    int A, B, C;

    printf("Enter three digits (each between 0 and 9):\n");
    scanf("%d %d %d", &A, &B, &C);

    int max = A;
    if (B > max) max = B;
    if (C > max) max = C;

    int min = A;
    if (B < min) min = B;
    if (C < min) min = C;

    int mid = A + B + C - max - min;

    int largest_number = max * 100 + mid * 10 + min;

    printf("The largest number that can be formed using the three digits is: %d\n", largest_number);

    return 0;
}
