#include <stdio.h>

// I did not using pounds or feets because in my country we use meters and kilogram

int main() {
    float height, weight;
    char weightClass;

    // Requesting input data of user's height and weight
    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    printf("Enter your weight (in kg): ");
    scanf("%f", &weight);

    // Nested conditional structure to check sorting
    if (height < 1.20) {
        if (weight <= 60) {
            weightClass = 'A';
        } else if (weight <= 90) {
            weightClass = 'D';
        } else {
            weightClass = 'G';
        }
    } else if (height <= 1.70) {
        if (weight <= 60) {
            weightClass = 'B';
        } else if (weight <= 90) {
            weightClass = 'E';
        } else {
            weightClass = 'H';
        }
    } else {
        if (weight <= 60) {
            weightClass = 'C';
        } else if (weight <= 90) {
            weightClass = 'F';
        } else {
            weightClass = 'I';
        }
    }

    // Show the user's classification
    printf("Your classification on tabela is %c\n", weightClass);

    system("pause");
    return 0;
}
