#include <stdio.h>

int main()
{
    // continue - skips the rest of the code and forces the next iteration of the loop
    // break - exits a loop/switch

    // continue
    // skip printing 13 cuz its unlucky !
    for (int i = 0; i <= 20; i++)
    {
        if (i == 13)
        {
            continue;
        }

        printf("%d \n", i); // prints 1 - 20 except 13
    }
    printf("\n");
    // break
    // exits the loop after it reaches 13.
    for (int i = 0; i <= 20; i++)
    {
        if (i == 13)
        {
            break;
        }

        printf("%d \n", i); // prints 1 - 13
    }

    return 0;
}