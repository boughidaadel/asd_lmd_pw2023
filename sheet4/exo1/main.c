#include <stdio.h>

int main() {
    int N, num, i = 1, min, max;

    printf("Enter the number of integers: ");
    scanf("%d", &N);

    printf("Enter number 1: ");
    scanf("%d", &num);
    min = max = num;

    while(i < N) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &num);

        if(num < min) {
            min = num;
        }

        if(num > max) {
            max = num;
        }

        i++;
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);

    return 0;
}
