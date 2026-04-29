#include <stdio.h>

int main(){

    // CALCULATOR PROGRAM

    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+ - * /): ");
    scanf(" %c", &operator);    // clear \n from input buffer

    printf("Enter the second number: ");
    scanf("%lf", &num2);



    switch(operator){
        case '+':
            result = num1 + num2;
            printf("The result of %.2lf and %.2lf is %.2lf", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("The result of %.2lf and %.2lf is %.2lf", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("The result of %.2lf and %.2lf is %.2lf", num1, num2, result);
            break;
        case '/':
            if(num2 != 0){
                result = num1 / num2;
                printf("The result of %.2lf and %.2lf is %.2lf", num1, num2, result);
            }
            else{
                printf("Num2 cannot be 0");
            }
            break;
        default:
            printf("Enter only (+ - * /)");
        }
    return 0;
}