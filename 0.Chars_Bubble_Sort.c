#include <stdio.h>

int main(){
    char array[] = {'e', 'a', 'j', 'f', 'c', 'h', 'b', 'd', 'g', 'i'};
    int size = sizeof(array)/sizeof(array[0]);
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1;j++){
            if(array[j]>array[j+1]){  // to sort in descending order change this to <
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    for(int k=0; k<size; k++){
        printf("%c ", array[k]);
    }
}




// EASYYY👆👆👆👆👆👆👆👆👆👆👆







// Another way if you want with a bit more professionalism👇👇👇👇👇

/*
void sort(char array[], int size){
    for (int i=0; i< size-1; i++){
        for(int j=0; j<size-1; j++){
            if(array[j]>array[j+1]){
                int temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}

void printarray(char array[], int size){
    for (int i=0; i<size; i++){
        printf("%c ",array[i]);
    }
}


int main(){
    char array[] = {'e', 'a', 'j', 'f', 'c', 'h', 'b', 'd', 'g', 'i'};
    int size = sizeof(array)/sizeof(array[0]);

    sort (array,size);
    printarray(array,size);
    
}
*/
