#include <stdio.h>

void printAge(int *pAge){
    printf("You are %d years old", *pAge);  // dereference
}

int main(){
    //Pointer is a variable like reference that holds a memory address to another variable.
    //    * is an indirection operator (value at address)

    int age = 18;
    int *pAge = &age;

    printf("\nAddress of age: %p\n", &age);
    printf("Value of age: %d\n", age);

    printf("Address of of pAge: %p\n", pAge);
    printf("Value at stored address: %d\n", *pAge);  // dereferencing

    printf("Size of age: %lu bytes\n", sizeof(age));
    printf("Size of pAge: %lu bytes\n", sizeof(pAge));

    printAge(&age);
}
