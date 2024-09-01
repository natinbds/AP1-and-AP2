#include <stdio.h>
#include <windows.h>

/*Esse algoritmo é projetado para realizar a soma de S onde 
o numerador é sempre 1 e os denominadores escalam de 1 até n*/

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    int n;
    double soma = 0.0;

    // Entrada de dados com tratamento de erro que garanta que n seja positivo
    do {
        printf("Digite um valor inteiro positivo para n: ");
        scanf("%d", &n);
    } while (n <= 0);

    // Cálculo da soma
    for (int i = 1; i <= n; i++) {
        soma += 1.0 / i;
    }

    // Saída do resultado
    printf("A soma S é: %.6lf\n", soma);

    system("pause");
    return 0;
}
