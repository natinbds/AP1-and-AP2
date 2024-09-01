#include <stdio.h>

int main() {
    int num, i = 2;
    int isPrime = 1;  // Assume the number is prime initially
    
    // Read the positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    // Check if the number is less than or equal to 1
    if (num <= 1) {
        printf("The number must be greater than 1.\n");
        return 1; // Exit the program with an error code
    }
    
    // Check if the number is prime
    while (i <= num / 2) {
        if (num % i == 0) {
            isPrime = 0;  // The number is not prime
            break;
        }
        i++;
    }
    
    // Print the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
