#include <stdio.h>

int main() {
    int passedPF, creditHours;
    float grade;

    printf("Enter pass status for Programming Fundamentals (1 = passed, 0 = not passed): ");
    scanf("%d", &passedPF);

    printf("Enter grade point for Programming Fundamentals: ");
    scanf("%f", &grade);

    printf("Enter total completed credit hours: ");
    scanf("%d", &creditHours);

    if (passedPF == 1 && grade >= 2.5 && creditHours >= 30) {
        printf("Eligible: You can register for Advanced Programming.\n");
    } else {
        printf("Not Eligible: You cannot register for Advanced Programming.\n");
        printf("Reason(s):\n");
        if (passedPF != 1) {
            printf("- You have not passed Programming Fundamentals.\n");
        }
        if (grade < 2.5) {
            printf("- Your grade point in Programming Fundamentals is below 2.5.\n");
        }
        if (creditHours < 30) {
            printf("- You have not completed at least 30 credit hours.\n");
        }
    }

    return 0;
}