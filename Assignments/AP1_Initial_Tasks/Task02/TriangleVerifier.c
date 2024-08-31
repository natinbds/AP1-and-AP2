#include <stdio.h>

int main() {
    //Triângulos tem 3 lados, então por isso as varíaveis são 1,2 e 3
    float lado1, lado2, lado3;

    // Solicita ao usuário o tamanho dos três lados do triângulo
    printf("Digite o tamanho do primeiro lado: ");
    scanf("%f", &lado1);

    printf("Digite o tamanho do segundo lado: ");
    scanf("%f", &lado2);

    printf("Digite o tamanho do terceiro lado: ");
    scanf("%f", &lado3);

    // Verifica se é possível formar um triângulo com os lados fornecidos, e verifica qual o tipo de triângulo
    if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) {
        if (lado1 == lado2 && lado2 == lado3) {
            printf("O triângulo é equilátero.\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("O triângulo é isósceles.\n");
        } else {
            printf("O triângulo é escaleno.\n");
        }
    } else {
        // Caso contrário, informa que não é possível formar um triângulo
        printf("Não é possível formar um triângulo com esses lados.\n");
    }

    system("pause");
    return 0;
}
