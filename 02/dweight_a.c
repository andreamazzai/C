/* Calcola il peso volumetrico di un pacco */
#include <stdio.h>

int main(void) {
    int height = 8, lenght = 12, width = 10, volume, weight;
    volume = height * lenght * width;

    printf("Dimensioni: L%d x W%d x H%d\n", lenght, width, height);
    printf("Volume: %d\n", volume);
    printf("Peso dimensionale: %d\n", (volume + 165) / 166);

    return 0;
}
