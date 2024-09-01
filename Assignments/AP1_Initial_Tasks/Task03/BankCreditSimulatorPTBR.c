#include <stdio.h>

int main() {
    float saldo_medio, credito;

    // Requisitado o valor do saldo médio do usuário
    printf("Digite o saldo médio do último ano: R$ ");
    scanf("%f", &saldo_medio);

    // Estruturas condicionais para determinar o valor do crédito
    // As condições foram fornecidas na questão pela professora
    if (saldo_medio < 2000.00) {
        credito = 0;
    } else if (saldo_medio <= 4000.00) {
        credito = saldo_medio * 0.20;
    } else if (saldo_medio <= 6000.00) {
        credito = saldo_medio * 0.30;
    } else {
        credito = saldo_medio * 0.40;
    }

    // Saída dos resultados
    printf("Saldo médio: R$ %.2f\n", saldo_medio);
    printf("Crédito disponível: R$ %.2f\n", credito);

    system("pause");
    return 0;
}
