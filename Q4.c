#include<stdio.h>

int main() {

        int fahrenheit;
        double celsius;

        printf("Enter temperature in fahrenheit => ");
        scanf(" %d", &fahrenheit);

        celsius = (5.0 / 9.0) * (fahrenheit - 32);
        printf("%d degree fahrenheit => %lf degree celsius\n", fahrenheit, celsius);

        return 0;
}
