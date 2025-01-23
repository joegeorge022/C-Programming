#include <stdio.h>
#include <math.h>

int main(){
    /* 1.3 Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her own vote.
    Test Data: 21
    Expected Output: Congratulation! You are eligible for casting your vote.*/
    
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    
    if (age<21){
        printf("You are not eligible to vote.");
    }
    else{
        printf("You are eligible to vote.");
    }
}
