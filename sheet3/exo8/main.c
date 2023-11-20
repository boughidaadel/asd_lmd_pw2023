#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter height in meters: ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("BMI is: %.2f\n", bmi);

    if (bmi < 16.5)
        printf("Severely Underweight\n");
    else if (bmi < 18.5)
        printf("Underweight\n");
    else if (bmi < 25)
        printf("Normal weight\n");
    else if (bmi < 30)
        printf("Overweight\n");
    else
        printf("Obesity\n");

    return 0;
}
