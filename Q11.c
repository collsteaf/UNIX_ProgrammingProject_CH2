#include <stdio.h>
#include <math.h>

int main() {

        int m, n, s1, s2, hyp;

        printf("Enter m and n => ");
        scanf(" %d %d", &m,  &n);

        if (m > n) {
                s1 = pow(m, 2) - pow(n, 2);
                s2 = 2 * m * n;
                hyp = pow(m, 2) + pow(n, 2);
                printf("Pythagorean Triplet: (%d, %d, %d)\n", s1, s2, hyp);
        } else {
                printf("Pythagorean triplet not possible\n");
        }

        return 0;
}
