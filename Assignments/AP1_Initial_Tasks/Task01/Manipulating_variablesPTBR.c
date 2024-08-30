#include <stdio.h>

int main() {
    int A, B, C;

    //Criando as variaveis conforme a questao pede
    A = 1;
    B = 2;
    C = 3;

    //Trocando os valores conforme as requisicoes da questao, sem variavel auxiliar 
    A = A + B + C; // A agora é 6 (1 + 2 + 3)
    B = A - (B + C); // B agora é 1 (6 - (2 + 3))
    C = A - (B + C); // C agora é 2 (6 - (1 + 2))
    A = A - (B + C); // A agora é 3 (6 - (1 + 2))

    //Imprime o valor final de A, B, C de forma respectiva e como requisitada na questao
    printf("%d %d %d\n", A, B, C);

    system("pause");
    return 0;
}
