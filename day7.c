#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    if (scanf("%d", &year) != 1 || year < 0) {
        printf("Invalid input. Please enter a non-negative integer for the year.\n");
        return 1;
    }
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
        printf("Leap year\n");
    } else {
        printf("Not a leap year\n");
    }

    return 0;
}

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter an alphabet character: ");
    
    if (scanf(" %c", &ch) != 1) {
        printf("Invalid input. Could not read a character.\n");
        return 1;
    }

    if (!isalpha(ch)) {
        printf("Error: '%c' is not an alphabet character. Please enter a letter.\n", ch);
        return 1;
    }

    char lower_ch = tolower(ch);

    if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u') {
        printf("'%c' is a Vowel.\n", ch);
    } else {
        printf("'%c' is a Consonant.\n", ch);
    }

    return 0;
