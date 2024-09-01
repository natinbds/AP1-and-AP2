#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    int numero;

    // Entrada de dados
    printf("Digite um número inteiro (>= 0): ");
    scanf("%d", &numero);

    // Em especifico foi pedido o uso de switch-case para resolver a questao, entao aqui está toda a estrutura
    switch(numero) {
        case 1:
            printf("Janeiro\n");
            break;
        case 2:
            printf("Fevereiro\n");
            break;
        case 3:
            printf("Março\n");
            break;
        case 4:
            printf("Abril\n");
            break;
        case 5:
            printf("Maio\n");
            break;
        case 6:
            printf("Junho\n");
            break;
        case 7:
            printf("Julho\n");
            break;
        case 8:
            printf("Agosto\n");
            break;
        case 9:
            printf("Setembro\n");
            break;
        case 10:
            printf("Outubro\n");
            break;
        case 11:
            printf("Novembro\n");
            break;
        case 12:
            printf("Dezembro\n");
            break;
        default:
            printf("Mês Inválido, o calendário possui apenas 12 meses, tente outro valor\n");
            break;
    }

    system("pause");
    return 0;
}
