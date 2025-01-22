#include <stdio.h>
#include <math.h>

int main(){

    double a;
    double b;
    double c;

    printf("Enter side A: \n");
    scanf("%lf",&a);

    printf("Enter side B: \n");
    scanf("%lf",&b);

    c = sqrt(a*a + b*b);
    printf("\n The third side is %lf",c);

    return 0;
}
