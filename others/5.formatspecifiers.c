#include <stdio.h>

int main() {
    /*
    format specifier % = defines and formats a type of data to be displayed.

    %c = character
    %s = string (or array of characters)
    %f = float
    %lf = double
    %d = integer

    %.1 = decimal precision      (ex: here 1 decimal place is shown )
    %1 = minimum field width     (ex: output has only 1 field with here)
    %- =left align               (here left alignment is given)
    
    */

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%-8.2f \n", item1);    // the ."2" ensures only 2 decimal place values are being shown.
    printf("Item 2: $%-8.2f \n", item2);    // the "8". ensures that i would like to have 8 spaces to display my number.
    printf("Item 3: $%-8.2f \n", item3);    //  the "-" ensures that the alignment is to the left.

    return 0;
}
