#include <stdio.h>

void hello(char name[], int age); //  function prototype

int main()
{

    char name[] = "Thulasikan";
    int age = 21;

    //IMPORTANT NOTES 
    // mamy C compilers do not check for parameter matchnig
    //missing arguments will result in unexpecter behaviour
    //A funtion prototype causes the compiler to flag an error if the argumnets are missing.

    // function prototype

    // What is IT ?
    // Fucntion declaration without a body before main()
    // Ensures the the call with the function are made with correct arguments

    // if we try to call the hello function giving only the name parameter
    // the C programe will behave strange.
    // for example output:
    // hello Thulasikan !
    //  you are 1300280996 years old

    // now we created a function prototype  which means
    //C compiler wont comoplie the program until all parameters were given.

    //ADVANTAGES 
    //Easier to navigate the program when main() at the top
    //Helps with debuggin
    //commonly used in header filesIJJIJ
    

    hello(name); 
    return 0;
}

void hello(char name[], int age)
{
printf("hello %s ! \n you are %d years old.", name, &age);
}
