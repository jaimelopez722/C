#include <stdio.h>
#include <math.h>

int main(){

    //TEMPERATURE CONVERSION PROGRAM

    char choice = '\0';
    float celsius = 0.0;
    float fahrenheit = 0.0;

    printf("====Temperature Conversion Calculator====\n");
    printf("C. Fahrenheit to Celsius\n");
    printf("F. Celsius to Fahrenheit\n");
    printf("Enter your choice (C or F): ");
    scanf("%c", &choice);

    if(choice == 'C'){
        // Fahrenheit to Celsius
        printf("Enter your temperature in F: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32.0) / (9.0/5.0);
        printf("%.1f F to celsius is %.1f C", fahrenheit, celsius);
    }
    else if(choice == 'F'){
        // Celsius to Fahrenheit
        printf("Enter your temperature in C: ");
        scanf("%f", &celsius);
        fahrenheit = celsius * (9.0/5.0) + 32.0;
        printf("%.1f C to fahreheit is %.1f F", celsius, fahrenheit);
    }
    else{
        printf("You didn't enter a correct choice");
    }


    return 0;
}