#include <stdio.h>

int main() {
    /*1.18 Write a program in C to accept a grade and declare the equivalent description
    E = Excellent
    V = Very Good
    G = Good
    A = Average
    F = Fail*/

    char grade;

    printf("Enter the grade (E, V, G, A, F): ");
    scanf(" %c", &grade);

    switch (grade) {
        case 'E':
            printf("Excellent\n");
            break;
        case 'V':
            printf("Very Good \n");
            break;
        case 'G':
            printf("Good \n");
            break;
        case 'A':
            printf("Average \n");
            break;
        case 'F':
            printf("Fail \n");
            break;
        default:
            printf("Invalid grade! \n");
    }
}
