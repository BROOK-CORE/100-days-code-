#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b, and c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input. Please enter three numbers.\n");
        return 1;
    }

    if (a == 0) {
        printf("Coefficient 'a' cannot be zero for a quadratic equation.\n");
        return 1;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are Real and Distinct.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Roots are Real and Equal.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are Complex and Distinct.\n");
        printf("Root 1 = %.2lf + i%.2lf\n", realPart, imagPart);
        printf("Root 2 = %.2lf - i%.2lf\n", realPart, imagPart);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int percentage;

    printf("Enter the percentage (0-100): ");

    if (scanf("%d", &percentage) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (percentage < 0 || percentage > 100) {
        printf("Invalid percentage. Please enter a value between 0 and 100.\n");
    } else {
        if (percentage >= 90) {
            printf("Percentage: %d%% - Grade A\n", percentage);
        } else if (percentage >= 80) {
            printf("Percentage: %d%% - Grade B\n", percentage);
        } else if (percentage >= 70) {
            printf("Percentage: %d%% - Grade C\n", percentage);
        } else if (percentage >= 60) {
            printf("Percentage: %d%% - Grade D\n", percentage);
        } else {
            printf("Percentage: %d%% - Grade F\n", percentage);
        }
    }

    return 0;
}
