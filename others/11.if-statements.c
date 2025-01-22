#include <stdio.h>

int main(){

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);


    // IF statements 

    if(age>=18){
        printf("You are greater than 18 years old. \n");
    }
    else if(age<=0){
        printf("You havent been born yet");
    }
    else{
        printf("You are too young. \n");
    }

    return 0;
}
