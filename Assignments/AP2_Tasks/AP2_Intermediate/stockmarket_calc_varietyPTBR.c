#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// um simulador de bolsa de ações generico, testando funcionalidades de structs

struct bolsa {
    char nomeCompanhia[50];
    char atuacao[50];
    float valorAtual;
    float valorAnterior;
    double variacao;
};

int main(){
  struct bolsa bolsa1;
   
      printf("Digite o nome da companhia desejada: ");
      scanf("%s", bolsa1.nomeCompanhia);
      fflush(stdin);
      printf("Informe a area na bolsa que a companhia pertence: ");
      scanf("%s", bolsa1.atuacao);
          fflush(stdin);
   
      printf("Valor atual da acao(em reais R$0.00): ");
      scanf("%f", &bolsa1.valorAtual);
      fflush(stdin);
   
      printf("Valor anterior da acao (em reais): ");
      scanf("%f", &bolsa1.valorAnterior);
   
   
      bolsa1.variacao = ((bolsa1.valorAtual - bolsa1.valorAnterior) / bolsa1.valorAnterior) * 100;
   
      printf("\nDados da acao:\n");
      printf("Nome da companhia: %s\n", bolsa1.nomeCompanhia);
      printf("Area de atuacao: %s\n", bolsa1.atuacao);
      printf("Valor atual da acao: %.2f reais\n", bolsa1.valorAtual);
      printf("Valor anterior da acao: %.2f reais\n", bolsa1.valorAnterior);
      printf("Variacao percentual: %.2f%%\n", bolsa1.variacao);
   
      return 0;
}
