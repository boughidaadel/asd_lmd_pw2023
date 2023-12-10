#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;
    printf("Enter an integer number: ");
    scanf("%d", &num);

    if(num <=9 && num >= 1) {
        i = 1;
        while(i<=10) {

            printf("%d * %d = %d \n", num, i, num*i);
            i++;
        }

    }

    else {

        printf("this number is not a digit");
    }
    return 0;
}
