#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    int escolha;
    
    // Exibe o menu de opções
    printf("Escolha uma opcao:\n");
    printf("1. Conte de 1 ate 10\n");
    printf("2. Conte de 1 ate 100\n");
    printf("3. Conte de 1 ate 1000\n");
    scanf("%d", &escolha);

    // Executa a opção escolhida, foi pedido o uso de while nessa questão
    switch (escolha) {
        case 1: {
            int contador = 1;
            while (contador <= 10) {
                printf("%d\n", contador);
                contador++;
            }
            break;
        }
      
        case 2: {
            int contador = 1;
            while (contador <= 100) {
                printf("%d\n", contador);
                contador++;
            }
            break;
        }
      
        case 3: {
            int contador = 1;
            while (contador <= 1000) {
                printf("%d\n", contador);
                contador++;
            }
            break;
        }
      
        default:
            printf("Opcao invalida!\n");
            break;
    }

    system("pause");
    return 0;
}
