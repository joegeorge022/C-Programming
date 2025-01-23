#include <stdio.h>

//You can also use if else conditionals for this but here there are many cases so switch operator seems more suitable.

int main(){
    /* 1.1 Write a C program, which takes two integer operands and one operator form the user, 
    performs the operation and then prints the result. 
    (Consider the operators+,-,*, /, % and use Switch Statement) */

    char operator;
    double num1;   // i used double here for more precision since it's a calculator✌️
    double num2;
    double result;

    printf("Enter the operator (+,-,*,/): ");
    scanf("%c", &operator);

    printf("Enter number 1: ");
    scanf("%lf", &num1);

    printf("Enter number 2: ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
        result=num1+num2;                 
        printf("Sum of the 2 numbers is %.2lf \n",result);  // %.2lf displays only 2 digits after the decimal point. Remove it for more precision.
        break;                                              // I just found it annoying to have a ton of zero's in the answer💀.

        case '-':
        result=num1-num2;
        printf("Difference of the 2 numbers is %.2lf \n",result);
        break;

        case '*':
        result=num1*num2;
        printf("Product of the 2 numbers is %.2lf \n",result);
        break;

        case '/':
        result=num1/num2;
        printf("Quotient of the 2 numbers is %.2lf \n",result);
        break;

        default:
        printf("Invalid Input!");
    }
}
