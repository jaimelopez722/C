#include <stdio.h> //preprocessor directive
#include <stdbool.h> //preprocessor directive

int main(){
    
    // variable = A reuseable container for a value.
    // Behaves as if it were the value it contains.
    // int = whole numbers (4 bytes in modern systems -2,147,483,648 to 2,147,483,647 - 2^31 to 2^31 - 1)
    // float = single precision decimal numbers (4 bytes in modern systems - 1.5 x 10^-45 to 3.4 x 10^38 - 7 digits of precision)
    // double = double precision decimal numbers (8 bytes in modern systems - 5.0 x 10^-324 to 1.7 x 10^308 - 15 digits of precision)
    // char = single characters (1 byte in modern systems - 0 to 255 - 8 bits)
    // bool = true or false (1 byte in modern systems - 0 or 1 - 8 bits)

    int age = 25;
    int year = 2026;
    int quantity = 1;
    float gpa = 2.5;
    float price = 19.99;
    float temperature = 98.6;
    double pi = 3.14159265358979323846; // double can store up to 15 decimal places
    double e = 2.71828182845904523536; // euler's number
    char grade = 'A'; // char can store a single character
    char symbol = '$';
    //strings are not a built in data type in C, they are an array of characters
    char name[] = "Jaime Lopez"; // string is an array of characters; must be declared with [] and initialized with "" 
    char food[] = "Pizza";
    bool isOnline = true; // boolean can store true or false
    bool isStudent = false;

    printf("You are %d years old.\n", age);
    printf("The year is %d.\n", year);
    printf("You have ordered %d x items.\n\n", quantity);
    printf("Your GPA is %.1f\n", gpa);
    printf("The price is %.2f\n", price);
    printf("The temperature is %.1f\n\n", temperature);
    printf("The value of pi is %.15lf\n", pi);
    printf("The value of e is %.15lf\n\n", e);
    printf("Your grade is %c\n", grade);
    printf("The symbol is %c\n\n", symbol);
    printf("Your name is %s\n", name);
    printf("Your favorite food is %s\n\n", food);
    printf("Are you online? %d\n", isOnline); // true is 1, false is 0
    printf("Are you a student? %d\n", isStudent); // true is 1, false is 0

    return 0;
}