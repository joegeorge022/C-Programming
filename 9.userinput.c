#include <stdio.h>
#include <string.h>

int main (){
    printf("I love pizza \n");

    char name[100];    //100 bytes
    printf("Enter your name: \n");
    //scanf("%s", name);  
    // scanf will only read upto whitespaces. if lastname is there it will be excluded.

    fgets(name, 100, stdin);   //fgets will also include a newline when you click enter key after entering input
    name[strlen(name)-1] = '\0';   // this helps to remove the new line 


    int age;
    printf("Enter your age: \n");
    scanf("%d", &age);

    printf("You are %s \n", name);
    printf("You are %d years old.\n",age);

    return 0;
}
