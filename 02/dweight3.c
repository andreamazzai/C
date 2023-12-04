/* Calcola il peso volumetrico di un pacco */
#include <stdio.h>
#define INCHES_PER_POUND 166
int main(void) {
    int height, lenght, width, volume, weight;
    printf("Inserisci l'altezza della scatola: ");
    scanf("%d", &height);
    printf("Inserisci la lunghezza della scatola: ");
    scanf("%d", &lenght);
    printf("Inserisci la larghezza della scatola: ");
    scanf("%d", &width);
    volume = height * lenght * width;
    weight = (volume + INCHES_PER_POUND -1) / INCHES_PER_POUND;

    printf("Dimensioni: L%d x W%d x H%d\n", lenght, width, height);
    printf("Volume: %d\n", volume);
    printf("Peso dimensionale: %d\n", weight);

    return 0;
}