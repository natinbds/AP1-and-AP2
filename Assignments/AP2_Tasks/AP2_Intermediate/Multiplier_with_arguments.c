#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h>

/*code on ptbr, but only the final-users messages, all the code can be used on english
this code is a multiplier function from a calculator, based by using pass by arguments

esse código é uma funcao que multiplica dois valores*/

int mult(int a, int b) { 
    if (b == 0) { 
        return 0; 
    } else { 
        return a + mult(a, b - 1); 
           } 
    } 

int main() { 
  setlocale(LC_ALL, "Portuguese"); 
  int a, b; 
  
  printf("Digite o primeiro número: "); 
    scanf("%d", &a); 
  printf("Digite o segundo número: "); 
    scanf("%d", &b); 
  printf("O resultado da multiplicação é: %d\n", mult(a, b)); 
  
  system("pause"); 
  return 0; 
} 
