#include <stdio.h>
#include <string.h>
/*
    Joe George
    CSE- B
    Roll: 40
*/

int main(){
    /* 7.Compare Two Strings: Create a program to input two strings
    and compare them using the strcmp() function. Display whether
    the strings are equal or not.*/
    
    char str1[15];
    char str2[15];
    
    printf("Enter the 1st string: ");
    gets(str1);
    
    printf("Enter the 2nd string: ");
    gets(str2);
    
    if(strlen(str1)!=strlen(str2)){
        printf("Strings have different lengths.\n");
        return 0;
    }
    
    int cmp = strcmp(str1, str2);
    
    if(cmp==0){
        printf("Strings are same.\n");
    } else {
        printf("Strings are different.\n");
    }
}
