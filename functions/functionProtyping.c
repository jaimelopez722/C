#include <stdio.h>
#include <stdbool.h>


void hello(char name[], int age);   //function prototype

int main(){

    // Function prototype = Provide the compiler w/ information about a function's:
    //                      name, return type, and parameters before its actual definition.
    //                      Enables type checking and allows functions to be used before
    //                      they're defined.
    //                      Improves readability, organization, and helps prevent errors.

    hello("Spongebob", 30);

    return 0;
}

void hello(char name[], int age){
    printf("Hello %s\n", name);
    printf("You are %d years old.\n", age);
}