#include <stdio.h>

int main() {
    float length, width;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    float perimeter = 2 * (length + width);
    float area = length * width;
    printf("Perimeter of the rectangle is: %f\n", perimeter);
    printf("Area of the rectangle is: %f\n", area);
    return 0;
}
