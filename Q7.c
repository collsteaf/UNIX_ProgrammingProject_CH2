#include <stdio.h>

int main() {

        double gallons, efficiency, btu, gallons_per_barrel, btu_per_barrel;

        printf("Enter gallons of oil burned => ");
        scanf(" %lf", &gallons);
        printf("Enter efficiency of oil furnace => ");
        scanf(" %lf", &efficiency);

        gallons_per_barrel = 42;
        btu_per_barrel = 5800000;

        btu = (efficiency / 100.0) * (gallons / gallons_per_barrel) * btu_per_barrel;
        printf("Energy equivalent of %.2lf BTUs of heat are delivered to the house.\n", btu);

        return 0;
}
