#include <stdio.h>

int main()
{
    int hour, minute, second;

    printf("Enter time in the format hour:minute:second ");
    scanf("%d%d%d", &hour, &minute, &second);

    printf("Current time is %02d:%02d:%02d\n", hour, minute, second);

    second++;
    if(second == 60)
    {
        second = 0;
        minute++;
        if(minute == 60)
        {
            minute = 0;
            hour++;
            if(hour == 24)
            {
                hour = 0;
            }
        }
    }

    printf("Time after one second is %02d:%02d:%02d\n", hour, minute, second);

    return 0;
}
