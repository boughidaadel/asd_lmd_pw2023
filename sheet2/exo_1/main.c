#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Double of %d is %d\n", num, num * 2);
    printf("Triple of %d is %d\n", num, num * 3);
    return 0;
}

