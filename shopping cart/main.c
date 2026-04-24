#include <stdio.h> //preprocessor directive
#include <string.h>

int main(){
    // Shopping cart program
    char item[30] = "";
    float price = 0.0;
    int quantity = 0;
    float total = 0.0;




    printf("Welcome to the Shopping Cart!\n");
    printf("What item would you like to buy? ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';  // only use this if you call your name first. Eliminates \n after hitting enter "removes unwanted new line"


    printf("What is the price of the item? ");
    scanf("%f", &price);

    printf("How many of the item would you like to buy? ");
    scanf("%d", &quantity);

    total = price * quantity;
    printf("Your total is $%.2f\n", total);

    return 0;
}