// this is a comment in C
//  std-standard io- input/
#include <stdio.h>

int main()
{
    /*
    variable - Allocated space in the memory to
               store a value.
    data types that can be stored -
    int - integer
    float - floating point number
    char - character
    double - double precision floating point number

    */
    int x;      // declaration
    x = 22;     // initialization
    int y = 22; // both

    int age = 21;               // integer
    float height = 5.5;         // floating point number
    char letter = 'a';            // single character
    char name[] = "thulasikan"; // array of characters (this is how you can emulate a string in C)
    
    // accessing
    // % represents format specifier
    // followed by data type (letter)
    printf("My name is %s\n", name);
    printf("My age is %d\n", age);
    printf("My height is %f\n", height);
    
}
