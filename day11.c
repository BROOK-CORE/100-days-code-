#include <stdio.h>

int main() {
    int month_number;

    printf("Enter the month number (1-12): ");

    if (scanf("%d", &month_number) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    switch (month_number) {
        case 1:
            printf("January has 31 days.\n");
            break;
        case 2:
            printf("February has 28 or 29 days (29 in a leap year).\n");
            break;
        case 3:
            printf("March has 31 days.\n");
            break;
        case 4:
            printf("April has 30 days.\n");
            break;
        case 5:
            printf("May has 31 days.\n");
            break;
        case 6:
            printf("June has 30 days.\n");
            break;
        case 7:
            printf("July has 31 days.\n");
            break;
        case 8:
            printf("August has 31 days.\n");
            break;
        case 9:
            printf("September has 30 days.\n");
            break;
        case 10:
            printf("October has 31 days.\n");
            break;
        case 11:
            printf("November has 30 days.\n");
            break;
        case 12:
            printf("December has 31 days.\n");
            break;
        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    double cp, sp, difference, percentage;

    printf("Enter the Cost Price (CP): ");
    if (scanf("%lf", &cp) != 1 || cp < 0) {
        printf("Invalid Cost Price.\n");
        return 1;
    }

    printf("Enter the Selling Price (SP): ");
    if (scanf("%lf", &sp) != 1 || sp < 0) {
        printf("Invalid Selling Price.\n");
        return 1;
    }

    if (sp > cp) {
        difference = sp - cp;
        percentage = (difference / cp) * 100.0;
        printf("Profit: %.2lf\n", difference);
        printf("Profit Percentage: %.2lf%%\n", percentage);
    } else if (sp < cp) {
        difference = cp - sp;
        percentage = (difference / cp) * 100.0;
        printf("Loss: %.2lf\n", difference);
        printf("Loss Percentage: %.2lf%%\n", percentage);
    } else {
        printf("Neither profit nor loss (CP equals SP).\n");
    }

    return 0;
}

