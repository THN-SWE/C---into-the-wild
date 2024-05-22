#include <stdio.h>

// ternary operator - shortcut to if/else when assigning/returning a value
// (condition) ? value if true : value if false

int findMax(int x, int y)
{
    return (x > y) ? x : y;
}

int main()
{
    int x = 5;
    int y = 4;

    printf("%d \n", findMax(x,y));
    return 0;
}