#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
  
    float num1, num2, resultado;
    int escolha;

    // Entrada de dados
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("\nDigite o segundo número: ");
    scanf("%f", &num2);

    // Menu de opções
    printf("\nEscolha uma operação:\n");
    printf("1 - Média entre os valores digitados\n");
    printf("2 - Diferença do maior pelo menor\n");
    printf("3 - Produto entre os números digitados\n");
    printf("4 - Divisão do primeiro pelo segundo\n");
    printf("Sua escolha: ");
    scanf("%d", &escolha);

    switch(escolha) {
        case 1: // Média entre os valores
            resultado = (num1 + num2) / 2;
            printf("A média entre os valores é: %.2f\n", resultado);
            break;
        case 2: // Diferença do maior pelo menor
            if (num1 > num2) {
                resultado = num1 - num2;
            } else {
                resultado = num2 - num1;
            }
            printf("A diferença do maior pelo menor é: %.2f\n", resultado);
            break;
        case 3: // Multiplicação entre os números
            resultado = num1 * num2;
            printf("O produto entre os números é: %.2f\n", resultado);
            break;
        case 4: // Divisão do primeiro pelo segundo
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("A divisão do primeiro pelo segundo é: %.2f\n", resultado);
            } else {
                printf("Erro: Divisão por zero não permitida.\n");
            }
            break;
        default: // Tratamento de erro para opçao inválida
            printf("Opção inválida. Tente novamente.\n");
            break;
    }

    system("pause");
    return 0;
}
