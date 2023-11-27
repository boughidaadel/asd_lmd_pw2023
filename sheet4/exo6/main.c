#include <stdio.h>

int main() {
    int N, num, max = -1;

    printf("Enter the number of integers: ");
    scanf("%d", &N);

    printf("Enter %d integers: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        if (num % 5 == 0 && num > max) {
            max = num;
        }
    }

    if (max != -1) {
        printf("The largest multiple of 5 is: %d\n", max);
    } else {
        printf("There is no multiple of 5.\n");
    }

    return 0;
}
