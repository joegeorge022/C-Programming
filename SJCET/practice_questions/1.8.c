#include <stdio.h>

int main() {
    /*1.8 Any year is input through the keyboard. 
    Write a program to determine whetherthe year is a leap year or not.*/
    
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }


    return 0;
}
