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

    int array[row][col];
    int transpose[col][row];
    
    printf("Input the elements of the array: ");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &array[i][j]);
        }
    }
    

    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            transpose[i][j] = array[j][i];
        }
    }
    
    printf("\nTranspose Array: \n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}
