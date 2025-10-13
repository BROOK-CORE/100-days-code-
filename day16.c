#include <stdio.h>
#include <math.h>

int main() {
    int n, decimal_num, remainder;
    long long binary_num = 0;
    int place = 1;

    printf("Enter an integer to convert to binary: ");
    if (scanf("%d", &n) != 1) {
        printf("Error: Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (n < 0) {
        printf("Error: Binary conversion of negative integers is complex for this basic program. Please enter a non-negative integer.\n");
        return 1;
    }

    decimal_num = n;

    if (decimal_num == 0) {
        printf("Binary representation of 0 is: 0\n");
        return 0;
    }

    while (decimal_num != 0) {
        remainder = decimal_num % 2;
        binary_num = binary_num + remainder * place;
        decimal_num /= 2;
        place *= 10;
    }

    printf("Binary representation of %d is: %lld\n", n, binary_num);

    return 0;
}

#include <stdio.h>

int main() {
    int n, original_n, reversed_n = 0, remainder;

    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Error: Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (n < 0) {
        printf("Error: Please enter a non-negative integer.\n");
        return 1;
    }

    original_n = n;

    while (n != 0) {
        remainder = n % 10;
        reversed_n = reversed_n * 10 + remainder;
        n /= 10;
    }

    if (original_n == reversed_n) {
        printf("%d is Palindrome\n", original_n);
    } else {
        printf("%d is Not palindrome\n", original_n);
    }

    return 0;
}
