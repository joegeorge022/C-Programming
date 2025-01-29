#include <stdio.h>

int main(){
    char operator;
    int num1, num2, result;
    
    printf("Choose an operator +, -, *, /, %%: ");
    scanf("%c", &operator);
    
    printf("Enter number-1: ");
    scanf("%d", &num1);

    printf("Enter number-2: ");
    scanf("%d", &num2);
    
    switch(operator){
        case '+':
        result=num1+num2;
        printf("Sum of the 2 numbers is %d \n", result);
        break;

        case '-':
        result=num1-num2;
        printf("Difference of the 2 numbers is %d \n", result);
        break;

        case '*':
        result=num1*num2;
        printf("Product of the 2 numbers is %d \n", result);
        break;

        case '/':
        result=num1/num2;
        printf("Quotient of the 2 numbers is %d \n",result);
        break;

        case '%':
        result=num1%num2;
        printf("Remainder of 2 numbers is %d \n",result);
        break;

        default:
        printf("Invalid Input! \n");
    }
    return 0;
}
