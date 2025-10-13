#include <stdio.h>

int main() {
    int s1, s2, s3;

    printf("Enter the three side lengths of the triangle:\n");

    if (scanf("%d %d %d", &s1, &s2, &s3) != 3) {
        printf("Invalid input. Please enter three integers.\n");
        return 1;
    }

    if (s1 + s2 <= s3 || s1 + s3 <= s2 || s2 + s3 <= s1) {
        printf("Invalid triangle: The given side lengths cannot form a triangle.\n");
    } 
    else if (s1 == s2 && s2 == s3) {
        printf("The triangle is Equilateral.\n");
    } 
    else if (s1 == s2 || s1 == s3 || s2 == s3) {
        printf("The triangle is Isosceles.\n");
    } 
    else {
        printf("The triangle is Scalene.\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int day_number;

    printf("Enter a number (1-7) to find the corresponding day of the week: ");

    if (scanf("%d", &day_number) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    switch (day_number) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid number. Please enter a number between 1 and 7.\n");
    }

    return 0;
}
