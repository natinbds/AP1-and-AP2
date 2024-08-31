#include <stdio.h>

int main() {
    float purchaseValue, purchaseWithDiscount;

    //Request to user the value of purchase
    printf("Digite o valor total da compra: R$ ");
    scanf("%f", &purchaseValue);

    // Verify if the purchase price is higher than 100 doll, and apply the 10% discount
    if (purchaseValue >= 100.00) {
        purchaseWithDiscount = purchaseValue * 0.90;
    } else {
        purchaseWithDiscount = purchaseValue;
    }

    // Show's the final price with a 10% discount applied
    printf("O valor final a ser pago é: R$ %.2f\n", purchaseWithDiscount);

    system("pause");
    return 0;
}
