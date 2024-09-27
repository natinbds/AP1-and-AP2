#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct paciente {
    int CPF;
    char nome[50];
    float massaCorporal[3];  // Vetor de 3 massas corporais
    float altura;  // Uma única altura
} v[3];

void le_escreve() {
    int i, j;

    for (i = 0; i < 3; i++) {
        printf("Digite o CPF, por favor.\n");
        scanf("%i", &v[i].CPF);
        
        for (j = 0; j < 3; j++) {
            printf("Por favor, digite sua massa corporal(em KG).\n");
            scanf("%f", &v[i].massaCorporal[j]);  // Use %f para float
        }
        
        printf("Por favor, digite sua altura (em metros).\n");
        scanf("%f", &v[i].altura);  // Leia a altura como um único float
        
        printf("Digite o nome\n");
        scanf(" %[^\n]s", v[i].nome);  // Não use & com arrays de char
    }

    for (i = 0; i < 3; i++) {
        printf("CPF: %i\n", v[i].CPF);
        printf("massaCorporal 1: %.2f\n", v[i].massaCorporal[0]);
        printf("massaCorporal 2: %.2f\n", v[i].massaCorporal[1]);
        printf("massaCorporal 3: %.2f\n", v[i].massaCorporal[2]);
        printf("Altura: %.2f\n", v[i].altura);  // Imprime a altura
        printf("Nome: %s\n", v[i].nome);
    }
}

void atualiza() {
    int i;
    printf("Os nomes antigos são:\n");
    
    for (i = 0; i < 3; i++) {
        printf("%s\n", v[i].nome);  // Exibe os nomes antigos
    }

    printf("Atualize os nomes:\n");
    
    for (i = 0; i < 3; i++) {
        scanf(" %[^\n]s", v[i].nome);  // Atualiza os nomes
    }

    printf("Atualizado ficará:\n");
    for (i = 0; i < 3; i++) {
        printf("Nome: %s\n", v[i].nome);
    }
}

float imc() {
    int i, j;
    float soma[3], res[3];

    for (i = 0; i < 3; i++) {
        soma[i] = 0;
        printf("Diga os valores de peso para o IMC da pessoa %d\n", i+1);
        for (j = 0; j < 3; j++) {
            scanf("%f", &v[i].massaCorporal[j]);  // Leia o peso como float
            soma[i] += v[i].massaCorporal[j];
        }
        
        printf("Diga a altura para o IMC da pessoa %d\n", i+1);
        scanf("%f", &v[i].altura);  // Leia a altura como float

        res[i] = soma[i] / (v[i].altura * v[i].altura);  // Cálculo do IMC
        printf("IMC da pessoa %d: %.2f\n", i+1, res[i]);

        if (res[i] <= 18.4) {
            printf("Está abaixo do peso\n");
        } else if (res[i] >= 18.5 && res[i] <= 24.9) {
            printf("Peso normal\n");
        } else if (res[i] >= 25) {
            printf("Acima do peso\n");
        }
    }
}

int main() {
    le_escreve();
    atualiza();
    imc();

    return 0;
}
