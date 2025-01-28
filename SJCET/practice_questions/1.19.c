#include <stdio.h>

int main() {
    /*1.19 Write a C Program to check Whether a Character is Vowel or Consonant*/

    char ch;

    printf("Enter a character in lower case: ");
    scanf(" %c", &ch);

    if (ch >= 'a' && ch <= 'z') {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("The character '%c' is a vowel.\n", ch);
        } else {
            printf("The character '%c' is a consonant.\n", ch);
        }
    } else {
        printf("The character '%c' is not a valid alphabet.\n", ch);
    }
}
