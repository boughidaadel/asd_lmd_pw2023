#include <stdio.h>

int main() {
    int minutes, seconds;
    printf("Enter time in minutes and seconds (format: MM SS): ");
    scanf("%d %d", &minutes, &seconds);

    int total_seconds = minutes * 60 + seconds;

    while (total_seconds >= 0) {
        printf("%02d:%02d\n", total_seconds / 60, total_seconds % 60);
        total_seconds--;
    }

    printf("Countdown finished!\n");

    return 0;
}
