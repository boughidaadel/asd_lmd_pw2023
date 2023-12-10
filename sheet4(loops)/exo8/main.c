#include <stdio.h>

int main()
{
    int N; // The input number
    float e = 1.0; // The approximation of e
    printf("Enter a positive non-zero integer: ");
    scanf("%d", &N); // Read the input
    // Check if the input is valid
    if (N <= 0)
    {
        printf("Invalid input.\n");
        return 0;
    }
    // Initialize the factorial of the current term
    int fact = 1; // 0!
    // Loop from 1 to N
    for (int i = 1; i <= N; i++)
    {
        // Update the factorial of the current term
        fact = fact * i; // i!
        // Add the ith term to the approximation of e
        e = e + 1.0 / fact;
    }
    // Print the approximation of e
    printf("The approximation of e up to the %dth term is %f.\n", N, e);
    return 0;
}
