#include <stdio.h>

int main(){
    
    // Logical Operators = Used to combine or modify boolean expressions.

    // && = AND
    // || = OR
    // ! = NOT

    int temp = 10000000;

    if(temp > 0 && temp <= 30){
        printf("The temperature is GOOD");
    }
    else{
        printf("The temperature is BAD");
    }

    return 0;
}