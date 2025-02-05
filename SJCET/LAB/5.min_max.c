#include <stdio.h>

int main() {

    //asks for the size of the array
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    //inputs the elements accordingly
    int array[size];
    for (int a = 0; a < size; a++) {
        printf("Enter the %dth element: ", a+1);
        scanf("%d", &array[a]);
    }
    
    //bubble sort algorithm
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    
    //prints the largest and smallest numbers.
    printf("\n%d is the smallest element.\n",array[0]);
    printf("%d is the largest element.\n",array[size-1]);
}
