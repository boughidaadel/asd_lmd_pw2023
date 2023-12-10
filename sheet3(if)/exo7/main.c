#include <stdio.h>

int main()
{
    int sum, coins_50, coins_20, coins_10, coins_1;

    printf("Enter a sum of money in DA less than 100 DA: ");
    scanf("%d", &sum);

    if (sum >= 100)
    {
        printf("The sum is less then 100: ERROR");
    }
    else
    {
        coins_50 = 0;
        coins_20 = 0;
        coins_10 = 0;
        coins_1 = 0;

        if (sum >= 50)
        {
            coins_50 = sum / 50;
            sum = sum % 50;
        }

        if (sum >= 20)
        {
            coins_20 = sum / 20;
            sum = sum % 20;
        }

        if (sum >= 10)
        {
            coins_10 = sum / 10;
            sum = sum % 10;
        }

        if (sum >= 1)
        {
            coins_1 = sum;
        }

        printf("The minimum number of coins that make up the sum is:\n");
        printf("50 DA coins: %d\n", coins_50);
        printf("20 DA coins: %d\n", coins_20);
        printf("10 DA coins: %d\n", coins_10);
        printf("1 DA coins: %d\n", coins_1);

    }


    return 0;
}
