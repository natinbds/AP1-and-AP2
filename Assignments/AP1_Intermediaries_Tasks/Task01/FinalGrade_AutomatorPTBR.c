#include <stdio.h>
#include <windows.h>

/*Esse algoritmo foi projetado para dar letras as respectivas notas de 5 alunos x
sendo procurado por matrícula, e baseado na nota final do individuo, entregasse
um conceito de D (menor nota), até A (maior nota).*/

int main() {
    SetConsoleOutputCP(CP_UTF8);
  
    int matricula, i = 0;
    float nota;
    char conceito;

    while (i < 5) {
        printf("Digite o número de matrícula do aluno %d: ", i + 1);
        scanf("%d", &matricula);

        // Tratamento de erro para notas fora do intervalo [0, 10]
        do {
            printf("Digite a nota final do aluno (0 a 10): ");
            scanf("%f", &nota);
            if (nota < 0 || nota > 10) {
                printf("Nota inválida! Digite novamente.\n");
            }
        } while (nota < 0 || nota > 10);

        // Atribuição de conceito com base na nota
        if (nota >= 0 && nota <= 4.9) {
            conceito = 'D';
        } else if (nota >= 5.0 && nota <= 6.9) {
            conceito = 'C';
        } else if (nota >= 7.0 && nota <= 8.9) {
            conceito = 'B';
        } else if (nota >= 9.0 && nota <= 10.0) {
            conceito = 'A';
        }

        // Exibição dos resultados
        printf("Aluno %d com matrícula %d obteve conceito: %c\n", i + 1, matricula, conceito);
        i++;
    }

    system("pause");
    return 0;
}
