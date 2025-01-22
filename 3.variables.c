#include <stdio.h>

// 3. VARIABLE
// Variables = Allocated space in memory to store a value.
// Read 5.FORMAT SPECIFIERS CHAPTER to know more about %s, %d, etc...

int main() {

 //  INTEGERS
    int x;                 // declaration

    x = 100;               //initialization

    int y = 321;           //declaration + initialization

    int age = 18;          //integer

 // FLOATS
    float cgpa = 9.0;

 // CHARACTERS or (char)         
    char grade = 'C';           // single character
    char name[] = "Joe";        // array of characters



 // to print a variable use the datatype representation's.   %s=string   %d = decimals  %f = float

    printf("Hello %s  \n",name);

    printf("You are %d years old \n",age);   // %d means decimal and age = the value we already stored as age i.e 18
    
    printf("Your average grade is %f",cgpa);    
    return 0;
}
