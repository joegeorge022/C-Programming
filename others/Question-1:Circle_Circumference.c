#include <stdio.h>

int main(){

    // sets a constant value for pi
    const double PI = 3.14159;

    // declare the variables 
    double radius;
    double circumference;
    double area;

    // gets radius from the user
    printf("\n Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // calculates the results
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    // prints the results
    printf("\n Circumference: %lf",circumference);
    printf("\n Area: %lf \n",area);

    return 0;
}
