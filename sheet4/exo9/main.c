#include <stdio.h>

int main()
{
    int a, b, result = 0;

    printf("Enter two positive non-zero integers: ");
    scanf("%d*%d", &a, &b);
    if (a <=0 || b <=0)
    {
        printf("Error! a or b are not no-zero integers");
    }
    else
    {
        while (b > 0)
        {
            printf("a=%d; b=%d \n", a, b);
            if (b % 2 != 0)
            {
                result = result + a;
                b = b - 1;
            }
            else
            {
                a = a * 2;
                b = b / 2;
            }

        }


    printf("The product of the two numbers is: %d\n", result);

    }

    return 0;
}
