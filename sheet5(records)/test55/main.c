#include <stdio.h>
#include <stdlib.h>


 typedef struct  {

        int day;
        int month;
        int year;
    } Date;

int main()
{
   Date d1, d2;
   printf("Please enter the first date: \n");
   printf("Please enter day: ");
   scanf("%d", &d1.day);
   printf("Please enter month: ");
   scanf("%d", &d1.month);
   printf("Please enter year: ");
   scanf("%d", &d1.year);

   printf("Please enter the second date: \n");
   printf("Please enter day: ");
   scanf("%d", &d2.day);
   printf("Please enter month: ");
   scanf("%d", &d2.month);
   printf("Please enter year: ");
   scanf("%d", &d2.year);

   printf("The first day is: %d/%d/%d", d1.day, d1.month, d1.year);
   printf("The second day is: %d/%d/%d", d2.day, d2.month, d2.year);


    return 0;
}
