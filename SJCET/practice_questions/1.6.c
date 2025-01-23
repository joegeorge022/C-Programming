#include <stdio.h>

int main() {
    /*1.6 Any integer is input through the keyboard. 
    Write a program to find out whether it is an odd number or even number.*/

    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);

    return 0;
}
