#include <stdio.h>

/*This algorithm is designed to perform the sum of S where 
the numerator is always 1 and the denominators scale from 1 to n*/

int main() {
    int n;
    double sum = 0.0;

    // Data input for n, white a error handling what's do the verify if n is a positive integer number
    do {
        printf("Enter a value for 'n'(it's needed be a positive integer number): ");
        scanf("%d", &n);
    } while (n <= 0);

    // Function for calculate the sum
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    // Print of the sum's result
    printf("\nthe sum result is S = %.6lf.", sum);

    system("pause");
    return 0;
}
