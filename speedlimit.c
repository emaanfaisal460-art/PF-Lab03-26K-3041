#include <stdio.h>

int main() {
    int zone;
    float driverSpeed, speedLimit, fine = 0;

    printf("Select zone type:\n");
    printf("1. School Zone\n");
    printf("2. Highway\n");
    printf("3. Residential Area\n");
    printf("Enter zone type (1-3): ");
    scanf("%d", &zone);

    printf("Enter driver's speed (km/h): ");
    scanf("%f", &driverSpeed);

    switch (zone) {
        case 1:
            speedLimit = 30;
            printf("Zone: School Zone (Limit: 30 km/h)\n");
            break;
        case 2:
            speedLimit = 100;
            printf("Zone: Highway (Limit: 100 km/h)\n");
            break;
        case 3:
            speedLimit = 50;
            printf("Zone: Residential Area (Limit: 50 km/h)\n");
            break;
        default:
            printf("Invalid zone type.\n");
            return 1;
    }

    if (driverSpeed > speedLimit) {
        if (driverSpeed > speedLimit + 20) {
            fine = 1000 * 2;
            printf("Violation: Speed exceeds limit by more than 20 km/h.\n");
            printf("Fine Doubled!\n");
        } else {
            fine = 1000;
            printf("Violation: Speed exceeds limit.\n");
        }
        printf("Final Fine Amount: Rs. %.2f\n", fine);
    } else {
        printf("No Violation: Speed is within the limit.\n");
        printf("Final Fine Amount: Rs. 0\n");
    }

    return 0;
}