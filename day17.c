#include <stdio.h>
#include <math.h>

int main() {
    int n;
    long long sum = 0;
    int digit_count = 0;
    int temp_n, last_digit, original_n;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Error: Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (n < 0) {
        printf("Error: Please enter a non-negative integer.\n");
        return 1;
    }

    original_n = n;
    temp_n = n;

    if (n == 0) {
        digit_count = 1;
    } else {
        while (temp_n != 0) {
            temp_n /= 10;
            digit_count++;
        }
    }

    temp_n = n;

    while (temp_n != 0) {
        last_digit = temp_n % 10;
        sum += (long long)round(pow(last_digit, digit_count));
        temp_n /= 10;
    }

    if (original_n == sum) {
        printf("%d is an Armstrong number.\n", original_n);
    } else {
        printf("%d is not an Armstrong number.\n", original_n);
    }

    return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
    int n, i, is_prime = 1;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Error: Invalid input.\n");
        return 1;
    }

    if (n <= 1) {
        is_prime = 0;
    } else {
        for (i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }

    return 0;
}
