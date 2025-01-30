#include <stdio.h>

int main(){
    /*3. Factorial Using While Loop: Write a program to calculate the factorial of a
    given number using a while loop. Validate the input to ensure it is a positive
    integer.*/
    
    int num, result=1;
    
    printf("Enter Number: ");
    scanf("%d", &num);
    
    if(num>0){
        while(num>0){
            result *= num;
            num -= 1;    
        }
        printf("%d is the factorial. \n",result);
    } else{
        printf("Enter a positive number. \n");
    }
    
    return 0;
}
