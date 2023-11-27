#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a positive integer (not equal to 1): ");
    scanf("%d", &num);

    while (num != 1) {
        if (num % 2 == 0) {
            num = num / 2;
        } else {
            num = num * 3 + 1;
        }
        count++;
    }

    printf("The number of iterations to reach 1: %d\n", count);

    return 0;
}
