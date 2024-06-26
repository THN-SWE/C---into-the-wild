#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Pseudo random numebrs - A set values or elements that are statistically random
    // not suited for any sort of cryptographic security

    srand(time(0));

    int number1 = rand() % 6 + 1; // will give you random number between 0 - 32767
    printf("%d\n", number1);
    return 0;
}