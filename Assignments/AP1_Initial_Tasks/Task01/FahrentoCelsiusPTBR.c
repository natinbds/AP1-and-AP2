#include <stdio.h>

int main() {
  //Declaro as varíaveis relacionadas as temperaturas
    float fahrenheit, celsius;

    //Solicita a temperatura em Fahrenheit
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);

    //Função programada para converter o valor de fahrenheit para celsius
    celsius = (5.0 / 9.0) * (fahrenheit - 32);

    //Imprime a temperatura em Celsius
    printf("A temperatura em graus Celsius é: %.2f\n", celsius);

    system("pause");
    return 0;
}
