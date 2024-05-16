//  std-standard io- input/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    // 4 bytes. (32 bits of precision) 6-7 digits %f
    float a = 1.2345678987654321;
    // 8bytes (64 bits of precision) 15 -16 digits %lf
    double b = 1.2345678987654321;
    // true or false (1 byte) %d
    bool c = true;
    // you can store integers in chars (-127 - 128) %d or &c
    char d = 120;
    // unsigned keyword (eleminates negative integers) (can store 0-255) %d or %c
    unsigned char e = 200;
    // long long int (can store from - 9 quintillion to +9 quintillion) %lld
    long long int f = 10000000000000000;
    // unsigned long long int (can store from 0 to 18 quintillion) %llu
    unsigned long long int g = 1000000000000000000000000000000000000U;

    // The correct way to print a float or double is using %f for both
    printf("Float value: %f\n", a);
    printf("Double value: %lf\n", b);

    // if i want to display more decimals add 0.(n.of digits to show) after %
    printf("Float value: %.10lf\n", b);

    // boolean value (1 - true 0- false)
    // d here because output going to be either 1 or 0
    printf("Boolean value: %d\n", c);

    printf("%d\n", d); // as a integer
    printf("%c\n", d); // as a char (corresponding letter to 127)

    printf("%c\n", e); // as a char (corresponding letter to 200)(no letter for 200 lol)
    printf("%d\n", e); // as a integer (200)

    printf("%lld\n", f); // long long int
    printf("%llu\n", g); // unassined long long int

    return 0;
}
