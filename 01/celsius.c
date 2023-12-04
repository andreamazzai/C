/* Converte una temperatura Fahreneit in Celsius */
#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void) {
    float celsius, fahrenheit;
    printf("Digita la temperatura in gradi Fahreneit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("Temperatura °F = %f\n", fahrenheit );
    printf("Temperatura °C = %.1f\n", celsius); // stampa solo un decimale
}