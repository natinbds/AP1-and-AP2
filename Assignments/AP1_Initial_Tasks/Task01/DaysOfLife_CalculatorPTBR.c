#include <stdio.h>

int main() {
  //Declaração de varíaveis, respectivos, o nome do usuário, anos e varíavel que irá armazenar o valor dos dias de vida do usuário
    char nome[50];  
    int idade;
    int diasDeVida;

    //Solicitando nome e idade atual do usuário
    printf("Qual é o seu nome?\n");
    scanf("%49s", nome);  
  
    printf("Quantos anos você tem?\n");
    scanf("%d", &idade); 

    //Função que calcula os dias de vida
    diasDeVida = idade * 365;

    //Imprime a quantidade aproximada de dias de vida (independente de quantos meses de aniversário o mesmo já tenha)
    printf("Olá %s! Você tem aproximadamente %d dias de vida.\n", nome, diasDeVida);

    system("pause");
    return 0;
}
