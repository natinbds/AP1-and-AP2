#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 

/* another mathematics calculator, that's time, this code are a exponentiator, like 2² = 4
now, we used recurrence, see the returns i have used, but i think it's not a advanced task*/

double pot(double x, int n) { 
  if (n == 0) { 
      return 1.0; 
  } else { 
      return x * pot(x, n - 1); 
  } 
}    

int main() { 
  // setlocale(LC_ALL, "Portuguese"); - - - - dumb setlocale for my country language, ignore

  double x; //using double for massive values on x 
  int n; 
  
  printf("Type a value for the base: \n"); 
    scanf("%lf", &x); 
  printf("Type the exponent, the number n that will multiply the base by 'n' times \n"); 
    scanf("%d", &n); 
  
  double result = pot(x,n); 
    printf("The resulting value of this power is %.2lf\n", result); 
  
  system("pause"); 
  return 0; 
}
