// Online C compiler to run C program online
#include <stdio.h>

int main()
{
#define n 5
    int arr[n];
    float sum = 0;
    int max = 0;
    int min = 0;
    float avg_arith = 0;
    float avg_oly = 0;


    for (int i=0; i<n; i++)
    {

        printf("Please enter element %d: ", i);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
        if (i == 0)
        {

            max = min = arr[i];
        }

        else
        {

            if (max < arr[i])
            {
                max = arr[i];
            }
            if (min > arr[i])
            {

                min = arr[i];
            }
        }
    }

    for (int i=0; i<n; i++)
    {

        printf("the value of %d element is: %d \n", i, arr[i]);
    }

    printf("max: %d \n", max);
    printf("min: %d \n", min);


    sum = sum - max - min;
    avg_oly = sum / (n - 2);
    printf("sum: %f \n", sum);

    printf("Olympic average: %f \n", avg_oly);
    return 0;
}
