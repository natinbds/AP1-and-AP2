#include <stdio.h>

/* Este código é um verificador de ano bissexto, é necessário seguir as 5 etapas
para poder confirmar, as etapas são as seguintes, e foram fornecidas pela professora:

i. Se o ano for uniformemente divisível por 4, vá para a etapa 2. ...
ii. Se o ano for uniformemente divisível por 100, vá para a etapa 3. ...
iii. Se o ano for uniformemente divisível por 400, vá para a etapa 4. ...
iv. O ano é bissexto (tem 366 dias).
v. O ano não é um ano bissexto (tem 365 dias)
*/

int main() {
    int ano;

    // Solicita ao usuário o ano
    printf("Digite um ano: ");
    scanf("%d", &ano);

    // Verifica se o ano é bissexto
    if (ano % 4 == 0) {
        if (ano % 100 == 0) {
            if (ano % 400 == 0) {
                printf("O ano %d é bissexto.\n", ano);
            } else {
                printf("O ano %d não é bissexto.\n", ano);
            }
        } else {
            printf("O ano %d é bissexto.\n", ano);
        }
    } else {
        printf("O ano %d não é bissexto.\n", ano);
    }

    return 0;
}
