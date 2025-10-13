#include <stdio.h>

void swap(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int num1 = 10;
    int num2 = 25;

    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2);

    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

#include <stdio.h>

int main() {
    long long n, sum_loop = 0;

    printf("Enter the positive integer 'n' (to find the sum of 1 to n): ");

    if (scanf("%lld", &n) != 1 || n < 1) {
        printf("Error: Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    for (long long i = 1; i <= n; i++) {
        sum_loop += i;
    }
    
    long long sum_formula = n * (n + 1) / 2;

    printf("\n--- Results for the sum of the first %lld natural numbers ---\n", n);
    
    printf("Sum calculated using a loop (iterative): %lld\n", sum_loop);
    printf("Sum calculated using the formula [n(n+1)/2]: %lld\n", sum_formula);

    return 0;
}
