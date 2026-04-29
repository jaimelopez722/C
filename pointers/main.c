#include <stdio.h>

int main(){

    // pointer = A variable that stores the memory address of another variable.
    //           Benefit: They help avoid wasting memory by allowing you to pass
    //           the address of a large data structure instead of copying the entire data.

    int x = 10;
    int *p = &x;

    printf("%p\n", p);
    printf("%p\n", &x);


    return 0;
}
