#include <stdio.h>

int main() {

    int size, min, max;
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
            max = i+1;
        } else if (array[i] < smallest) {
            smallest = array[i];
            min = i+1;
        }
    }

    printf("\n%d is the smallest element and its index is %d.\n", smallest, min);
    printf("%d is the largest element and its index is %d. \n", largest, max);
}
