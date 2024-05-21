#include <stdio.h>
#include <stdbool.h>

int main()
{
    // AND - &&
    // OR -  ||
    // NOT - !

    float temp = 25;
    bool sunny = true;

    // output : nice weather.
    if (temp >= 0 && temp <= 30 && sunny)
    {
        printf("nice weather \n");
    }
    else
    {
        printf("weather is not good \n");
    }

    // output : normal weather.
    if (temp >= 32 || temp <= 0)
    {
        printf("extreme weather \n");
    }
    else
    {
        printf("normal weather \n");
    }

    // output: it is sunny outside.
    if (!sunny)
    {
        printf("it is cloudy outside. \n");
    }
    else
    {
        printf("It is suny outside. \n");
    }

    return 0;
}