#include <stdio.h>

int main(){
    // 2-D Array is an array of arrays (each element is an array)
    // useful if you need a matrix, grid or a table of data.


    // 2D array with 2 rows and 3 columns
    // int numbers[2][3] = {{1, 2, 3},{ 4, 5,6}};

    //ANOTHER WAY is given below
    // Assigning values to 2D array separately

    int numbers[2][3];
    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;

    // Printing elements of 2D array 
    // Nested loop is used to iterate through each element of 2D array
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }
    
    // Another array (3x3)
    int nums[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Printing elements of 3x3 array

    int rows = sizeof(nums)/sizeof(nums[0]);
    int columns = sizeof(nums[0])/sizeof(nums[0][0]);

    printf("Rows: %d\n", rows);
    printf("Columns: %d\n", columns);


    for (int x=0;x<rows;x++){
        for(int y=0;y<columns;y++){
            printf("%d",nums[x][y]);
        }
        printf("\n");
    }

    return 0;
}
