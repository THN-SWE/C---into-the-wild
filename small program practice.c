#include <stdio.h>
#include <math.h>
#include <stdlib.h> // Include this for pow()

int main() {
    // Writing a program to calculate the area of a circle
    double radius;
    double area;

    printf("Enter the radius: ");
    scanf("%lf", &radius); // Use %lf here since we're reading a double

    // Use M_PI for pi
    area = M_PI * pow(radius, 2);
    printf("Area of circle is %.2f\n", area); // Use %f for printing, and add precision specifier if needed

    return 0;
}
