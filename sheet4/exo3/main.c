#include <stdio.h>

int main() {
    int num, reversedNum, remainder, originalNum, count;
    count = 0;
    reversedNum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // reversed integer is stored in reversedNum
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
        count++;
    }

    /*
    num = 12345
    iter 0: r = 5, reversedNum = 5, num = 1234
    iter 1: r = 4, reversedNum = 4 + 5*10 = 54, num = 123
    iter 2: r = 3, reversedNum = 3 + 54*10 = 543, num = 12
    iter 3: r = 2, reversedNum = 2 + 543*10 = 5432, num = 1
    iter 4: r = 1, reversedNum = 1 + 5432*10 = 54321, num = 0
    */
    // Display the result
    printf("The number of digits in %d is: %d\n", originalNum, count);
    printf("The mirror image of %d is: %d", originalNum, reversedNum);

    return 0;
}
