#include <stdio.h>

int main() {
    int horas_trabalhadas;
    float salario_bruto, salario_liquido;
    float valor_hora = 19.50;
    float imposto = 0.10;

    // Entrada dos dados sobre as horas trabalhadas do usuário
    printf("Digite o número de horas trabalhadas: ");
    scanf("%d", &horas_trabalhadas);

    // Cálculo do salário bruto e verificando se há imposto, para atribuir o valor do salario liquido
    salario_bruto = horas_trabalhadas * valor_hora;

    if (salario_bruto > 1500.00) {
        salario_liquido = salario_bruto - (salario_bruto * imposto);
    } else {
        salario_liquido = salario_bruto;
    }

    // Exibe o salário líquido
    printf("Salário bruto: R$ %.2f\n", salario_bruto);
    printf("Salário líquido: R$ %.2f\n", salario_liquido);
  
    system("pause");
    return 0;
}
