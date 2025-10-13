#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter two operands: ");
    if (scanf("%lf %lf", &num1, &num2) != 2) {
        printf("Error: Invalid number input.\n");
        return 1;
    }

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            // Modulo operator (%) works only with integers in C.
            // Check if operands are effectively integers before performing modulo.
            if ((long long)num1 == num1 && (long long)num2 == num2 && (long long)num2 != 0) {
                long long int_num1 = (long long)num1;
                long long int_num2 = (long long)num2;
                long long int_result = int_num1 % int_num2;
                printf("%lld %% %lld = %lld\n", int_num1, int_num2, int_result);
            } else {
                printf("Error: Modulo operator requires non-zero integer operands.\n");
            }
            break;
        default:
            printf("Error: Invalid operator entered.\n");
    }

    return 0;
}
