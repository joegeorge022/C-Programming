#include <stdio.h>
/*
    Joe George
    CSE- B
    Roll: 40
*/

int main(){
    int row, col;

    printf("Enter no of row's: ");
    scanf("%d", &row);

    printf("Enter no of column's: ");
    scanf("%d", &col);

    int array1[row][col];
    int array2[row][col];
    int sum[row][col];
    
    printf("Input the elements of the array 1: ");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &array1[i][j]);
        }
    }
    
    printf("Input the elements of the array 2: ");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &array2[i][j]);
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            sum[i][j] = array1[i][j] + array2[i][j];
        }
    }
    
    printf("\nSum Array: \n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}
