#include <stdio.h>

int main() {
    int plan, minutes;
    float totalBill = 0;
    int extraMinutes;

    printf("Select your plan:\n");
    printf("1. Plan 1 - Rs. 500 for 1000 minutes\n");
    printf("2. Plan 2 - Rs. 800 for 2000 minutes\n");
    printf("3. Plan 3 - Rs. 1200 for unlimited minutes\n");
    printf("4. Plan 4 - Custom plan at Rs. 1/minute\n");
    printf("Enter plan choice (1-4): ");
    scanf("%d", &plan);

    
    if (plan == 1 || plan == 2 || plan == 4) {
        printf("Enter minutes used: ");
        scanf("%d", &minutes);
    }

    switch (plan) {
        case 1:
            totalBill = 500;
            if (minutes > 1000) {
                extraMinutes = minutes - 1000;
                totalBill += extraMinutes * 2;
                printf("Plan 1 selected. Usage exceeded by %d minutes.\n", extraMinutes);
                printf("Extra charge: Rs. %d\n", extraMinutes * 2);
            } else {
                printf("Plan 1 selected. Usage within limit.\n");
            }
            break;

        case 2:
            totalBill = 800;
            if (minutes > 2000) {
                extraMinutes = minutes - 2000;
                totalBill += extraMinutes * 2;
                printf("Plan 2 selected. Usage exceeded by %d minutes.\n", extraMinutes);
                printf("Extra charge: Rs. %d\n", extraMinutes * 2);
            } else {
                printf("Plan 2 selected. Usage within limit.\n");
            }
            break;

        case 3:
            totalBill = 1200;
            printf("Plan 3 selected. Unlimited minutes, no extra charges.\n");
            break;

        case 4:
            totalBill = minutes * 1;
            printf("Plan 4 selected. Custom billing at Rs. 1/minute.\n");
            break;

        default:
            printf("Invalid plan choice.\n");
            return 1;
    }

    if (plan >= 1 && plan <= 4) {
        printf("Total Bill: Rs. %.2f\n", totalBill);
    }

    return 0;
}