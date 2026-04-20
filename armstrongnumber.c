#include <stdio.h>

int main() {
    int i, n, sum, digit;

    printf("Armstrong numbers between 1 and 500:\n");

    for (i = 1; i <= 500; i++) {
        n = i;
        sum = 0;

        while (n != 0) {
            digit = n % 10;
            sum += digit * digit * digit;
            n = n / 10;
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}
