#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};

    printf("Enter a string: ");
    gets(str);


    for (int i=0; str[i]!='\0'; i++) {
        char ch=str[i];
        
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A');
        }

        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", i + 'a', freq[i]);
        }
    }
}

