#include <stdio.h>

// return statement returns a value back to its calling funtion
// WE SHOULD MENTION THE DATA TYPE that WE ARE returning by replacing VOID;

double square(double x){
    return x * x;
}

int main(){

    double y = square(3.1415);

    printf("%lf\n", y);
    
    return 0;
}