#include <stdio.h> 

/* first of all, tribonacci it's like fibonacci sequenci but calculating three terms
I have just changed some logic ideas on the conditional functions in my recurrence function
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
  
    printf("O %d-th tribonacci term is %d\n", n, result); 
    // system(“pause”); - - - i real dont know why this trash doesnt work today, i will not use chat-gpt or some ai because i just want to upload my old ap2 files, if the code its working, thats fine for me
  // second note about system pause, i think its because only works on vscode, when you need to creat a stop, and today, 11 september I already using Online C Compiler XD
    return 0; 
}
