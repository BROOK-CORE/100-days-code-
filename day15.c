#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;

    printf("Enter a positive integer (n): ");
    if (scanf("%d", &n) != 1) {
        printf("Error: Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (n < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 1;
    }

    if (n == 0) {
        factorial = 1;
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
    }

    printf("Factorial of %d is: %lld\n", n, factorial);

    return 0;
}

#include <stdio.h>

int main() {
    int n, reversed_n = 0, remainder;

    printf("Enter an integer to reverse: ");
    if (scanf("%d", &n) != 1) {
        printf("Error: Invalid input. Please enter an integer.\n");
        return 1;
    }

    int original_n = n;

    int temp_n = (n < 0) ? -n : n;

    while (temp_n != 0) {
        remainder = temp_n % 10;
        reversed_n = reversed_n * 10 + remainder;
        temp_n /= 10;
    }

    if (n < 0) {
        reversed_n = -reversed_n;
    }

    printf("The reverse of %d is: %d\n", original_n, reversed_n);

    return 0;
}
