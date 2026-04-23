#include <stdio.h> //preprocessor directive

int main(){
    // arithmetic operators = +, -, *, /, %
    // % = modulus operator; returns the remainder of a division operation

    int x = 10;
    int y = 3;

    printf("%d\n", x + y); // addition
    printf("%d\n", x - y); // subtraction
    printf("%d\n", x * y); // multiplication
    printf("%d\n", x / y); // division; returns the quotient without the remainder
    printf("%f\n", (float)x / y); // division; returns the quotient with the remainder as a decimal
    printf("%d\n", x % y); // modulus; returns the remainder

    return 0;
}