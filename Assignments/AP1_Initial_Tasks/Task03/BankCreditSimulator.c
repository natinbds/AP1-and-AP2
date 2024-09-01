#include <stdio.h>

int main() {
    float balance, credit;

    // Requesting the user's balance
    printf("Welcome, please enter your bank balance: R$ ");
    scanf("%f", &balance);

    // Conditionals for verifying what credit the bank can give for user
    // The conditions are presenting from my academic teacher
    if (balance < 2000.00) {
        credit = 0;
    } else if (balance <= 4000.00) {
        credit = balance * 0.20;
    } else if (balance <= 6000.00) {
        credit = balance * 0.30;
    } else {
        credit = balance * 0.40;
    }

    // Output from the bank credit simulator
    printf("\nYour average balance: R$ %.2f\n", balance);
    printf("\nCredit provided: R$ %.2f\n", credit);

    system("pause");
    return 0;
}
