#include <stdio.h>

int main()
{
    int N; // A variable to store the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &N); // Read the size from the user
    float T[N]; // An array of N real values
    printf("Enter the elements of the array: ");
    for (int i = 0; i < N; i++)
    {
        scanf("%f", &T[i]); // Read the elements from the user
    }
    int count = 0; // A variable to store the number of peaks
    printf("The peaks in the array are:\n");
    for (int i = 1; i < N - 1; i++)
    {
        if (T[i] > T[i - 1] && T[i] > T[i + 1])   // If the element is greater than its two adjacent neighbors
        {
            printf("%f is a peak at index %d\n", T[i], i); // Display the peak and its index
            count++; // Increment the count
        }
    }
    printf("There are %d peaks in this array\n", count); // Display the result
    return 0;
}
