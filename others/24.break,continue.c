#include <stdio.h>
#include <string.h>

int main(){
    // continue = skips the current iteration of the loop and moves to the next iteration
    // break = exits the loop/switch

    for(int i=1; i<=10;i++){
    // in the 5th iteration it doesnt the rest of code for that iteration
        if(i==5){
            continue;
        }
        printf("%d\n",i);
    }

    for(int i=1; i<=10;i++){
    // in the 5th iteration it exits the loop
        if(i==5){
            break;
        }
        printf("%d\n",i);
    }


}
