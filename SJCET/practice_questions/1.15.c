#include <stdio.h>

int main() {
    /*1.15 Write a program in C to read any day in integer number and display day name in the word.
    Test Data : 4
    Expected Output : Thursday*/

    int day;
    printf("Enter the day number: ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Monday \n");
            break;
        case 2:
            printf("Tuesday \n");
            break;
        case 3:
            printf("Wednesday \n");
            break;
        case 4:
            printf("Thursday \n");
            break;
        case 5:
            printf("Friday \n");
            break;
        case 6:
            printf("Saturday \n");
            break;
        case 7:
            printf("Sunday \n");
            break;
        default:
            printf("Invalid day number! \n");
    }
}
