#include <stdio.h>
/*
    Joe George
    CSE- B
    Roll: 40
*/

int main(){
    /* 8.Character Frequency Count: Write a program to count the
    frequency of each character in a given string. Ignore case
    sensitivity and consider only alphabetical characters.*/
    
    char str[15];
    int count = 0;
    
    printf("Enter the string: ");
    gets(str);
    
    for(int i=0; str[i]!='\0'; i++){
        count++;
    }
    
    printf("Letter count: %d\n",count);
    
}
