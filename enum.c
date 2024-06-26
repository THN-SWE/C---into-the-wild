#include <stdio.h>

typedef enum // using typedef. Remember ?
{
    Mon,
    Tue,
    Wed,
    Thu,
    Fri,
    Sat,
    Sun
} Day; // the will automatically get assigned with index starting with 0;
       // or we can manually set the identifiers.
int main()
{
    // enum - a user defined type of named integer identifiers helps to
    //                      make the program more readable;

    Day today = Mon;

    // printf("%d \n", today); // Enums are NOT strings, but they can be treated as integeres.

    if (today == Sun || today == Sat) // see how enums makes program more readable.
    {
        printf("It's party time !\n");
    }
    else
    {
        printf("Have to work today..\n");
    }
    return 0;
}