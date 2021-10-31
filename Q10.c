#include <stdio.h>

int main() {

        float x1, y1, x2, y2, slope, x_mid, y_mid, m, c;

        printf("Enter coordinates of Point 1 (x1, y1) => ");
        scanf(" %f %f", &x1, &y1);
        printf("Enter coordinates of Point 2 (x2, y2) => ");
        scanf(" %f %f", &x2, &y2);

        slope = (y2 - y1) / (x2 - x1);

        if ((x2 - x1) == 0) {
                y_mid = (y2 + y1) / 2;
                printf("Equation of perpendicular bisector: y = %.2f (parallel to x-axis)\n", y_mid);
        } else if (y2 - y1 == 0) {
                x_mid = (x2 + x1) / 2;
                printf("Equation of perpendicular bisector: x = %.2f (parallel to y-axis)\n", x_mid);
        } else {
                x_mid = (x1 + x2) / 2;
                y_mid = (y2 + y1) / 2;
                m = -1.0 / slope;
                c = y_mid - m * x_mid;
                printf("Equation of perpendicular bisector: y = %.2fx + %.2f\n", m, c);
        }

        return 0;
}
