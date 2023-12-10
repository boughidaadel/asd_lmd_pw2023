#include <stdio.h>
#include <math.h>

int main()
{
    float T[10]; // A 10-element real array
    float sum = 0.0; // A variable to store the sum of the elements
    float m = 0.0; // A variable to store the mean of the elements
    float sd = 0.0; // A variable to store the standard deviation of the elements
    printf("Enter 10 real numbers: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the number %d: ", i);
        scanf("%f", &T[i]); // Read the elements from the user
        sum += T[i]; // Add the element to the sum
    }
    m = sum / 10; // Calculate the mean
    printf("%f", m);
    sum = 0.0; // Reset the sum to zero
    for (int i = 0; i < 10; i++)
    {
        sum += pow(T[i] - m, 2); // Add the squared deviation to the sum
    }
    sd = sqrt(sum / 10); // Calculate the standard deviation
    printf("The standard deviation of the array is: %f\n", sd); // Display the result
    return 0;

}
