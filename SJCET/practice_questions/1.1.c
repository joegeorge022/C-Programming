#include <stdio.h>

//You can also use if else conditionals for this but here there are many cases so switch operator seems more suitable.

int main(){
    char operator;
    double num1;
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
        printf("Sum of the 2 numbers is %.2lf \n",result);
        break;

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
