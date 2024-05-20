#include <stdio.h>

int main()
{

    // arithmatic operators

    // (+) addition
    // (-) subtraction
    // (*) multiplication
    // (/) division
    // (%) modulus
    // (++) increment
    // (--) decrement

    int x = 5;
    int y = 2;

    //int z = x/y; -> 0.0000 
    // float z = x/y -> 2.0000
    float z = x/(float)y;


    printf("%.2f\n",z);

    return 0;
}