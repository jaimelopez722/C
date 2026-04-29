#include <stdio.h>
#include <stdbool.h>

struct Student{
    char name[50];
    int age;
    float gpa;
    bool isStudent;
};

int main(){

    // struct = A custom container that holds multiple
    //          pieces of related information.
    //          Similar to Objects in other languages

    struct Student student1 = {"Jaime", 37, 3.0, true};
    printf("%s\n", student1.name);
    printf("%d", student1.age);

    return 0;
}