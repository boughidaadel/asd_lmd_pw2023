#include <stdio.h>

//his program first asks the user to enter the values of resistances R1, R2, and R3.
//It then reads the user’s input using the scanf function and stores them in R1, R2, and R3 variables.
//it calculates the equivalent resistance Req using the formula given and displays the result.

int main() {
    float R1, R2, R3;
    printf("Enter the value of resistance R1: ");
    scanf("%f", &R1);
    printf("Enter the value of resistance R2: ");
    scanf("%f", &R2);
    printf("Enter the value of resistance R3: ");
    scanf("%f", &R3);
    float Req;
    Req = (1 / R1) + (1 / R2) + (1 / R3);
    printf("The equivalent resistance Req is: %f\n", Req);

    return 0;
}
