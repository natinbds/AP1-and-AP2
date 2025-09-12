#include <stdio.h> 

/* Em primeiro lugar, Tribonacci é como a sequência de Fibonacci, mas calculando três termos
Acabei de mudar algumas idéias lógicas sobre as funções condicionais na minha função de recorrência
*/

int tribonacci(int n) { 
    if (n == 0) { 
        return 0; 
    } else if (n == 1 || n == 2) { 
        return 1; 
    } else { 
        return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3); 
    } 
} 

int main() { 
    int n = 5;   
    int result = tribonacci(n); 
  
    printf("O %d termo em tribonacci é %d\n", n, result); 
    //system("pause"); - - - - - Eu realmente não sei por que esse lixo não funciona hoje, não vou usar chat-gpt ou alguma IA porque só quero fazer upload dos meus arquivos AP2 antigos, se o código estiver funcionando, tudo bem para mim
//segunda nota sobre a pausa do sistema, acho que é porque só funciona no vscode, quando você precisa criar uma parada, e hoje, 11 de setembro eu só estou usando o Online C Compiler XD
    return 0; 
}
