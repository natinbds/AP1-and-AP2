#include <stdio.h>

int main() {
    int N;
    
    // Read the value of N
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    int counter = 1;
    int number = 2;
    
    // Print the first N even numbers
    while (counter <= N) {
        printf("%d", number);
        if (counter < N) {
            printf(", ");
        }
        number += 2;
        counter++;
    }
  
    printf("\n");

    system("pause");
    return 0;
}
