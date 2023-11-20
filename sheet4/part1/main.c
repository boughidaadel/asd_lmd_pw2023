#include <stdlib.h>
#include<stdio.h>
int main()
{
    int year;
    float sum, interest;
    interest=0. ;
    year=0;
    printf("Somme initiale: ");
    scanf("%f",&sum);
    printf("-----------------------------\n");
    printf("Somme initiale =%.2f\n",sum);
    printf("Year \t Interet \t\t Somme \n");
    printf("-----------------------------\n");


    while(interest < 10000)
    {
        year = year + 1;
        interest = (sum*3.5) / 100;
        sum = sum + interest;
        printf("Year=%d \t\t interest=%.2f \t\t sum=%.2f\n", year, interest, sum);
    }
    printf("-----------------------------\n");
    printf("Il faut %d annees pour beneficier d'un pret \n", year);
    printf("-----------------------------\n");

    return (0);
}
