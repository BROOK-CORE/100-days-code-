#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Error: Please enter a positive integer.\n");
        return 1;
    }

    printf("Numbers from 1 to %d:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;

    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Error: Please enter a positive integer (n >= 1).\n");
        return 1;
    }

    for (i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("Product: %lld (", product);

    int is_first = 1;
    for (i = 2; i <= n; i += 2) {
        if (!is_first) {
            printf(" * ");
        }
        printf("%d", i);
        is_first = 0;
    }
    printf(")\n");

    return 0;
}
