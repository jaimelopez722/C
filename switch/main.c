#include <stdio.h>

int main(){

    // switch = An alternative to using many if-else statements
    //          More efficient w/ fixed integer values

     int dayOfWeek = 0;

     printf("Enter a day of the week (1-7): ");
     scanf("%d", &dayOfWeek);

    // if(dayOfWeek == 1){
    //     printf("It's Monday");
    // }
    // else if(dayOfWeek == 2){
    //     printf("It's Tuesday");
    // }
    // else if(dayOfWeek == 3){
    //     printf("It's Wednesday");
    // }
    // else if(dayOfWeek == 4){
    //     printf("It's Thursday");
    // }
    // else if(dayOfWeek == 5){
    //     printf("It's Friday");
    // }
    // else if (dayOfWeek == 6){
    //     printf("It's Saturday");
    // }
    // else if (dayOfWeek == 7){
    //     printf("It's Sunday");
    // }
    // else{
    //     printf("You entered a invalid input");
    // }

    switch(dayOfWeek){
        case 1:
            printf("It's Monday");
            break;
        case 2:
            printf("It's Tuesday");
            break;
        case 3:
            printf("It's Wednesday");
            break;
        case 4:
            printf("It's Thrusday");
            break;
        case 5:
            printf("It's Friday");
            break;
        case 6:
            printf("It's Saturday");
            break;
        case 7:
            printf("It's Sunday");
            break;
        default:
            printf("Please only 1-7");
    }

}