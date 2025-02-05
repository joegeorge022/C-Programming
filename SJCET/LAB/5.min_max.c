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
