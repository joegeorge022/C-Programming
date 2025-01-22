#include <stdio.h>
#include <string.h>

int main(){
    
    // Swapping two variables without using a temporary variable
    // Swapping two chars 
    char a = 'X';
    char b = 'Y';

    char temp = a;
    a = b;
    b = temp;

    printf("a is %c\n",a);
    printf("b is %c\n",b);


    // Swapping two Strings
    char x[15] = "Hello";
    char y[15] = "World";

    char temp2[15];

    strcpy(temp2, x); // Copy contents of x into temp
    strcpy(x, y);    // Copy contents of y into x
    strcpy(y, temp2); // Copy contents of temp into y

    printf("x is %s\n", x);
    printf("y is %s\n", y);

    return 0; 
}
