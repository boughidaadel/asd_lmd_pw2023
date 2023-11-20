#include <stdio.h>

int main()
{
    int choice;
    printf("Welcome to our restaurent\n");
    printf("Press 1 to choose the Fish menu\n");
    printf("Press 2 to choose the Meat menu\n");
    printf("Press 3 to choose the Vegetarian menu\n");
    printf("Type 4 to Exit \n");
    scanf("%d", &choice);


    switch(choice)
    {
    case 1:
        printf("You have chosen the Fish Menu \n Enjoy your meal \n");
    case 2:
        printf("You have chosen the Meat Menu \n Enjoy your meal \n");
        break;
    case 3:
        printf("You have chosen the Vegetarian Menu \n Enjoy your meal \n");
    default:
        printf("Goodbye!");
    }






    return 0;
}
