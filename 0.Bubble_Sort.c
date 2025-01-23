#include <stdio.h>

int main(){
    int array[] ={3,5,6,7,2,8,9,1,4,10};
    int size = sizeof(array)/sizeof(array[0]);
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1;j++){
            if(array[j]>array[j+1]){   // to sort in descending order change the > to < inside the if condition
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    for(int k=0; k<size; k++){
        printf("%d ", array[k]);
    }
}




// EASYYY👆👆👆👆👆👆👆👆👆👆👆
// Honestly tho this code is absolutely fine and standard. You could scroll down if you want to











//optimized version with flag tracking to reduce unnecessary comparisons👇👇👇👇👇

#include <stdio.h>

int main(){
    int array[] ={3,5,6,7,2,8,9,1,4,10};
    int size = sizeof(array)/sizeof(array[0]);
    for(int i=0;i<size-1;i++){
        int swapped = 0;
        for(int j=0;j<size-1;j++){
            if(array[j]>array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) break;
    }
    for(int k=0; k<size; k++){
        printf("%d ", array[k]);
    }
}





// Another way if you want with a bit more professionalism👇👇👇👇👇

void sort(int array[], int size){
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

void printarray(int array[], int size){
    for (int i=0; i<size; i++){
        printf("%d ",array[i]);
    }
}


int main(){
    int array[] = {9, 1, 5, 3, 7, 2, 8, 4, 6};
    int size = sizeof(array)/sizeof(array[0]);

    sort (array,size);
    printarray(array,size);
    
}

/*
                         ('-.                       ('-.               _  .-')                 ('-.   
                       _(  OO)                    _(  OO)             ( \( -O )              _(  OO)  
     ,--. .-'),-----. (,------.        ,----.    (,------. .-'),-----. ,------.   ,----.    (,------. 
 .-')| ,|( OO'  .-.  ' |  .---'       '  .-./-')  |  .---'( OO'  .-.  '|   /`. ' '  .-./-')  |  .---' 
( OO |(_|/   |  | |  | |  |           |  |_( O- ) |  |    /   |  | |  ||  /  | | |  |_( O- ) |  |     
| `-'|  |\_) |  |\|  |(|  '--.        |  | .--, \(|  '--. \_) |  |\|  ||  |_.' | |  | .--, \(|  '--.  
,--. |  |  \ |  | |  | |  .--'       (|  | '. (_/ |  .--'   \ |  | |  ||  .  '.'(|  | '. (_/ |  .--'  
|  '-'  /   `'  '-'  ' |  `---.       |  '--'  |  |  `---.   `'  '-'  '|  |\  \  |  '--'  |  |  `---. 
 `-----'      `-----'  `------'        `------'   `------'     `-----' `--' '--'  `------'   `------' 

*/




// 🗿🗿🗿🗿🗿🗿🗿🗿🗿🗿🗿🗿🗿🗿🗿🗿🗿🗿🗿🗿
// Even better way which asks the user for the size and elements of the array and sorts it via bubble sort
// Absolute Gigachad


#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int array[size];
    for (int a = 0; a < size; a++) {
        printf("Enter the %dth element: ", a);
        scanf("%d", &array[a]);
    }
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    for (int k = 0; k < size; k++) {
        printf("%d ", array[k]);
    }
}



/*

   ______     ___        _     _________  ________  ______     ____   ____  ________  _______     ______   _____   ___   ____  _____  
 .' ___  |  .'   `.     / \   |  _   _  ||_   __  ||_   _ `.  |_  _| |_  _||_   __  ||_   __ \  .' ____ \ |_   _|.'   `.|_   \|_   _| 
/ .'   \_| /  .-.  \   / _ \  |_/ | | \_|  | |_ \_|  | | `. \   \ \   / /    | |_ \_|  | |__) | | (___ \_|  | | /  .-.  \ |   \ | |   
| |   ____ | |   | |  / ___ \     | |      |  _| _   | |  | |    \ \ / /     |  _| _   |  __ /   _.____`.   | | | |   | | | |\ \| |   
\ `.___]  |\  `-'  /_/ /   \ \_  _| |_    _| |__/ | _| |_.' /     \ ' /     _| |__/ | _| |  \ \_| \____) | _| |_\  `-'  /_| |_\   |_  
 `._____.'  `.___.'|____| |____||_____|  |________||______.'       \_/     |________||____| |___|\______.'|_____|`.___.'|_____|\____| 
                                                                                                                                      
👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇👇
*/

// THIS VERSION FEATURES A FLAG THAT WILL PREVENT UNNECESSARY ITERATIONS.

#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int array[size];
    for (int a = 0; a < size; a++) {
        printf("Enter the %dth element: ", a);
        scanf("%d", &array[a]);
    }
    for (int i = 0; i < size - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) break;
    }
    for (int k = 0; k < size; k++) {
        printf("%d ", array[k]);
    }
}



