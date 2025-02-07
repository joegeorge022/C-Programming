#include <stdio.h>
/*
    Joe George
    CSE- B
    Roll: 40
*/

int main() {
    /*3. Factorial Using While Loop: Write a program to calculate the factorial of a
    given number using a while loop. Validate the input to ensure it is a positive
    integer.*/
    
    int num, result = 1, i;

    printf("Enter Number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Enter a non-negative number.\n");
    } else {
        i = num;
        while (i > 0) {
            result *= i;
            i--;
        }
        printf("Factorial of %d is %d\n", num, result);
    }

    return 0;
}
