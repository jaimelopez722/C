#include <stdio.h>
#include <stdbool.h>

int main(){

    // ternary operator ? = shorthand of if-else statements

    // (condition) ? value_if_true : value_if_false;

    int x = 11;
    int y = 6;

    int max = (x > y) ? x : y;
    printf("%d\n", max);


    return 0;
}