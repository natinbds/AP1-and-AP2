#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
  
    int num, i = 2;
    int isPrime = 1;  // Assume que o número é primo inicialmente
    
    // Lê o número inteiro positivo
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);
    
    // Verifica se o número é menor ou igual a 1
    if (num <= 1) {
        printf("\nO número deve ser maior que 1.\n");
        return 1; // Encerra o programa com um código de erro
    }
    
    // Verifica se o número é primo
    while (i <= num / 2) {
        if (num % i == 0) {
            isPrime = 0;  // O número não é primo
            break;
        }
        i++;
    }
    
    // Imprime o resultado
    if (isPrime) {
        printf("%d é um número primo.\n", num);
    } else {
        printf("%d não é um número primo.\n", num);
    }

    system("pause");
    return 0;
}
