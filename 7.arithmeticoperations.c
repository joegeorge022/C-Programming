#include <stdio.h>

int main (){
    // Arithmetic Operations

    // + addition
    // - subtraction
    // * multiplication
    // / division
    // % modulus
    // ++ increment (value increases by 1)
    // -- decrement (value decreases by 1)

    int x = 4;
    int y = 5;

    //Remember that we are storing x and y as integers.
    // To get decimal values for accuracy, set datatype to float

    printf("Sum: %d \n",x+y);
    printf("Difference: %d \n",x-y);
    printf("Product: %d \n",x*y);

    // Remember how .2 with data type specifier will enable only 2 decimal place visibility.
    printf("Quotient: %.2f \n",x/(float)y);
    printf("Remainder: %d \n",x%y);

    x++;  
    printf("x increased: %d \n",x);

    y--;  
    printf("y decreased: %d",y);

    return 0;
}
