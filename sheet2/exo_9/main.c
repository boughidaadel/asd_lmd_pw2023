#include <stdio.h>

int main() {
    float price;
    printf("Enter the price of the product: ");
    scanf("%f", &price);
    float discount = price * 0.10;
    float new_price = price - discount;
    printf("The amount of the discount is: %.2f\n", discount);
    printf("The new price after the discount is: %.2f\n", new_price);
    return 0;
}
