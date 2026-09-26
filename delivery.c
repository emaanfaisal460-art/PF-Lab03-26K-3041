#include <stdio.h>

int main() {
    float amount;
    int PMember, WithinCity;

    printf("Enter order amount (Rs.): ");
    scanf("%f", &amount);

    printf("Is the customer a premium member? (1 = Yes, 0 = No): ");
    scanf("%d", &PMember);

    printf("Is the delivery location within city limits? (1 = Yes, 0 = No): ");
    scanf("%d", &WithinCity);

    
    if (amount > 3000 || PMember == 1) {
        printf("Delivery Charge: Free Delivery\n");
    } else {
        printf("Delivery Charge: Delivery charges apply\n");
    }

    
    if (amount < 50000 && WithinCity == 1) {
        printf("COD Availability: Cash on Delivery is available\n");
    } else {
        printf("COD Availability: Cash on Delivery is NOT available\n");
        printf("Reason(s):\n");
        if (amount >= 50000) {
            printf("- Order amount is Rs. 50,000 or more.\n");
        }
        if (WithinCity != 1) {
            printf("- Delivery location is outside city limits.\n");
        }
    }

    return 0;
}