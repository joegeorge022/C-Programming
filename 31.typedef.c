#include <stdio.h>
#include <string.h>

//typedef char user [25];

struct User{
    char name[25];
    char password[12];
    int id;
};

int main(){
    //typedef = reserved keyword that gives an existing datatype a nickname

    struct User user1 = {"Joe", "Password123", 1234567890,};
    struct User user2 = {"Moe", "Password123", 9876543210,};

    printf("\n%s \n", user1.name);
    printf("%s \n", user1.password);
    printf("%d \n", user1.id);
    printf("%s \n", user2.name);

    printf("\n");

    printf("%s \n", user2.name);
    printf("%s \n", user2.password);
    printf("%d \n", user2.id);

    return 0;
}
