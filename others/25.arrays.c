#include <stdio.h>

int main(){
    // array[] = data structure that can store multiple values of the same data type.
    // a string is an array of characters
    char name[] = "Joe"; 


    //below is an array named prices with 5 elements
    double prices[] = {5.0,10.0,15.0,20.0,25.0};


    printf("%lf\n",prices[1]);   //10 (the index of 10 is 1)


    prices[1] = 20.0; //changing the value of the 2nd element to 20.0

    printf("%lf\n",prices[1]);   //20 (the index of 20 is 1)
    return 0;
}
