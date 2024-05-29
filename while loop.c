#include <stdio.h>
#include <string.h>

int main()
{

    // while loop - repeats a section of code possibly unlimited times.
    // WHILE some conditions remains true a while loop might not execute at all.

    // lets write a program ask user his name and say hello.

    /*
    '\0' is referred to as NULL character or NULL terminator
    It is the character equivalent of integer 0(zero) as it refers to nothing In C language
    it is generally used to mark an end of a string
    */

    char name[25];

    printf("What is your name: ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0'; // getting rid of new line charected at the end of fgets.
    printf("hello %s \n", name);

    // what if user hit enter without giving name.
    // lets keep asking him

    while (strlen(name) == 0)
    {
        printf("\nyou didn't say your name! \n");
        printf("What is your name: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
        printf("hello %s ! \n", name);
    }

    return 0;
}