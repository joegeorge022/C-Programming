#include <stdio.h>

// this is a program we did in python 

// remember??

// but this one's a bit modified and compels user for an input using recursion.
int mario(){
    int height;
    printf("Height: ");
    scanf("%d",&height);
    
    if(height >= 1 && height <= 8){
        for(int i=1;i<=height;i++){
            for(int j=1;j<=i;j++){
                printf("#");
            }
            printf("\n");
        }
    }
    else{
        mario();
    }
}

int main(){
    mario();
    return 0; 
}
