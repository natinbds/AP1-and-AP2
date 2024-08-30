#include <stdio.h>

int main() {
    char nick[50];  //Declaring a variable with char type, with fifty memory spaces, for receiving the usuary nick

  //Previous greetings for usuary and requesting the usuary nick
    printf("Hey!! Whats up? I'm the number one, and you, what's your name?\n");
    scanf("%49s", nick);

  //Again greetings for usuary, but with usuary nick
    printf("Welcome to the club %s\n", nick);

    system("pause");
    return 0;
}
