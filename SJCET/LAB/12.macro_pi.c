#include <stdio.h>
/*
    Joe George
    CSE- B
    Roll: 40
*/
 
#define PI 3.14159
#define circle(radius) PI*radius*radius
#define cylinder(radius,height) PI*radius*radius*height

int main(){
    int radius, height;
    
    printf("Enter the radius: ");
    scanf("%d", &radius);
    
    printf("Enter the height of cylinder: ");
    scanf("%d", &height);

    printf("Area of Circle: %f \n",circle(radius));
    printf("Area of Cylinder: %f \n",cylinder(radius,height));
    
    return 0;
}
