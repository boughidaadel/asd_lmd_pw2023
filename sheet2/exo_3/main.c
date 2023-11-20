#include <stdio.h>
// This program first asks the user to enter a distance in miles.
// It then reads the user’s input using the scanf function and stores it in the miles variable.
// The program then converts miles to kilometers, kilometers to meters, and finally meters to feet, and displays the result.

int main() {
    float miles;
    printf("Enter a distance in miles: ");
    scanf("%f", &miles);
    float kilometers = miles * 1.609;
    float meters = kilometers * 1000;
    float feet = meters * 3.2809;
    printf("The distance in feet is: %.2f\n", feet);
    return 0;
}

