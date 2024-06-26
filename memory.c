#include <stdio.h>

int main()
{
    // memory - an array of bytes within RAM(street)
    // memory block - a single unit(byte) within memory, used to hold some values(person)
    // memory adderess - the address of where a memory block is located (house address)

    char a = 'X';
    char b = 'Y';
    char c = 'Z';

    printf("a: %d bytes\n", sizeof(a));
    printf("b: %d bytes\n", sizeof(b));
    printf("c: %d bytes\n", sizeof(c));

    printf("address of a: %p\n", &a);
    printf("address of b: %p\n", &b);
    printf("address of c: %p\n", &c);
    // notice each address take one byte (f,e,d at last) because char data type take only on byte in the memory
    // address of a: 0x7ffd0a3d905f
    // address of b: 0x7ffd0a3d905e
    // address of c: 0x7ffd0a3d905d

    return 0;
}