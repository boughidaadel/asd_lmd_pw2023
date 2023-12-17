#include <stdio.h>
#include <stdlib.h>



struct Date_struct
{
    int day;
    int month;
    int year;
};

int main()
{

    struct Date_struct d1;
    struct Date_struct d2;

    printf("1- Enter the first date: \n");
    printf("Enter the first day: ");
    scanf("%d", &d1.day);
    printf("Enter the first month: ");
    scanf("%d", &d1.month);
    printf("Enter the first year: ");
    scanf("%d", &d1.year);

    printf("2- Enter the second date: \n");
    printf("Enter the second day: ");
    scanf("%d", &d2.day);
    printf("Enter the second month: ");
    scanf("%d", &d2.month);
    printf("Enter the second year: ");
    scanf("%d", &d2.year);

    printf("The first date: %d/%d/%d \n", d1.day, d1.month, d1.year);
    printf("The second date: %d/%d/%d", d2.day, d2.month, d2.year);
    return 0;
}
