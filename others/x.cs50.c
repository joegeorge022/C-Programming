#include <stdio.h>
#include <cs50.h>
// cs50.h is a library that contains some functions that are not available in the standard c library
// it is a library that is used in the cs50 course by harvard

int main(){
    string s = "Hello";
    printf("%s\n", s);

    string name = get_string("Enter your name: ");
    printf("Hello, %s\n", name);
}
