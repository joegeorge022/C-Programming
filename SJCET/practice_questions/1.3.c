#include <stdio.h>
#include <math.h>

int main(){
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
