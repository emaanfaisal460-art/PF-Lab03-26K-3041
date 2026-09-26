#include <stdio.h>

int main() {
    int people;
    float TWeight;

    printf("Enter number of people: ");
    scanf("%d", &people);

    printf("Enter total combined weight (kg): ");
    scanf("%f", &TWeight);

    int weightExceeded = (TWeight > 1000);
    int peopleExceeded = (people > 10);

    if (weightExceeded && peopleExceeded) {
        printf("Elevator Status: ENTRY DENIED\n");
        printf("Reason: Both weight limit (1000 kg) and people limit (10) exceeded.\n");
    }
    else if (weightExceeded) {
        printf("Elevator Status: ENTRY DENIED\n");
        printf("Reason: Overweight - total weight exceeds 1000 kg.\n");
    }
    else if (peopleExceeded) {
        printf("Elevator Status: ENTRY DENIED\n");
        printf("Reason: People limit exceeded - more than 10 people.\n");
    }
    else {
        printf("Elevator Status: NORMAL OPERATION\n");
        printf("The elevator can operate normally.\n");
    }

    return 0;
}

