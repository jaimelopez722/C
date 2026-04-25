#include <stdio.h>
#include <math.h>

int main(){

    // WEIGHT CONVERTER PROGRAM

    int choice = 0;
    float pounds = 0.0;
    float kilogram = 0.0;

    printf("==== Weight Conversion Calculator ====\n");
    printf("1. kilograms to Pounds\n");
    printf("2. Pounds to kilograms\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1){
        // kilograms to pounds
        printf("Enter your weight in kg: ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.205;
        printf("You're weight from kg to lbs. is %.2f", pounds);
    }
    else{
        // pounds to kilograms
        printf("Enter your weight in lbs: ");
        scanf("%f", &pounds);
        kilograms = pounds / 2.205;
        printf("You're weight from lbs to kg. is %.2f", kilograms);
    }

    return 0;
}