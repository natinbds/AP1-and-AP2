#include <stdio.h>

int main() {
    //Declaring variables for all money notes
    int value, notes100, notes50, notes20, notes10, notes5, notes2, notes1;

    //Solicited the value for withdraw money
    printf("\nEnter the amount to be withdrawn: ");
    scanf("%d", &value);

    notes100 = value / 100;
    value %= 100;

    notes50 = value / 50;
    value %= 50;

    notes20 = value / 20;
    value %= 20;

    notes10 = value / 10;
    value %= 10;

    notes5 = value / 5;
    value %= 5;

    notes2 = value / 2;
    value %= 2;

    notes1 = value; 

    //Prints the number of banknotes of each type
    printf("Amount of notes provided:\n");
    printf("100 doll: %d\n", notes100);
    printf("50 doll: %d\n", notes50);
    printf("20 doll: %d\n", notes20);
    printf("10 doll: %d\n", notes10);
    printf("5 doll: %d\n", notes5);
    printf("2 doll: %d\n", notes2);
    printf("1 doll: %d\n", notes1);

    system("pause");
    return 0;
}
