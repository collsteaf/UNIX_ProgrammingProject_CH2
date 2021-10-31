#include <stdio.h>
#include <math.h>

int main() {

        double height, flow, w, m, ew, emw, g = 9.8, eff = 0.9;

        printf("Dam height (in meters): ");
        scanf(" %lf", &height);
        printf("Flow rate (in m-cube/sec): ");
        scanf(" %lf", &flow);

        m = flow * pow(10, 3) * pow(10,3);
        w = m * g * height;
        ew = w * eff;
        emw = ew / pow(10, 6);

        printf("%lf megawatt power will be produced by the dam.\n", emw);

        return 0;
}
