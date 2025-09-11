#include <stdio.h> 
#include <stdlib.h> 

// this code is a infinite sum calculator, but if you type negative numbers, are like typing '='
//its intermediate level because we are using pass by integer on function int sum

int sum(int number) {
  printf("Type a natural number (typing negative values will stop the sum): "); //
  scanf("%d", &number); 
if (number < 0) { 
    return 0; 
  } else { 
    return number + sum(number); 
         } 
  } 

int main() { 

  int number; 
  printf("the result of your sum is: %d\n", sum(number)); 
  system("pause"); 
return 0; 
}
