#include <stdio.h>

int main() {

        char grade;
        float min_avg, curr_avg, final_percentage, final_score;

        printf("Enter desired grade> ");
        scanf(" %c", &grade);
        printf("Enter minimum average required> ");
        scanf(" %f", &min_avg);
        printf("Enter current average in course> ");
        scanf(" %f", &curr_avg);
        printf("Enter how much the final counts\nas a percentage of the course grade> ");
        scanf(" %f", &final_percentage);

        final_score = (min_avg - (curr_avg * (100.0 - final_percentage) / 100.0)) * (100.0 / final_percentage);
        printf("\nYou need a score of %.2f on the final to get a %c.\n", final_score, grade);

        return 0;
}
