#include <stdlib.h>
#include<stdio.h>
int main()
{
    int annee;
    float somme, interet;
    interet=0 ;
    annee=0;
    printf("Somme initiale: ");
    scanf("%f",&somme);
    printf("-----------------------------\n");
    printf("Somme initiale =%f\n",somme);
// printf("Annee\tInteret\tSomme\n");
    printf("-----------------------------\n");
    while(interet < 10000)
    {
        interet = somme * 3.5 / 100;
        somme = somme + interet;
        annee = annee + 1; // annee++;
        printf("Annee=%d\tinteret=%f\tsomme=%f\n",annee, interet,
               somme );
    }
    printf("-----------------------------\n");
    printf("Il faut %d annees pour beneficier d'un pret\n",annee );
    printf("-----------------------------\n");
    return (0);
}0
