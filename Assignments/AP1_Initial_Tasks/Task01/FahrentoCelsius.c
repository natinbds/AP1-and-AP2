#include <stdio.h>

int main() {
  //Creating the temperature variables, only float because in funcion, we needed divide 5/9 and have great chance to create a float number in final value
    float fahrenheit, celsius;

    //Requesting temperature's value in Fahrenheit
    printf("Write the actual temeperature on Fahrenheit: ");
    scanf("%f", &fahrenheit);

    //Function to convert Fahrenheit to Celsius
    celsius = (5.0 / 9.0) * (fahrenheit - 32);

    //Print Celsius temperature converted
    printf("Value on Celsius: %.2f\n", celsius);

    system("pause");
    return 0;
}
