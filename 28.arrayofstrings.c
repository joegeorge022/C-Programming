#include <stdio.h>

int main(){
    // Array of strings
    // Array of strings is an array of character arrays
    // Each element of the array is a string (character array)
    // Each string is null-terminated (ends with '\0')
    // The last element of the array is NULL
    
    
    // Array of strings
    char names[4][10] = {"Joe", "Doe", "Moe", "Boe"};

    // Printing elements of array of strings
    for(int i = 0; i < 4; i++){
        printf("%s\n", names[i]);
    }

    printf("\n");

    // Another way to define array of strings
    char animals[][10] = {"Dog", "Cat", "Elephant", "Lion"};

    // Printing elements of array of strings
    for(int i = 0; i < 4; i++){
        printf("%s\n", animals[i]);
    }


    return 0;
}
