#include <stdio.h>
#include <string.h>

int main(){
    // do while loop
    // do {arguments} while (condition);
    // executes the block of code first and then checks the condition
    // always execute atleast once.

    int number = 0;
    int sum = 0;
    
    do{
        printf("\nEnter a number: ");
        scanf("%d",&number);
        if(number > 0){
            sum += number;
        }
    }while(number > 0);

    printf("\nSum: %d\n",sum);

    // just using a while loop wouldn't work here
    // so to execute the block of code atleast once, we use do while loop
    return 0;
}
