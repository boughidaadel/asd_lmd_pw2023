#include <stdio.h>

int main()
{
    int n; // The input number
    printf("Enter a positive integer: ");
    scanf("%d", &n); // Read the input
    // Check if the input is valid
    if (n < 0)
    {
        printf("Invalid input.\n");
        return 0;
    }
    // Initialize the first two Fibonacci numbers
    int a = 1; // U0
    int b = 1; // U1
    int c; // Un
    // Loop from 2 to n

    if (n == 0 || n == 1)
    {
        c = 1;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            // Calculate the next Fibonacci number
            c = a + b;
            // Update the previous two Fibonacci numbers
            a = b;
            b = c;
        }
    }
    // Print the nth Fibonacci number
    printf("U%d = %d.\n", n, c);
    return 0;
}
