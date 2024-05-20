#include <stdio.h>

int main()
{
    /* a format specifier % defines and formats a type of data to be displayed.

    %d integer
    %f float
    %lf double
    %c character
    %s string
    %u unsigned integer
    %x hexadecimal

    %.1 = decimal precision
    %1 = minimum field width
    %- = left align

    */

    float item1 = 5.69;
    float item2 = 10.373;
    float item3 = 100.00;

    printf("item1: $%f\n", item1);
    printf("item2: $%f\n", item2);
    printf("item3: $%f\n", item3);

    // now we can specify the
    // no of digits we want after the decimal.
    // allocate space before the decimal point
    // change the align to left 

    printf("item1: $%-8.2f\n", item1);
    printf("item2: $%-8.3f\n", item2);
    printf("item3: $%-8.1f\n", item3);


    return 0;
}