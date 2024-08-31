#include <stdio.h>

int main() {
    float valor_compra, valor_final;

    // Solicita ao usuário o valor total da compra
    printf("Digite o valor total da compra: R$ ");
    scanf("%f", &valor_compra);

    // Verifica se o valor da compra é maior ou igual a R$ 100,00, para poder aplicar o desconto de 10%
    if (valor_compra >= 100.00) {
        valor_final = valor_compra * 0.90;
    } else {
        valor_final = valor_compra;
    }

    // Exibe o valor final a ser pago, com o desconto de 10% ativo
    printf("O valor final a ser pago é: R$ %.2f\n", valor_final);

    system("pause");
    return 0;
}
