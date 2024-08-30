#include <stdio.h>

int main() {
    //Declaro as variaveis de cada nota
    int valor, notas100, notas50, notas20, notas10, notas5, notas2, notas1;

    //Solicitada o valor a ser sacado e abaixo todas as funções para calcular a quantidade de células
    printf("Digite o valor a ser sacado: ");
    scanf("%d", &valor);

    notas100 = valor / 100;
    valor %= 100;

    notas50 = valor / 50;
    valor %= 50;

    notas20 = valor / 20;
    valor %= 20;

    notas10 = valor / 10;
    valor %= 10;

    notas5 = valor / 5;
    valor %= 5;

    notas2 = valor / 2;
    valor %= 2;

    notas1 = valor; 

    //Imprime a quantidade de cédulas de cada tipo
    printf("Cédulas fornecidas:\n");
    printf("100 dólares: %d\n", notas100);
    printf("50 dólares: %d\n", notas50);
    printf("20 dólares: %d\n", notas20);
    printf("10 dólares: %d\n", notas10);
    printf("5 dólares: %d\n", notas5);
    printf("2 dólares: %d\n", notas2);
    printf("1 dólar: %d\n", notas1);

    system("pause");
    return 0;
}
