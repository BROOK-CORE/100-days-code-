#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Error: Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    printf("Factors of %d are: ", n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}

#include <stdio.h>

int main() {
    int num1, num2, a, b, temp, gcd;

    printf("Enter the first positive integer: ");
    if (scanf("%d", &num1) != 1 || num1 <= 0) {
        printf("Error: Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    printf("Enter the second positive integer: ");
    if (scanf("%d", &num2) != 1 || num2 <= 0) {
        printf("Error: Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    a = num1;
    b = num2;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;

    printf("The GCD (HCF) of %d and %d is: %d\n", num1, num2, gcd);

    return 0;
}
