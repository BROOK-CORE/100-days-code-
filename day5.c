#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    double simple_interest, compound_interest;

    printf("Enter Principal Amount (P): ");
    if (scanf("%lf", &principal) != 1 || principal <= 0) {
        printf("Invalid Principal amount.\n");
        return 1;
    }

    printf("Enter Annual Rate of Interest (R): ");
    if (scanf("%lf", &rate) != 1 || rate <= 0) {
        printf("Invalid Rate of Interest.\n");
        return 1;
    }

    printf("Enter Time in Years (T): ");
    if (scanf("%lf", &time) != 1 || time < 0) {
        printf("Invalid Time period.\n");
        return 1;
    }

    simple_interest = (principal * rate * time) / 100.0;

    compound_interest = principal * (pow(1 + rate / 100.0, time));
    compound_interest = compound_interest - principal;
    
    printf("\n--- Interest Calculation Results ---\n");
    printf("Principal: %.2lf\n", principal);
    printf("Rate: %.2lf%%\n", rate);
    printf("Time: %.2lf years\n", time);
    printf("------------------------------------\n");
    printf("Simple Interest (SI): %.2lf\n", simple_interest);
    printf("Compound Interest (CI): %.2lf\n", compound_interest);

    return 0;
}

#include <stdio.h>

int main() {
    long total_seconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    if (scanf("%ld", &total_seconds) != 1 || total_seconds < 0) {
        printf("Invalid input. Please enter a non-negative integer for seconds.\n");
        return 1;
    }

    hours = total_seconds / 3600;
    long remaining_seconds = total_seconds % 3600;
    
    minutes = remaining_seconds / 60;
    seconds = remaining_seconds % 60;

    printf("\nConversion Result:\n");
    printf("%ld seconds is equivalent to %ld hours, %ld minutes, and %ld seconds.\n", 
           total_seconds, hours, minutes, seconds);
    printf("Formatted Time: %02ld:%02ld:%02ld\n", hours, minutes, seconds);

    return 0;
}
