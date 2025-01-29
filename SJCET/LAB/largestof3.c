#include <stdio.h>

int main(){
    int num1,num2,num3;
    
    printf("Enter numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if (num1 > num2){
        if(num1 > num3){
            printf("%d is largest.\n", num1);
        } else if (num1 = num3){
            printf("%d and %d are same \n", num1, num3);
        } else {
            printf("%d is largest.\n", num3);
        }
    } else if (num2 > num1){
        if(num2 > num3){
            printf("%d is largest.\n",num2);
        } else if (num2 = num3){
            printf("%d and %d are same \n", num2, num3);
        } else {
            printf("%d is largest.\n", num3);
        }
    } else{
        if(num2 = num3){
            printf("Three numbers are same. \n");
        }
        else{
            printf("%d and %d are same \n", num1, num2);
        }
    }
    
    return 0;
}
