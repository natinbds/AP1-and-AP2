#include <stdio.h>

int main() {
    char nome[50];  //Declaro uma varíavel do tipo caractere com 50 espaços de memória

  //Uma breve mensagem saudosa para o usuário, em seguida requisitação do nome do usuário
    printf("Olá eu sou o Nº 1, como é seu nome?\n");
    scanf("%49s", nome);

  //Novamente uma mensagem saudosa, porém, com o nome do usuário
    printf("Bem-vindo ao clube %s\n", nome);

    system("pause");
    return 0;
}
