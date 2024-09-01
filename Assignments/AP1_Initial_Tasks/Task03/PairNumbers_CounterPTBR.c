#include <stdio.h>

int main() {
    int N;
    
    // Lê o valor de N
    printf("Digite o valor de N: ");
    scanf("%d", &N);
    
    int contador = 1;
    int numero = 2;
    
    // Exibe os N primeiros números pares
    while (contador <= N) {
        printf("%d", numero);
        if (contador < N) {
            printf(", ");
        }
        numero += 2;
        contador++;
    }
  
    printf("\n");

    system("pause");
    return 0;
}
