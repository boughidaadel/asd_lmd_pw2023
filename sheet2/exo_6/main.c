#include <stdio.h>

int main() {
    int hours, minutes;
    printf("Enter hours: ");
    scanf("%d", &hours);
    printf("Enter minutes: ");
    scanf("%d", &minutes);
    int total_minutes = (hours * 60) + minutes;
    printf("Total number of minutes: %d\n", total_minutes);
    return 0;
}

