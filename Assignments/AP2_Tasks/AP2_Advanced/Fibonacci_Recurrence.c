#include <stdio.h> 
#include <stdlib.h> 

/* exercise about calculating the Fibonacci sequence, and stating which number N the person is
looking for in the sequence seems simple but required a lot of recursive logic */

int fibonacci(int n) { 
    if (n <= 1) 
    return n; 
    else 
    return fibonacci(n-1) + fibonacci(n-2); 
} 

int main() { 
  int n = 5;  //i haved define the n-th term, just change here and test, don't need a user request
  int result = fibonacci(n); 
  
  printf("The %d-th term of the Fibonacci sequence is %d\n", n, result); 
  
  // system(“pause”); - - - - - system pause doesn't work here wtf ???
  return 0; 
}
