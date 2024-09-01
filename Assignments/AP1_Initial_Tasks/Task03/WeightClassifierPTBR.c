#include <stdio.h>

int main() {
    float altura, peso;
    char classificacao;

    // Entrada de dados, pedindo altura em metros e o peso em kg
    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    printf("Digite o peso em kg: ");
    scanf("%f", &peso);

    // Estrutura condicional aninhada para verificar a classificação
    if (altura < 1.20) {
        if (peso <= 60) {
            classificacao = 'A';
        } else if (peso <= 90) {
            classificacao = 'D';
        } else {
            classificacao = 'G';
        }
    } else if (altura <= 1.70) {
        if (peso <= 60) {
            classificacao = 'B';
        } else if (peso <= 90) {
            classificacao = 'E';
        } else {
            classificacao = 'H';
        }
    } else {
        if (peso <= 60) {
            classificacao = 'C';
        } else if (peso <= 90) {
            classificacao = 'F';
        } else {
            classificacao = 'I';
        }
    }

    // Exibir a classificação final
    printf("A classificação da pessoa é: %c\n", classificacao);
  
    system("pause");
    return 0;
}
