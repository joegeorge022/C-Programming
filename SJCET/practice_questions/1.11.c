#include <stdio.h>

int main() {
    /*1.11 Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
    Hint: Equilateral triangle: All three sides are equal.
    Isosceles triangle: All two sides are equal.
    Scalene triangle: No sides are equal.*/    
    float side1, side2, side3;
    // using float cause why not. (PRECISION: double >> float >> int)

    printf("Enter the first side of the triangle: ");
    scanf("%f", &side1);
    printf("Enter the second side of the triangle: ");
    scanf("%f", &side2);
    printf("Enter the third side of the triangle: ");
    scanf("%f", &side3);

    if (side1==side2 && side2==side3) {
        printf("The triangle is Equilateral.\n");
    } else if (side1==side2 || side2==side3 || side1==side3) {
        printf("The triangle is Isosceles.\n");
    } else {
        printf("The triangle is Scalene.\n");
    }
}
