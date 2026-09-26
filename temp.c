#include <stdio.h>

int main() {
    float temp, pressure;

    printf("Enter temperature reading (°C): ");
    scanf("%f", &temp);

    printf("Enter pressure reading (PSI): ");
    scanf("%f", &pressure);

    if (temp > 100 || pressure > 250) {
        printf("Machine Status: SHUTDOWN\n");
        printf("Reason(s):\n");
        if (temp > 100) {
            printf("Temperature exceeds 100°C.\n");
        }
        if (pressure > 250) {
            printf("Pressure exceeds 250 PSI.\n");
        }
    }
    else if ((temp >= 85 && temp <= 100) &&
             (pressure >= 200 && pressure <= 250)) {
        printf("Machine Status: WARNING MODE\n");
        printf("Temperature and pressure are both in the elevated range.\n");
    }
    else {
        printf("Machine Status: NORMAL OPERATION\n");
    }

    return 0;
}