#include <stdio.h>
#include <math.h>
//This program first asks the user to enter the coordinates of two points.
//It then reads the user’s input using the scanf function and stores them in x1, y1, x2, and y2 variables.
//The program then calculates the distance between the two points using the distance formula and displays the result.
int main() {
    float x1, y1, x2, y2;
    printf("Enter the coordinates of the first point (x1, y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter the coordinates of the second point (x2, y2): ");
    scanf("%f %f", &x2, &y2);
    float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("The distance between the two points is: %f\n", distance);
    return 0;
}

