#include <stdio.h>
#include <stdlib.h>
int main()
{
#define l 11
#define c 4
    int T[l] [c] ;
    int i, j;
    int max = 0; // A variable to store the maximum number of goals
    int player = 0; // A variable to store the player number with the maximum number of goals
    int team = 0; // A variable to store the team number with the maximum number of goals
    printf("Enter the goals scored by each player:\n");
    for (i = 0; i < l; i++)
    {
        printf("for the player %d: ", i+1);
        for (j = 0; j < c; j++)
        {
            scanf("%d", &T[i][j]); // Read the goals from the user
            if (T[i][j] > max)   // If the current goal is greater than the maximum
            {
                max = T[i][j]; // Update the maximum
                player = i; // Update the player number
                team = j; // Update the team number
            }
        }
    }
    printf("The player with the highest number of goals is: %d\n", player + 1); // Display the player number (add 1 because the array starts from 0)
    printf("The team of this player is: %d\n", team + 1); // Display the team number (add 1 because the array starts from 0)
    printf("The number of goals scored by the player is: %d\n", max); // Display the number of goals
    return 0;
}
