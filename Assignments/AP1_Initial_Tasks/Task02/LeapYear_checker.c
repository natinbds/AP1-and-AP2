#include <stdio.h>

/* This code is a leap year checker, you need to follow 5 steps
To be able to confirm, the steps are as follows, and were provided by the teacher:

i. If the year is evenly divisible by 4, go to step 2. ...
ii. If the year is evenly divisible by 100, go to step 3. ...
iii. If the year is evenly divisible by 400, go to step 4. ...
iv. The year is a leap year (it has 366 days).
v. The year is not a leap year (it has 365 days)
*/

int main() {
    int year;

    // Request from user a year
    printf("Digite um ano: ");
    scanf("%d", &year);

    // Conditionals withe the steps to check if is or isn't a leap year
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("\n%d it's a leap year\n", year);
            } else {
                printf("\n%d isn't a leap year.\n", year);
            }
        } else {
            printf("\n%d it's a leap year.\n", year);
        }
    } else {
        printf("\n%d isn't a leap year.\n", year);
    }

    system("pause");
    return 0;
}
