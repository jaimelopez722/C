#include <stdio.h>

typedef enum {
    SUCCESS, FAILURE, PENDING
}STATUS;

void connectStatus(STATUS status);

int main(){

    STATUS status = SUCCESS;

    connectStatus(status);

    return 0;
}

void connectStatus(STATUS status){
    switch(status){
        case SUCCESS:
            printf("Connection was successful");
            break;
        case FAILURE:
            printf("Connection failied");
            break;
        case PENDING:
            printf("Connecting...");
            break;
    }
}