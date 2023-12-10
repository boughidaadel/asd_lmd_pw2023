#include <stdio.h>

int main() {





    int num1, num2, num3, min;



    printf("Enter three positive non-zero numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);





    min = num1;

    if(num2 < min)
        min = num2;

    if(num3 < min)
        min = num3;

    printf("The minimum number is %d\n", min);

    return 0;
}
