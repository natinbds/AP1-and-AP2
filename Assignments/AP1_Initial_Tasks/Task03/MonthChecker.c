#include <stdio.h>

int main() {  
    int number;

    // Requesting the user a number for verify what month it number is
    printf("Enter a number integer (but >= 0): ");
    scanf("%d", &number);
    printf("\n");
  
    // Specifically, the use of switch-case was requested to resolve the issue, so here is the entire structure
    switch(number) {
        case 1:
            printf("January\n");
            break;
        case 2:
            printf("February\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April goofy ahh\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("June\n");
            break;
        case 7:
            printf("July\n");
            break;
        case 8:
            printf("August\n");
            break;
        case 9:
            printf("September\n");
            break;
        case 10:
            printf("October\n");
            break;
        case 11:
            printf("November\n");
            break;
        case 12:
            printf("December\n");
            break;
        default:
            printf("Invalid Month, the calendar only has 12 months, try another value\n");
            break;
    }

    system("pause");
    return 0;
}
