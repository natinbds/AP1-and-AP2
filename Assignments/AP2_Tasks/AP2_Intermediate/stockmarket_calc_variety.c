#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// a generic stock market simulator, testing functionalities of structs

struct stockmarket {
    char CompanyName[50];
    char CompanyArea[50];
    float currentValue;
    float oldValue;
    double variation;
};

int main(){
  struct stockmarket stockmarket1;
   
      printf("Type your company name: ");
      scanf("%s", stockmarket1.CompanyName);
      fflush(stdin);
      printf("Inform the area in the stock market that the company belongs to: ");
      scanf("%s", stockmarket1.CompanyArea);
          fflush(stdin);
   
      printf("What is the current stock value? (pls in BRL format R$0.00): ");
      scanf("%f", &stockmarket1.currentValue);
      fflush(stdin);
   
      printf("previous value of the stock(also, in BRL 0.00): ");
      scanf("%f", &stockmarket1.oldValue);
   
   
      stockmarket1.variation = ((stockmarket1.currentValue - stockmarket1.oldValue) / stockmarket1.oldValue) * 100;
   
      printf("\nStock Data Variation:\n");
      printf("Company name: %s\n", stockmarket1.CompanyName);
      printf("Stock Market Area: %s\n", stockmarket1.CompanyArea);
      printf("Actual stock value: %.2f reais\n", stockmarket1.currentValue);
      printf("Previous stock value: %.2f reais\n", stockmarket1.oldValue);
      printf("Variation percentage: %.2f%%\n", stockmarket1.variation);
   
      return 0;
}
