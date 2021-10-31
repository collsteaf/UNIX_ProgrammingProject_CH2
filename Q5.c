#include <stdio.h>

int main() {

        int min;
        float vtbi, rate;

        printf("Volume to be infused (ml) => ");
        scanf(" %f", &vtbi);

        printf("Minutes over which to infuse => ");
        scanf(" %d", &min);

        rate = vtbi * 60.0 / min;
        printf("\nVTBI: %.0f ml\nRate: %.0f ml/hr\n", vtbi, rate);

        return 0;
}
