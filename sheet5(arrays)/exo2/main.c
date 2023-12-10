#include <stdio.h>

int main()
{
    int N; // A variable to store the size of the arrays
    printf("Enter the size of the arrays: ");
    scanf("%d", &N); // Read the size from the user
    int T1[N]; // The first array of N integer elements
    int T2[N]; // The second array of N integer elements
    printf("Enter the elements of the first array: ");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &T1[i]); // Read the elements of the first array from the user
    }
    printf("Enter the elements of the second array: ");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &T2[i]); // Read the elements of the second array from the user
    }
    int count = 0; // A variable to store the number of common elements
    printf("The common elements of the two arrays are: ");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (T1[i] == T2[j])   // If the elements are equal
            {
                printf("%d ", T1[i]); // Display the common element
                count++; // Increment the count
                break; // Break the inner loop
            }
        }
    }
    printf("\nThe number of common elements is: %d\n", count); // Display the result
    return 0;
}
