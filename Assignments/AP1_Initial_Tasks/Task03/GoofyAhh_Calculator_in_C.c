#include <stdio.h>

int main() {
  
    float num1, num2, result;
    int choose;

    // Requesting the numbers one and two
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("\nEnter the second number: ");
    scanf("%f", &num2);

    // Menu Options
    printf("\nChoose one operation:\n");
    printf("1 - Media between the values ​​entered\n");
    printf("2 - Diferença do maior pelo menor\n");
    printf("3 - Produto entre os números digitados\n");
    printf("4 - Divisão do primeiro pelo segundo\n");
    printf("Please press the number of the operation what you want: ");
    scanf("%d", &choose);

    switch(choose) {
        case 1: // Media between the values
            result = (num1 + num2) / 2;
            printf("The media values it's: %.2f\n", result);
            break;
      
        case 2: //The difference between the largest and the smallest number
            if (num1 > num2) {
                result = num1 - num2;
            } else {
                result = num2 - num1;
            }
            printf("The difference between the largest and the smallest number is: %.2f\n", result);
            break;
      
        case 3: // Multiplier
            result = num1 * num2;
            printf("The product between the numbers is: %.2f\n", result);
            break;
      
        case 4: // Division of the numbers
            if (num2 != 0) {
                result = num1 / num2;
                printf("The divide result is: %.2f\n", result);
            } else {
                printf("Error: It's impossible divide 'n' with 0.\n"); //Error handling because in math, it's impossible divide X/0
            }
            break;
      
        default: // Error handling for bad options enters 
            printf("Invalid option dumb. Please open the program again\n");
            break;
    }

    system("pause");
    return 0;
}
