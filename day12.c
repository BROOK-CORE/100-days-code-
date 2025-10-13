#include <stdio.h>

int main() {
    int days_late;
    int fine = 0;

    printf("Enter the number of days the book is late: ");
    if (scanf("%d", &days_late) != 1 || days_late < 0) {
        printf("Invalid input. Please enter a non-negative integer for days late.\n");
        return 1;
    }

    if (days_late > 30) {
        printf("Membership Cancelled\n");
    } else if (days_late > 10) {
        fine = 10 + 20;
        int remaining_days = days_late - 10;
        fine += remaining_days * 6;
        printf("Fine ₹%d\n", fine);
    } else if (days_late > 5) {
        fine = 10;
        int remaining_days = days_late - 5;
        fine += remaining_days * 4;
        printf("Fine ₹%d\n", fine);
    } else if (days_late > 0) {
        fine = days_late * 2;
        printf("Fine ₹%d\n", fine);
    } else {
        printf("No fine.\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int units;
    double bill = 0.0;

    printf("Enter the total units consumed: ");
    if (scanf("%d", &units) != 1 || units < 0) {
        printf("Invalid input. Please enter a non-negative integer for units consumed.\n");
        return 1;
    }

    if (units > 300) {
        bill += (units - 300) * 12.0;
        units = 300;
    }

    if (units > 200) {
        bill += (units - 200) * 10.0;
        units = 200;
    }

    if (units > 100) {
        bill += (units - 100) * 7.0;
        units = 100;
    }

    if (units > 0) {
        bill += units * 5.0;
    }

    printf("Bill: ₹%.0lf\n", bill);

    return 0;
}


