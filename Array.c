#include <stdio.h>

int main()
{
    // array - a data type that can store many values of the same data type.
    // In JavaScript you can store values of different data type in an array.
    // array syntax [] = {}

    // double prices[] = {5.0, 10,0};

    // you can set the size your array beforehand then assign elements to it
    double prices[5]; // now it can hold no more than hold upto index 5 (6 elements)

    // assigning a value to the array
    prices[0] = 5.0;
    prices[1] = 10.0;
    prices[2] = 15.0;
    prices[3] = 20.0;
    prices[4] = 25.0;
    prices[5] = 30.0;                   

    // printing a value from array
    printf("$%.2lf \n", prices[5]);

    return 0;
}