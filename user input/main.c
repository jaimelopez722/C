#include <stdio.h> //preprocessor directive
#include <string.h>

int main(){

    int age = 0;
    float gpa = 0.0;
    char grade = '\0';
    char name[30];

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    getchar(); // this clears the buffer
    printf("Enter your full name: ");  
    //scanf("%s", &name); // this only works with 1 word; scanf stops when it sees white space
    fgets(name, sizeof(name), stdin);
    //name[strlen(name) - 1] = '\0';  // only use this if you call your name first. Eliminates \n after hitting enter "removes unwanted new line"

    printf("Your name is %s\n", name);
    printf("Your age is %d\n", age);
    printf("Your gpa is %.1f\n", gpa);
    printf("Your grade is %c\n", grade);
    //printf("Your name is %s\n", name);

    return 0;
}