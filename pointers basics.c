#include <stdio.h>

void printAge(int *pAge)
{
    printf("you are %d yeads old!\n", *pAge);
}

int main()
{
    // pointer - a "variable like " reference that hold a memory address to another variable, array etc.
    //          some taks are performed more easily with pointers
    //          * = indirection operator (value at address)
    // think of * as (value at address)

    int age = 21;
    int *pAge = NULL; // created a pointer (pointer itself has an address but value stored is an address)
    pAge = &age;      // good practice to assign NULL if declaring a pointer 

    /*value of pointer equals to age*/

    printf("size of age: %d\n", sizeof(age)); // 4 bytes
    printf("size of %d\n", sizeof(pAge));     // 8 bytes eventhough it is declared as int, sice it is a pointer it's given a byte which is enough to store a hexadecimal address
    printf("\n");

    // these should be same
    printf("address of age: %p\n", &age); // address of age: 0x7ffe85452514
    printf("pointer %p\n", pAge);         // pointer 0x7ffe85452514
    printf("\n");
    printf("value of age: %d\n", age);
    printf("value at address %d\n", *pAge); // dereferencing
    printf("\n");

    printAge(pAge); // you can pass pointer to a function

    return 0;
}