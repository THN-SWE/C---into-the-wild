#include <stdio.h>
#include <string.h>

int main()
{
    // char x = 'X';
    // char y = 'Y';
    // char temp;
    // // x = y; // this won't swap the values; both will be set to 'Y'
    // // what we can do is introduce third variable

    // temp = x;
    // x = y;
    // y = temp;

    // this is different when we are working with strings

    char x[15]= "Water";
    char y[15] = "Lemonade";
    char temp[15];

    // when working with strcpy fucntion is when 
    // you the length of the 2nd element is less than the length of the 1st element.
    // output will show unexpected behaviour;
    // one solution for that is making the character arrays the same size.
    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("x = %s\n", x);
    printf("y = %s\n", y);

    return 0;
}
