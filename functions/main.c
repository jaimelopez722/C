#include <stdio.h>
#include <string.h>

void happyBirthday(char name[],int age ){
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear %s", name);
    printf("\nHappy birthday to you!");
    printf("\nYou are %d years old!\n", age);
}

int main(){

    //function = A reusable section of code that can be invoked "called"
    //           Arguments can be sent to a function so that it can use them

    // return_type function_name(parameters){
    //    code...;
    //   return value; 
    //}

    char name[30] = "";
    int age = 0;

    printf("Hello! Happy Birthday! Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf(" %d", &age);

    happyBirthday(name, age);

    return 0;
}