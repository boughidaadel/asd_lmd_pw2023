#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    float amount, interest;
    interest = 0;
    year = 0;
    printf("Please enter the inital sum that you have: ");
    scanf("%f", &amount);

    while(interest < 10000)
    {
        interest =  amount * 3.5 /100;
        year = year + 1;
        printf("year %d: interest=(%.2f x 3.5)/100=%.2f \n", year, amount, interest);
        amount = amount + interest;

    }

    return 0;
}
