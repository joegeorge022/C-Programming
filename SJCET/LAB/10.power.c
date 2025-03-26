/*
    Joe George
    CSE- B
    Roll: 40
*/

#include <stdio.h>

int power(int base, int pow){
    if (pow==1){
        return base;
    } else {
        return base * power(base, pow-1);
    }
}

int main(){
    int base,pow;
    printf("Enter the base: ");
    scanf("%d", &base);
    
    printf("Enter the power: ");
    scanf("%d", &pow);
    
    printf("%d \n", power(base,pow));
    
    return 0;
}
