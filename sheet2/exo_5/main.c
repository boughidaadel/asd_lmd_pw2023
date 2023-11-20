#include <stdio.h>

//his program first asks the user to enter two integers.
//It then reads the user’s input using the scanf function and stores them in num1 and num2 variables.
//The program then calculates the sum, difference, product, and quotient of the two numbers and displays the results.


int main() {
    int num1, num2;
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    printf("Sum: %d\n", num1 + num2);
    printf("Difference: %d\n", num1 - num2);
    printf("Product: %d\n", num1 * num2);
    printf("Quotient: %f\n", (float)num1 / num2);
    return 0;
}
