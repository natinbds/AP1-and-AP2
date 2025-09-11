#include <stdio.h> 
#include <stdlib.h> 

// esse código calcula a soma de números naturais, se for valor negativo, é o ponto de parada da soma
//nivel intermediario pois usei passagem de parametros por valor, usando inteiro na funçao int sum

int sum(int numero) {
  printf("Digite um numero natural (ou um numero negativo para parar): "); //
  scanf("%d", &numero); 
if (numero < 0) { 
    return 0; 
  } else { 
    return numero + sum(numero); 
         } 
  } 

int main() { 

  int numero; 
  printf("A soma dos numeros naturais inseridos e %d\n", sum(numero)); 
  system("pause"); 
return 0; 
}
