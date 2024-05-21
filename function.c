#include <stdio.h>

// create the function
// consider void as a function keyword in javascript FOR NOW.

void morningWish(char name[])
{

    printf("what is your name: \n");
    scanf("%s", &name);
    printf("good morning %s \n", &name);
}

int main()
{
    // char name[] = "thulasikan";
    morningWish("thulasikan");
    morningWish("SWE");

    return 0;
}
