#include<stdio.h>

int main(){
    int age;
    
    printf("what is your age?");
    scanf("%d",&age);

    if(age >= 18){
        printf("\nyou can sign in");
    }
    else if(age == 0){
        printf("\nyou were just born.");
    }
    else if(age < 0){
        printf("\nare you kidding?");
    }
    else{
        printf("\nsomething went wrong");
    }

    return 0;
}