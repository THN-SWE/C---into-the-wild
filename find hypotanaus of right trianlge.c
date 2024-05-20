#include <stdio.h>
#include <math.h>


int main()
{
    double a;
    double b;
    double c;

    // c = sqrt(pow(a,2) + pow(b,2));

    printf("enter height: ");
    scanf("%lf", &a);
    printf("enter base:");
    scanf("%lf", &b);

    c = sqrt(pow(a, 2) + pow(b, 2));
    printf("hypotenuse: %.3lf", c);

    return 0;
}