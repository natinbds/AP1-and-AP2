#include <stdio.h>

int main(){

    int secretNumber = 37;
    int attempts;
    int attemptsMax = 6;
    int counter = 0;

    // Loop creates for finishing with six attempts
    while (counter < attemptsMax) {
        printf("\nChoose a number between 0 and 50: ");
        scanf("%d", &attempts);

        //Verifying if user's got the secret number right
        if (attempts == secretNumber) {
            printf("\nCongratulations, you discover the finish number\n");
            break; 
        } else {
            printf("Wrong number, try it again!\n");
        }
        counter++;
    }

    //Error handling if all attempts were used and the player did not get it right
    if (counter == attemptsMax  && attempts != secretNumber) {
        printf("\nYou failed to guess the number in 6 attempts.\n");
        printf("The secret number is: %d\n", secretNumber);
    }

    system("pause");
    return 0;
}
