#include <stdio.h>
#include <ctype.h>

int main(){
    char unit;
    float temp;
    float converted;

    printf("Celcius or Faranheight ? (C/F) : ");
    scanf("%c", &unit);
    
    // C program is case sensitive.
    // so we use touuper function to make inputs capital
    unit = toupper(unit);

    switch (unit)
    {
        case 'C':
            printf("Enter the temperature: \n");
            scanf("%f", &temp);
            converted = (temp * 9 / 5) + 32;
            printf("%lf\n F",converted);
            break;
         case 'F':
            printf("Enter the temperature: \n");
            scanf("%f", &temp);
            converted = ((temp -32) * 5) / 9;
            printf("%lf C\n",converted);
            break;

        default:
            printf("enter valid unit \n");
 
    }

    return 0;
}