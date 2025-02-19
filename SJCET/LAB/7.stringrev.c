#include <stdio.h>
/*
    Joe George
    CSE- B
    Roll: 40
*/

int main(){
    /* 7.Reverse a String: Write a program to reverse a string
    entered by the user without using string library functions.
    Display the reversed string.*/
    
    char str[100];
    int length;
    
    printf("Enter the string: ");
    gets(str), sizeof(str), stdin;
    
    printf("%s \n", str);
    

    for(length=0; str[length]!='\0'; length++);
        int i = length-1;
        for(int j=0; j<length/2; j++){
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;
            i--;
        }
    printf("%s \n", str);
}
