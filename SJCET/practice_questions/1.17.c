#include <stdio.h>

int main() {
    /*1.17 Given the length and breadth of a rectangle, write a program 
    to find whether the area of the rectangle is greater than its perimeter. 
    Ex: the area of a rectangle with length = 5 and breadth = 4 is greater than its perimeter.*/

    float length, breadth, area, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    if (area > perimeter) {
        printf("The Area of the rectangle is greater than its Perimeter.\n");
    } else {
        printf("The Area of the rectangle is not greater than its perimeter.\n");
    }
}
