#include <stdio.h>
#include <string.h>

int main()
{
    // char cars[] stores single string. (array of characters)
    // char cars[][] stores array of strings make sense ?
    // normal array and string array works the same except we can't assign/change elements directly
    char cars[5][20] = {"RollsRoyce", "Lamborghini", "Ferrari"};

    // cars[0] = "Audi"; // won't work.

    strcpy(cars[3], "Tesla");

    for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)
    {
        printf("%s \n", cars[i]);
    }

    return 0;
}