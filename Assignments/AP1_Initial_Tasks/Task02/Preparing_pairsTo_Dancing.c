#include <stdio.h>

int main() {
    int peopleQuantitity;

    // Request the number of amount of people want's to dance
    printf("Enter the number of people who will participate in the dance: ");
    scanf("%d", &peopleQuantitity);

    // Verifying if is pair or odd
    if (peopleQuantitity % 2 == 0) {
        printf("\nThe number of people is even. Everyone will have partners to dance with.\n");
    } else {
        printf("\nThe number of people is odd. from outside.\n");
    }

    system("pause");
    return 0;
}
