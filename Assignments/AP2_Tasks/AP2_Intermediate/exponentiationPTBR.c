#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 

/* outro exercicio de matematica, mas repare bem que estou usando recorrencia na funcao double pot, nao vou explicar
recorrencia aqui pois só estou disponibilizando meus códigos que usei durante o processo de ensino em ap2, consulte 
seu professor, monitor ou meu repositorio 'Monitoria_AP2' que disponibilizei em 2024 aqui no github mesmo */

double pot(double x, int n) { 
  if (n == 0) { 
      return 1.0; 
  } else { 
      return x * pot(x, n - 1); 
  } 
}    

int main() { 
  setlocale(LC_ALL, "Portuguese"); 
  double x; //usei double por medo de estourar memoria testando em valores grandes, mas double é do tipo inteiro também
  int n; 
  
  printf("Digite a base, numero x a ser potencializado: \n"); 
    scanf("%lf", &x); 
  printf("Digite o expoente, o numero n que irá multiplicar x por 'n' vezes: \n"); 
    scanf("%d", &n); 
  
  double resultado = pot(x,n); 
    printf("O valor resultante dessa potencia e %.2lf\n", resultado); 
  
  system("pause"); 
  return 0; 
}
