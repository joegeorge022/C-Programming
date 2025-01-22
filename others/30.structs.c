#include <stdio.h>
#include <string.h>

// struct = collection of related members or Variables .   (can be of different datatypes)

struct Player
{
    char name[12];
    int age;
};

int main(){
     struct Player player1;
     struct Player player2;

     strcpy(player1.name, "Joe");
     player1.age = 18;
     strcpy(player2.name, "Moe");
     player2.age = 20;

     printf("%s \n",player1.name);
     printf("%d \n",player1.age);

     printf("%s \n",player2.name);
     printf("%d \n",player2.age);
}