#include <stdio.h>

int find_gcd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2, gcd, lcm;

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

    gcd = find_gcd(num1, num2);
    
    lcm = (long long)num1 * num2 / gcd;

    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}

#include <stdio.h>
int main() {
    int n, original_n, sum = 0, remainder;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Error: Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }

    original_n = n;

    while (n != 0) {
        remainder = n % 10;
        sum += remainder;
        n /= 10;
    }

    printf("The sum of digits of %d is: %d\n", original_n, sum);

    return 0;
}
