#include <stdio.h>

void run_calculation(int l, int b) {
    // Calculate Area and Perimeter using integer arithmetic
    int area = l * b;
    int perimeter = 2 * (l + b);

    // Print the results in the specified format
    printf("Input: %d %d\n", l, b);
    printf("Output: Area=%d, Perimeter=%d\n", area, perimeter);
}

int main() {
    // Run Sample 1: 5 and 10
    run_calculation(5, 10);
    
    // Run Sample 2: 3 and 7
    run_calculation(3, 7);

    return 0;
}
#include <stdio.h>
#include <math.h>

void calculate_circle_properties(double radius) {
    if (radius < 0) {
        printf("Error: Radius cannot be negative.\n");
        return;
    }

    double area = M_PI * radius * radius;
    double circumference = 2 * M_PI * radius;

    printf("Input Radius: %.2f\n", radius);
    printf("Output: Area=%.2f, Circumference=%.2f\n", area, circumference);
}
// 
int main() {
    calculate_circle_properties(5.0);
    calculate_circle_properties(3.5);

    return 0;
}

