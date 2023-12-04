/* Calcola il peso volumetrco di un pacco */
#include <stdio.h>

int main(void) {
    // int height, lenght, width, volume, weight;
    int height = 8, lenght = 12, width = 10, volume, weight;
    height = 8;
    lenght = 12;
    width = 10;
    volume = height * lenght * width;
    weight = (volume + 165) / 166;

    printf("Dimensioni: L%d x W%d x H%d\n", lenght, width, height);
    printf("Volume: %d\n", volume);
    printf("Peso dimensionale: %d\n", weight);

    return 0;
}
