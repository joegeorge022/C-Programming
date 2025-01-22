#include <stdio.h>
/*
   Function Prototyping 
  -is function declaration without a bady before main()
  -It Ensures that calls to a function are made with correct agruments.

  - many C compilers don't check for parameter matching
  - missing arguments will result in unexpected behaviour
  - Prototyping causes compiler to flag error if arguments are missing
*/


void hello(char name[], int age); //function prototype

int main(){
    char name[] = "Joe";
    int age = 18;

    // This wont work since function is called before declaration.
    hello(name,age);

    return 0;
}

void hello(char name[], int age){
    printf("\n Hello %s. ",name);
    printf("\n You are %d years old. \n",age);
}
