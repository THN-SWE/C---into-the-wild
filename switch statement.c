#include <stdio.h>

int main()
{
    // more effecient alternative to using many "else if" statements
    // allows a value to be tested for equality against many cases.

    //using break can help to exit switch statement as soon as a case it satisfied otherwise
    //it will output every case.

    char grade;
    printf("what is your grade?: \n");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Perfect\n");
        break;
    case 'B':
        printf("Perfect\n");
        break;
    case 'C':
        printf("Perfect\n");
        break;
    case 'F':
        printf("Perfect\n");
        break;
    default: // default is like else in if/else statement.
        printf("enter a valid grade!.");
    }

    return 0;
}