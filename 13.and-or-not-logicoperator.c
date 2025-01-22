#include <stdio.h>
#include <stdbool.h>

int main(){
//LOGICAL OPERATORS

// AND operator (&&)
// checks if two conditions are true
    float temp = 25;

    if (35>=temp && temp>=25){
        printf("Weather is good. \n");
    }



// OP operator (||)
// checks if one of them is true

    float temp2 = 40;

    if(temp2 <=0 || temp2 >=30){
        printf("It's bad temperature \n");
    }
    else{
        printf("The weather is good.");
    }



// NOT operator (!)  
//  checks if condition is false  
    bool sunny = false;

    if(sunny){
        printf("It is sunny. \n");
    }

    if(!sunny){
        // NOT sunny
        printf("It is not sunny. \n");
    }

    return 0;
}

