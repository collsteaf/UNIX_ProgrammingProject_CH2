#include <stdio.h>
#include <math.h>

int main() {

        float velocity, distance, acceleration, time;

        printf("Enter takeoff speed (km/h) => ");
        scanf(" %f", &velocity);
        printf("Enter distance (meters) => ");
        scanf(" %f", &distance);

        velocity = velocity * 5.0 / 18.0;
        acceleration = pow(velocity, 2) / (2 * distance);
        time = velocity / acceleration;
        printf("Acceleration: %.2f m/s^2\nTime required: %.3f seconds\n", acceleration, time);

        return 0;
}
