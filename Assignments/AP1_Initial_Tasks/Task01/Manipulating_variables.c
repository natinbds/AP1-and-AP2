#include <stdio.h>

int main() {
    int A, B, C;

    //Creating the variables how the teacher request
    A = 1;
    B = 2;
    C = 3;

    //Manipulating the values how the teacher request, mading the math questions
    A = A + B + C; // A now it's 6 (1 + 2 + 3)
    B = A - (B + C); // B now it's 1 (6 - (2 + 3))
    C = A - (B + C); // C now it's 2 (6 - (1 + 2))
    A = A - (B + C); // A now it's 3 (6 - (1 + 2))

    //Printing the final values of A,B and C, by the teacher's request in the question
    printf("%d %d %d\n", A, B, C);

    system("pause");
    return 0;
}
