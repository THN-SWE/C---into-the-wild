#include <stdio.h>
#include <string.h>

// typedef char user[25];
// a character array of 25 bytes knows as user;

// can add typedef infront of struct to give it a nickname
typedef struct
{
    char name[25];
    char password[12];
    int id;
} User;

int main()
{
    // typedef - reserved keyword that gives an existing data type a 'nick name'
    // instead of writing the following when defining a variable like this...
    // create a typedef
    // char user1[25] = "Thulasikan";

    // we can now do this
    // user user1 = "Thulasikan";

    // typedef mostly used within structs
    // struct User user1 = {"Thulasikan", "password123", 4};
    // struct User user2 = {"Sandy", "pasworrd345", 5};

    // after adding typedef to struct we can do this
    User user1 = {"Thulasikan", "password123", 4};
    User user2 = {"Sandy", "pasworrd345", 5};

    return 0;
}