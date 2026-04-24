#include<stdio.h> //preprocessor directive

int main(){

    // format specifier = A character that represents the type of data to be printed.
    // %d = integer
    // %f = float  
    // %lf = double
    // %c = char
    // %s = string
    
    // optional modifier (width, precision, flags) = A character that represents the number of decimal places to be printed for float and double data types.
    // %.1f = 1 decimal place
    // %.2f = 2 decimal places
    // %.15lf = 15 decimal places
    // optional modifier (width, precision, flags) = A character that represents the minimum number of characters to be printed for a string data type.
    // %10s = 10 characters wide, right aligned
    // %-10s = 10 characters wide, left aligned
    
    int age = 25;
    float price = 19.99;
    double pi = 3.14159265358979323846; // double can store up to 15 decimal places
    char currency = '$';
    char name[] = "Jaime Lopez"; // string is an array of characters; must be declared with [] and initialized with ""

    printf("%d\n", age);
    printf("%.2f\n", price);
    printf("%.15lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);

    return 0;
}