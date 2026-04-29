#include <stdio.h>

int getMax(int x, int y){
    if (x >= y){
        return x;
    }
    else{
        return y;
    }
}

int main(){

    int max = getMax(3, 2);

    printf("The max is %d", max);

    return 0;
}