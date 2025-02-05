#include <stdio.h>

int main() {
    /*5. Find Maximum and Minimum: Write a program to input elements into a one-dimensional
    array and find the maximum and minimum elements. Display their positions in the array.
    */
    
    //asks for the size of the array
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int array[size];

    //inputs the elements accordingly    
    for (int a = 0; a < size; a++) {
        printf("Enter the %dth element: ", a+1);
        scanf("%d", &array[a]);
    }
    
    int largest = array[0], smallest = array[0];
    
    //finds largest element
    for (int i = 1; i < size; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }

    //finds smallest element
    for (int i = 1; i < size; i++) {
        if (array[i] < smallest) {
            smallest = array[i];
        }
    }

    printf("\n%d is the smallest element.\n", smallest);
    printf("%d is the largest element.\n", largest);
}
