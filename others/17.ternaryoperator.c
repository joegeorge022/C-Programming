#include <stdio.h>

int findMax(int x, int y){
    //ternary operator = shortcut to if/else when assigning/returning value
    // (condition) ? value if true : value if false

    return (x > y) ? x : y;
}

int main(){
    int max = findMax(3,4);
    printf("%d \n",max);
}

    //the below code can be substituted by a ternary operator as shown above
   
   /*if(x>y){
        return x;
    }
    else{
        return y;
    }*/
