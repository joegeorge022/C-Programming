#include <stdio.h>
#include <string.h>

 // Student:
 // This is the name of the structure. It acts as a blueprint for creating variables that contain name, age, and rollno.
struct Student {
    char name[15];
    int age;
    int rollno;
};

struct Player {
    char name[12];
    int age;
};


int main(){
    struct Student Students[5]={
        {"Joe", 18, 1},
        {"Moe", 20, 2},
        {"Doe", 22, 3},
        {"Boe", 24, 4},
        {"Foe", 26, 5}
    };
    for(int i=0; i<5; i++){
        printf("Name: %s\n", Students[i].name);
        printf("Age: %d\n", Students[i].age);
        printf("Roll No: %d\n", Students[i].rollno);
        printf("\n");
    };

    struct Player players[5]={
        {"Joe", 18},
        {"Moe", 20},
        {"Doe", 22},
        {"Boe", 24},
        {"Foe", 26}
    };
    for(int i=0; i<5; i++){
        printf("Name: %s\n", players[i].name);
        printf("Age: %d\n", players[i].age);
        printf("\n");
    };
}
