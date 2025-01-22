#include <stdio.h>
#include <string.h>
#include <ctype.h>

// uppercase, lowercase, stringreverse etc are not standard functions in C due to some ugly standards
void to_lowercase(char *str) {
    while (*str) {
        *str = tolower((unsigned char) *str);
        str++;
    }
}

void to_uppercase(char *str) {
    while (*str) {
        *str = toupper((unsigned char) *str);
        str++;
    }
}

void strrev(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main(){
    // i used 100 array size for more space during concatenation
    char string1[100] = "Hello ";
    char string2[100] = "World";
    char string3[100] = "Joe ";
    char string4[100] = "Doe ";


 //UPPERCASE & LOWERCASE-------------------------------------------------------------------------

    to_lowercase(string1);  // converts string to lowercase
    to_uppercase(string2);  // converts string to uppercase

    printf("\n%s \n", string1);
    printf("%s \n", string2);

 //CONCATENATION---------------------------------------------------------------------------

    strcat(string1,string2);     // concatenates string1 + string2
    printf("%s \n", string1); //this prints the concatenated string1+string2


    strncat(string3,string2,4);  //concatenates 4 characters to string1 from string2    [GENERAL VERSION==strncat(string1,string2,n);  -concatenates n characters to string1 from string2]
    printf("%s \n", string3); //this prints the original string2

 //COPY & STUFF---------------------------------------------------------------------------

    strcpy(string1,string2);     //copies string2 to string1 REPLACING string1
    printf("%s \n", string1);    //this prints the copied string2

    strncpy(string4,string3,1);  //copies 3 characters from string3 to string4        [GENERAL VERSION==strncpy(string4,string3,n);  copies n characters from string2 to string1]
    printf("%s \n", string4);    //this prints the copied result

 //LENGTH---------------------------------------------------------------------------
 
    printf("Length of string1: %d \n", (int)strlen(string1)); //prints the length of string1
    printf("Length of string2: %d \n", (int)strlen(string2)); //prints the length of string2

 //STRINGSET & STRINGREV----------------------------------------------------------------------------

    memset(string1, 'a', 5); //sets the first 5 characters of string1 to 'a'
    printf("%s \n", string1); //this prints the string1

    strrev(string2); //reverses the string2
    printf("%s \n", string2); //this prints the reversed string2

    return 0;
}
