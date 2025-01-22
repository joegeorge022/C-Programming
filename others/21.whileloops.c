#include <stdio.h>
#include <string.h>

int main() {
    // while loop
    // while (condition) {arguments}

    char name[25];
    printf("\nEnter your name: ");
    fgets(name,25,stdin);
    name[strlen(name)-1]='\0';

    while(strlen(name)==0){
        printf("\nYou didnt enter your name!!!");
        printf("\nPlease enter your name: ");
        fgets(name,25,stdin);

        name[strlen(name)-1]='\0';
    }
    
    printf("\nHello %s\n",name);
    return 0;
}
