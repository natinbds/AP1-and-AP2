#include <stdio.h>

int main(){

    int numero_secreto = 37;
    int tentativa;
    int max_tentativas = 6;
    int contador = 0;

    // Laço de repetição para até 6 tentativas
    while (contador < max_tentativas) {
        printf("Digite um número entre 0 e 50: ");
        scanf("%d", &tentativa);

        // Verificar se o jogador acertou o número secreto, se acertar ele fecha o código e dá parabéns
        if (tentativa == numero_secreto) {
            printf("Parabéns, você acertou!\n");
            break; 
        } else {
            printf("Você errou. Tente novamente!\n");
        }
        contador++;
    }

    // Caso de erro para se todas as tentativas foram usadas e o jogador não acertou
    if (contador == max_tentativas && tentativa != numero_secreto) {
        printf("Você não conseguiu adivinhar o número em 6 tentativas.\n");
        printf("O número secreto era: %d\n", numero_secreto);
    }

    system("pause");
    return 0;
}
