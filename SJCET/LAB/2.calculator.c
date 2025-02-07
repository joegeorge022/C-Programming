#include <stdio.h>
/*
    Joe George
    CSE- B
    Roll: 40
*/

int main(){
    /*2. Write a C program that acts as a simple calculator. The program should take
    two numbers and an operator (+, -, *, /, %) as input and perform the
    corresponding operation using a switch statement. If the operator is invalid,
    display an error message.
    
    Detailed Steps:
        1. Prompt the user to enter two numbers.
        2. Ask the user to choose an operator (+, -, *, /, %).
        3. Use a switch statement to handle the operator and perform the calculation.
        4. Display the result of the operation.
        5. Handle invalid operators using the default case.*/
    
    char operator;
    int num1, num2, result;
    
    printf("Choose an operator +, -, *, /, %%: ");
    scanf("%c", &operator);
    
    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);
    
    switch(operator){
        case '+':
        result=num1+num2;
        printf("Sum of the 2 numbers is %d. \n", result);
        break;

        case '-':
        result=num1-num2;
        printf("Difference of the 2 numbers is %d. \n", result);
        break;

        case '*':
        result=num1*num2;
        printf("Product of the 2 numbers is %d. \n", result);
        break;

        case '/':
        result=num1/num2;
        printf("Quotient of the 2 numbers is %d. \n",result);
        break;

        case '%':
        result=num1%num2;
        printf("Remainder of 2 numbers is %d. \n",result);
        break;

        default:
        printf("Invalid Input! \n");
    }
    return 0;
}
