#include <stdio.h>

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

    if(operator=='+'){
        result=num1+num2;
        printf("Sum of the 2 numbers is %lf \n",result);
    }
    else if(operator=='-'){
        result=num1-num2;
        printf("Difference of the 2 numbers is %lf \n",result);
    }
    else if(operator=='*'){
        result=num1*num2;
        printf("Product of the 2 numbers is %lf \n",result);
    }
    else if(operator=='/'){
        result=num1/num2;
        printf("Quotient of the 2 numbers is %lf \n",result);
    }
    else{
        printf("Invalid Input");
    }

    return 0;
}
