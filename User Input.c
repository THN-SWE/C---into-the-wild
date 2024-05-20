#include <stdio.h>

int main()
{
    int age;
    char name[25];

    printf("What is your name?");

    //scanf("%s",&name);
    fgets(name, 25, stdin); // if you want to include space in your input
    
    printf("how old are you?\n");
    scanf("%d", &age); // & - address of operator

    printf("you are %s",name);
    printf("you are %d years old\n", age);



    return 0;
}