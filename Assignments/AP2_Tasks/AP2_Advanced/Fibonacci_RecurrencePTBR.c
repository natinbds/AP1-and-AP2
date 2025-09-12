#include <stdio.h> 
#include <stdlib.h> 

/* exercicio sobre calcular a sequencia de fibonacci, e falar qual o numero N que a pessoa procura na sequencia
parece simples mas exigiu muita lógica de recorrencia*/

int fibonacci(int n) { 
    if (n <= 1) 
    return n; 
    else 
    return fibonacci(n-1) + fibonacci(n-2); 
} 

int main() { 
  int n = 5;  // apenas troque o valor de n, antes de rodar o codigo, nao precisa ficar fazendo pedido pro usuario com scanf e tal
  int resultado = fibonacci(n); 
  
  printf("O %d-ésimo termo da sequência de Fibonacci é %d\n", n, resultado); 
  
 // System(“pause”); - - - - - system pause nao ta funcionando aqui, só coloquei em comentario e o codigo rodou 
  return 0; 
}
