#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;
    printf("please enter a real number on the keyboard: ");
    scanf("%f", &x);
    printf("please enter another real number on the keyboard: ");
    scanf("%f", &y);
    if (x < y)
            printf("1- %f 2- %f", x, y);


    else {
        printf("1- %f 2- %f", y, x);
    }

    return 0;
}
