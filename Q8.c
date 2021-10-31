#include <stdio.h>
#include <math.h>

int main() {

        long population, toilets, curr_volume, new_volume, cost;
        int flush_count_avg = 14, cost_per_toilet = 150;

        printf("Enter population => ");
        scanf(" %ld", &population);

        toilets = ceil(population / 3.0);
        curr_volume = flush_count_avg * 15 * toilets;
        new_volume = flush_count_avg * 2 * toilets;
        cost = cost_per_toilet * toilets;

        printf("Current water usage: %ld L/day\nNew models' water usage: %ld L/day\nWater saved: %ld L/day\nTotal cost: $%ld\n", curr_volume, new_volume, curr_volume - new_volume, cost);

        return 0;
}
