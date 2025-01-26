#include <stdio.h>

int main() {
    /*1.12 Write a program to check whether a triangle is valid or not, 
    when the three angles of the triangle are entered through the keyboard. 
    A triangle is valid if the sum of all the three angles is equal to 180 degrees.*/    

    int angle1, angle2, angle3, sum;

    printf("Enter the first angle of the triangle: ");
    scanf("%d", &angle1);

    printf("Enter the second angle of the triangle: ");
    scanf("%d", &angle2);

    printf("Enter the third angle of the triangle: ");
    scanf("%d", &angle3);

    sum = angle1 + angle2 + angle3;

    if (sum == 180) {     
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.\n");
    }

    //you could also check if all angles are above 0.
    // since people could troll and input 180,0,0 it will work😅😂
}
