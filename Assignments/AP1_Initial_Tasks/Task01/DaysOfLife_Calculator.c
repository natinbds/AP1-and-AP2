#include <stdio.h>

int main() {
  //Declaring variables, with name, years old, and a variable what will receive the final value
    char name[50];  
    int yearsOld;
    int daysOfLife;

    //Requesting name and how many years old user's have
    printf("What's your name?\n");
    scanf("%49s", name);  
  
    printf("How many years old you have user?\n");
    scanf("%d", &yearsOld); 

    //Function who's calculate the days of life user's (don't counting months)
    daysOfLife = yearsOld * 365;

    //Printing the final value of days of life user's (don't counting months)
    printf("Olá %s! Você tem aproximadamente %d dias de vida.\n", name, daysOfLife);

    system("pause");
    return 0;
}
