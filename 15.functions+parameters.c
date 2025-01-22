#include <stdio.h>
// birthday function with parameters


// while defining functions type parameter's datatype.
void birthday(char name[], int age){
    printf("\n Happy Birthday dear %s!", name);
    printf("\n You are %d years old.\n",age);
}


int main(){

    // Declare variables and call with variable names
    char name[] = "Joe";
    int age = 18;
    birthday(name,age);



    // OR type the parameters directly like below.
    birthday("Joe",18);
}
