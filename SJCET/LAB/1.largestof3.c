#include <stdio.h>

int main(){
    /*1. Largest of Three Numbers: Write a program to input three numbers and find
    the largest among them using nested if statements. Display appropriate messages 
    for each scenario.*/
    
    int num1,num2,num3;
    
    printf("Enter numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if (num1 > num2){
        if(num1 > num3){
            printf("%d is largest.\n", num1);
        } else if (num1 == num3){
            printf("%d and %d are same \n", num1, num3);
        } else {
            printf("%d is largest.\n", num3);
        }
    } else if (num2 > num1){
        if(num2 > num3){
            printf("%d is largest.\n",num2);
        } else if (num2 == num3){
            printf("%d and %d are same \n", num2, num3);
        } else {
            printf("%d is largest.\n", num3);
        }
    } else{
        if(num2 == num3){
            printf("Three numbers are same. \n");
        }
        else{
            printf("%d and %d are same \n", num1, num2);
        }
    }
    
    return 0;
}



/*
#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 == num2 && num2 == num3) {
        printf("Three numbers are the same.\n");
    } else {
        if (num1 >= num2 && num1 >= num3) {
            printf("%d is the largest.\n", num1);
        } else if (num2 >= num1 && num2 >= num3) {
            printf("%d is the largest.\n", num2);
        } else {
            printf("%d is the largest.\n", num3);
        }

        if (num1 == num2 || num1 == num3 || num2 == num3) {
            printf("Two numbers are the same.\n");
        }
    }

    return 0;
}
*/
