#include <stdio.h>

int main() {
    int num, digit, product = 1;
    int hasOdd = 0; // To check if there are any odd digits

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        digit = num % 10;
        if (digit % 2 != 0) {  // Check if digit is odd
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;
    }

    if (hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];
    int i;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Find length of binary number
    int length = strlen(binary);

    // Compute 1's complement
    for (i = 0; i < length; i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else {
            printf("Invalid binary number.\n");
            return 1;
        }
    }

    printf("1's Complement: %s\n", binary);

    return 0;
}