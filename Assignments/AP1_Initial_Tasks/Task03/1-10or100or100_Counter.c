#include <stdio.h>

int main() {
    int option;
    
    //Show's menu options
    printf("Choose a opcao:\n");
    printf("1. Count from 1 to 10\n");
    printf("2. Count from 1 to 100\n");
    printf("3. Count from 1 to 1000\n");
    scanf("%d", &option);

    //Using while to counters, made the counter option
    switch (option) {
        case 1: {
            int counter = 1;
            while (counter <= 10) {
                printf("%d ,", counter);
                counter++;
            }
            break;
        }
      
        case 2: {
            int counter = 1;
            while (counter <= 100) {
                printf("%d ,", counter);
                counter++;
            }
            break;
        }
      
        case 3: {
            int counter = 1;
            while (counter <= 1000) {
                printf("%d ,", counter);
                counter++;
            }
            break;
        }
      
        default:
            printf("Invalid option.\n");
            break;
    }

    system("pause");
    return 0;
}
