#include <stdio.h>

int main() {
    /*5. Find Maximum and Minimum: Write a program to input elements into a one-dimensional array and find the maximum and minimum elements. Display their positions in the array.*/

    int size, min = 1, max = 1;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int array[size];

    for (int a = 0; a < size; a++) {
        printf("Enter the %dth element: ", a+1);
        scanf("%d", &array[a]);
    }
    
    int largest = array[0], smallest = array[0];
    
    for (int i = 1; i < size; i++) {
        if (array[i] > largest) {
            largest = array[i];
            max = i + 1;
        }
        if (array[i] < smallest) {
            smallest = array[i];
            min = i + 1;
        }
    }

    printf("\n%d is the smallest element and its index is %d.\n", smallest, min);
    printf("%d is the largest element and its index is %d.\n", largest, max);
}




/*
#include <stdio.h>

int main() {
    int size, min = 0, max = 0;
    
    printf("Enter size of array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter elements: ");
    
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
        if (array[i] > array[max]) max = i;
        if (array[i] < array[min]) min = i;
    }

    printf("\nSmallest: %d at index %d\n", array[min], min + 1);
    printf("Largest: %d at index %d\n", array[max], max + 1);

    return 0;
}
*/
