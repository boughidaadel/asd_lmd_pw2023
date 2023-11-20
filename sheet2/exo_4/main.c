#include <stdio.h>

//This program first asks the user to enter three grades.
//It then reads the user’s input using the scanf function and stores them in grade1, grade2, and grade3 variables.
//The program then calculates the average of the three grades and displays the result.

int main() {
    float grade1, grade2, grade3;
    printf("Enter the first grade: ");
    scanf("%f", &grade1);
    printf("Enter the second grade: ");
    scanf("%f", &grade2);
    printf("Enter the third grade: ");
    scanf("%f", &grade3);
    float average = (grade1 + grade2 + grade3) / 3;
    printf("The average of the three grades is: %f\n", average);
    return 0;
}
