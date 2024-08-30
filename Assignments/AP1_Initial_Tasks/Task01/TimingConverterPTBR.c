#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
  
    int escolha;
    int horas, minutos, segundos, totalSegundos;

    // Menu para o usuário escolher a operação
    printf("Escolha uma das opções abaixo:\n");
    printf("1. Converter horas, minutos e segundos para segundos\n");
    printf("2. Converter segundos para horas, minutos e segundos\n");
    printf("Digite a sua escolha (1 ou 2): ");
    scanf("%d", &escolha);
  
    //Menu 1: Converter horas, minutos e segundos para segundos
    if (escolha == 1) {
        printf("Digite o tempo transcorrido no cronômetro:\n");
        printf("Horas: ");
        scanf("%d", &horas);
        printf("Minutos: ");
        scanf("%d", &minutos);
        printf("Segundos: ");
        scanf("%d", &segundos);

        totalSegundos = (horas * 3600) + (minutos * 60) + segundos;
        
        printf("O tempo total em segundos é: %d segundos\n", totalSegundos);

    } else if (escolha == 2) {
        //Menu 2: Converter segundos para horas, minutos e segundos
        printf("Digite o tempo transcorrido em segundos: ");
        scanf("%d", &totalSegundos);

        horas = totalSegundos / 3600;
        minutos = (totalSegundos % 3600) / 60;
        segundos = totalSegundos % 60;

        printf("O tempo é: %d horas, %d minutos e %d segundos\n", horas, minutos, segundos);

    } else {
        //Tratamento de erro, por opção inválida
        printf("Opção inválida! Por favor, escolha 1 ou 2.\n");
    }

    system("pause");
    return 0;
}
