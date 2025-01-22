#include <stdio.h>

int main(){
    char grade;

    // switch statements - more efficient than else if statements.
    // allows value to be tested for equality against many cases.

    // 👉We learned caseof structure in SEMESTER 1. same thing



    printf("\n Enter a letter grade: ");
    scanf("%c",&grade);

    switch(grade){
        case 'A':
        printf("Nice \n");
        break;                
        // add breaks so that the rest of the code is not executed.
        // only the corresponding output has to be shown.

        case 'B':
        printf("You did ok. \n");
        break;

        case 'C':
        printf("Why are you coming to school.? \n");
        break;

        case 'D':
        printf("Failure management \n");
        break;

        case 'F':
        printf("You should die \n");
        break;

        deafult:
        printf("Invalid input \n");
    }

    return 0;
}
