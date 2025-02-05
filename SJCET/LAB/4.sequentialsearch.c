#include <stdio.h>

int main() {
    /*4. Sequential Search: Create a program to perform a sequential search in a one
    dimensional array. Input the array elements and the key to search. Display whether the key
    is found and its position.*/
    
    int size, value;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int array[size];
    for (int i = 0; i<size; i++) {
        printf("Enter the %dth element: ", i+1);
        scanf("%d", &array[i]);
    }
    
    printf("\nEnter the number you want to search: ");
    scanf("%d", &value);
    
    for(int j = 0; j<size; j++){
        if(array[j]==value){
            printf("The element %d is at index %d. \n", value, j+1);
        }
    }
}
