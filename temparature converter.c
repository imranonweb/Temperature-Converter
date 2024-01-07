#include <stdio.h>

int main() {
    int choice;
    float temperature;

    printf("Welcome to the temperature converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &temperature);
        float fahrenheit = (temperature * 9/5) + 32;
        printf("The temperature in Fahrenheit is %f\n", fahrenheit);
    } else if (choice == 2) {
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        float celsius = (temperature - 32) * 5 / 9;
        printf("The temperature in Celsius is %f\n", celsius);
    } else {
        printf("You are allowed to choose only 1 or 2.\n");
    }

    return 0;
}
