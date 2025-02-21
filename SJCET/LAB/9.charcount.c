#include <stdio.h>
/*
    Joe George
    CSE- B
    Roll: 40
*/

int main(){
    /* 9.Character Frequency Count: Write a program to count the
    frequency of each character in a given string. Ignore case
    sensitivity and consider only alphabetical characters.*/
    char str[1000];
    int freq[26] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 97]++;        }
    }

    printf("Character Frequency:\n");
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", i + 97, freq[i]);
        }
    }
}
