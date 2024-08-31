#include <stdio.h>

int main() {
    int num_pessoas;

    // Solicita ao usuário o número de pessoas que participarão da dança
    printf("Digite o número de pessoas que participarão da dança: ");
    scanf("%d", &num_pessoas);

    // Verifica se o número de pessoas é par ou ímpar
    if (num_pessoas % 2 == 0) {
        printf("O número de pessoas é par. Todos terão pares para dançar.\n");
    } else {
        printf("O número de pessoas é ímpar. Alguém ficará de fora.\n");
    }

    system("pause");
    return 0;
}
