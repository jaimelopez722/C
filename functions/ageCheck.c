#include <stdio.h>
#include <stdbool.h>

bool ageCheck(int age){

    if (age >= 18){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    int age = 17;
    if(ageCheck(age)){
        printf("You are an adult");
    }
    else{
        printf("You are a child");
    }

    return 0;
}