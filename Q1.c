#include <stdio.h>

int main() {

        float start, end, dist, fee, rate = 0.35;

        printf("MILEAGE REIMBURSEMENT CALCULATOR\n");

        printf("Enter beginning odometer reading=> ");
        scanf(" %f", &start);
        printf("Enter ending odometer reading=> ");
        scanf(" %f", &end);

        dist = end - start;
        fee = 0.35 * dist;
        printf("You traveled %.1f miles.\tAt $%.2f per mile,\nyour reimbursement is $%.2f.\n",     
                dist, rate, fee);

        return 0;
}
