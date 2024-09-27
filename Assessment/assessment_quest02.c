#include <stdio.h>
#include <stdlib.h>
#include "somatorio.h"

float soma(int N) {
    float S = 1.0;
        for (int n = 1; n <= N; ++n) {
            int fatorial = 1;
                for (int i = 1; i <= n; ++i) {
                    fatorial *= i;
                }
                S += 1.0 / fatorial;
        }
    return S;
}

int main(){

    int N;
    float resultado;

    printf("Digite o valor de N (numero inteiro positivo)\n");
    scanf("%d", &N);

    resultado = soma(N);
    printf("O resultado do somatorio em que N = %d e: %.4f\n", N, resultado);
    
    return 0;
}