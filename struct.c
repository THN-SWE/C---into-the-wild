#include <stdio.h>
#include <string.h>

struct Player
{
    char name[15];
    int score;
};

int main()
{   
    // struct - a collection of related numbers(variables);
    //          they can be of different data types
    //          listed under a name in a block of memory
    //          very similar to classes in other langs (BUT no Methods!)

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Thulasikan");
    player1.score = 999;

    strcpy(player2.name, "Sandy");
    player2.score = 1229;

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);

    printf("%s\n", player2.name);
    printf("%d\n", player2.score);

    return 0;
}