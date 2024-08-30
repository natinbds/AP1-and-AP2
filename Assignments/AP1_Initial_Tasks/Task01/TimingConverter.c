#include <stdio.h>

int main() {
    int choose;
    int hours, minutes, seconds, totalSeconds;

    //Main menu to user's choose the option from my timing converter
    printf("Choose what you want to made with:\n");
    printf("1. Converting hours, minutes and seconds to only seconds\n");
    printf("2. Converting only seconds to hours, minutes and seconds (H/M/L type)\n");
    printf("Press the number of option and press enter \n(1 or 2): ");
    scanf("%d", &choose);
  
    //Menu 1: Take the H/M/L type and convert to only seconds
    if (choose == 1) {
        printf("Enter the elapsed time into the stopwatch:\n");
        printf("Hours: ");
        scanf("%d", &hours);
        printf("\nMinutes: ");
        scanf("%d", &minutes);
        printf("\nSeconds: ");
        scanf("%d", &seconds);

        totalSeconds = (hours * 3600) + (minutes * 60) + seconds;
        
        printf("The total time in second is: %d segundos\n", totalSeconds);

    } else if (choose == 2) {
        //Menu 2: Take seconds and convert to H/M/L type
        printf("Write all elapsed time into the stopwatch (only seconds): ");
        scanf("%d", &totalSeconds);

        hours = totalSeconds / 3600;
        minutes = (totalSeconds % 3600) / 60;
        seconds = totalSeconds % 60;

        printf("The time is setted at: %d hours, %d minutes e %d seconds\n", hours, minutes, seconds);

    } else {
        //This error handling it's made for user's select any number if not 1 or 2
        printf("Invalid option! Please, press only 1 or 2.\n");
    }

    system("pause");
    return 0;
}
