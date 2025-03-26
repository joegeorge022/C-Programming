#include <stdio.h>
/*
    Joe George
    CSE- B
    Roll: 40
*/

void arrsum(int array[],int size){
   int sum = 0;
   for(int i=0; i<size; i++){
       sum += array[i];
   }
   
   printf("Sum: %d \n",sum);
}

int main(){
   int size;
   printf("Enter the size of the array: ");
   scanf("%d", &size);
   
   int array[size];
   printf("Enter the %d numbers: ",size);
   for(int i=0; i<size; i++){
       scanf("%d", &array[i]);
   }
   
   arrsum(array, size);
   return 0;
}
