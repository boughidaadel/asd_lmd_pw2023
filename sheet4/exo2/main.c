#include <stdio.h>

int main() {
    int N, num, i = 0;
    int sum = 0, count = 0;
    float avg;
    printf("Enter the number of integers: ");
    scanf("%d", &N);

    while(i < N) {
        printf("Enter number: ");
        scanf("%d", &num);

        if(num % 2 == 0) {
            sum += num;
            count++;
        }

        i++;
    }

    if(count > 0) {
        avg = sum/count;
        printf("Average of even numbers = %.2f\n", avg);
    } else {
        printf("No even numbers were entered.\n");
    }

    return 0;
}
