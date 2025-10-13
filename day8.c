#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    
    if (scanf(" %c", &ch) != 1) {
        printf("Invalid input. Could not read a character.\n");
        return 1;
    }

    if (isupper(ch)) {
        printf("'%c' is an Uppercase Alphabet.\n", ch);
    } else if (islower(ch)) {
        printf("'%c' is a Lowercase Alphabet.\n", ch);
    } else if (isdigit(ch)) {
        printf("'%c' is a Digit.\n", ch);
    } else {
        printf("'%c' is a Special Character.\n", ch);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three numbers:\n");
    if (scanf("%d %d %d", &num1, &num2, &num3) != 3) {
        printf("Invalid input. Please enter three integers.\n");
        return 1;
    }

    if (num1 >= num2) {
        if (num1 >= num3) {
            printf("The largest number is: %d\n", num1);
        } else {
            printf("The largest number is: %d\n", num3);
        }
    } else {
        if (num2 >= num3) {
            printf("The largest number is: %d\n", num2);
        } else {
            printf("The largest number is: %d\n", num3);
        }
    }

    return 0;
}
