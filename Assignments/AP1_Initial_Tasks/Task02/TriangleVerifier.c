#include <stdio.h>

int main() {
    //Triangles have 3 sides, so, we need 3 float variables
    float side1, side2, side3;

    // Request the sides sizes, one for one
    printf("Enter the size of the first side: ");
    scanf("%f", &side1);

    printf("Enter the size of the second side: ");
    scanf("%f", &side2);

    printf("Enter the size of the third and last side: ");
    scanf("%f", &side3);

    // Here are many conditionals and what functions are checking which type of triangle it is
    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
        if (side1 == side2 && side2 == side3) {
            printf("It is a triangle equilateral.\n");
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            printf("It is a isosceles triangle.\n");
        } else {
            printf("It is a scalene triangle.\n");
        }
    } else {
        // Here is a error handling create if the user enter sides what don't form a triangle
        printf("It's impossible create a triangle with the sides entered \n");
    }

    system("pause");
    return 0;
}
