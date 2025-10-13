#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");

    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (num % 2 == 0) {
        printf("%d is an Even number.\n", num);
    } else {
        printf("%d is an Odd number.\n", num);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");

    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (num > 0) {
        printf("Positive\n");
    } else {
        
        if (num < 0) {
            printf("Negative\n");
        } else {
            
            printf("Zero\n");
        }
    }

    return 0;
}
