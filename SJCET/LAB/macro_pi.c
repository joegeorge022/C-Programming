/*  Joe George
    CSE- B
    Roll: 40
*/

#include <stdio.h>

#define PI 3.14159
#define circle PI*radius*radius
#define cylinder PI*radius*radius*height

int main(){
    int radius, height;
    
    printf("Enter the radius: ");
    scanf("%d", &radius);
    
    printf("Enter the height of cylinder: ");
    scanf("%d", &height);

    printf("Area of Circle: %f \n",circle);
    printf("Area of Cylinder: %f \n",cylinder);
    
    return 0;
}
