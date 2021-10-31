#include <stdio.h>

int main() {

        float yard_len, yard_wid, house_len, house_wid, grass_area, rate, time;

        printf("Enter length and width of yard (feet): ");
        scanf(" %f %f", &yard_len, &yard_wid);
        printf("Enter length and width of house (feet): ");
        scanf(" %f %f", &house_len, &house_wid);

        rate = 2;
        grass_area = (yard_len * yard_wid) - (house_len * house_wid);
        time = grass_area / rate;
        printf("Time required to cut the grass: %.3f seconds\n", time);

        return 0;
}
