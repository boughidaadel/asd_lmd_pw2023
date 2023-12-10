#include <stdio.h>

int main()
{
    char T[5]; // An array of 5 characters
    int palindrome = 1; // A boolean variable to store the result
    printf("Enter an array of 5 characters:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf(" %c", &T[i]); // Read the characters from the user
    }
    for (int i = 0; i < 2; i++)
    {
        if (T[i] != T[4 - i])   // If the characters are not equal at the opposite ends
        {
            palindrome = 0; // Set the result to false
            break; // Break the loop
        }
    }
    if (palindrome)   // If the result is true
    {
        printf("The array is a palindrome.\n");
    }
    else     // If the result is false
    {
        printf("The array is not a palindrome.\n");
    }
    return 0;
}
