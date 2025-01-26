#include <stdio.h>
#include <stdlib.h>

int main() {
    /*1.14 Write a program to find the absolute value of a number entered through the keyboard.*/
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);


    // Using abs() function
    printf("The absolute value is %d.\n", abs(number));

    // Ordinary way
    if (number < 0) {
        number = -number;
    }
    printf("The absolute value is %d.\n", number);


    // Remember: abs() function is included in <stdlib.h> 
}
