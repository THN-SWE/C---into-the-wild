#include <stdio.h>

int main(){

    // Bitwise operator - special operators used in bit level programming
    // knowing binary is important for this topic

    // & AND
    // | OR 
    // ^ XOR
    // >> right shift
    // << left shift

    int x = 6;  //00000110
    int y 12;   //00001100
    int z = 0;  //00000000

    z = x & y   //00000100 => 4
    z = x | y   //00001110 => 14
    z = x ^ y   //00001010 => 10 (only one can be 1)
    z = x >> 1  //00000011 => 3 (shifting binary 1 right)
    z = x << 1  //00001100 => 12
    return 0;
}