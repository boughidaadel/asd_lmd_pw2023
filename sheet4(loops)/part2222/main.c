#include <stdio.h>
#include <stdlib.h>

int main()
{   int num, i;
    printf("Please enter an integer value (between 1 and 9)\n");
    scanf("%d", &num);

    if(num >= 1 && num <=9) {

        i = 1;
        while (i<=10) {

            printf("%d * %d = %d \n", num, i, num*i);
            i++;
        }

    }

    else {

    printf("error! this is not a digit");
    }
    return 0;
}
