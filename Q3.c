#include <stdio.h>

int main() {

        int hr, min;
        float t, T;

        printf("Enter time (in hr min): ");
        scanf(" %d %d", &hr, &min);

        t = hr + min / 60.0;
        T = ((4 * t * t) / (t + 2)) - 20;

        printf("Temperature in the freezer is %f Celsius.\n", T);

        return 0;
}
