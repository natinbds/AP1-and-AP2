#include <stdio.h>

int main() {
    int hoursWorked;
    float grossWage, liquidWage;
    float valuePerHour = 19.50;
    float imposts = 0.10;

    //Requesting the user's hours worked
    printf("Please, enter your total hours worked on our Corporation: ");
    scanf("%d", &hoursWorked);

    // Calculating the gross salary, after a conditional who's verify if have imposts and calculate the liquid wage
    grossWage = hoursWorked * valuePerHour;

    if (grossWage > 1500.00) {
        liquidWage = grossWage - (grossWage * imposts);
    } else {
        liquidWage = grossWage;
    }

    // Show's the values of user's wages
    printf("\nYour gross wage on month: R$ %.2f\n", grossWage);
    printf("Your liquid wage, with all imposts discounted: R$ %.2f\n", liquidWage);
  
    system("pause");
    return 0;
}
