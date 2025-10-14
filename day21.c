#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    digits = (int)log10(num) + 1;
    lastDigit = num % 10;
    firstDigit = num / pow(10, digits - 1);
    temp = temp % (int)pow(10, digits - 1);
    temp = temp / 10;
    swappedNum = lastDigit * pow(10, digits - 1) + temp * 10 + firstDigit;
    printf("Number after swapping first and last digit: %d\n", swappedNum);
    return 0;
}

#include <stdio.h>

int main() {
    int num, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num)
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is not a Perfect Number.\n", num);

    return 0;
}