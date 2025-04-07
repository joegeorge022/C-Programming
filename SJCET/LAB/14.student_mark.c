/*
14. Develop a program to calculate the total and average marks of a group of Student using an array of structures. 
Include Student name, roll number, and marks in three subjects.
*/

#include <stdio.h>

typedef struct{
    char name[30];
    int roll;
    int mark_1;
    int mark_2;
    int mark_3;

} Student;

int main(){
    int n;
    printf("Enter the number of Students: ");
    scanf("%d",&n);

    Student s[n];

    for (int i=0; i < n; i++){
        getchar();
        printf("\nEnter the name of Student-%d: ",i+1);
        scanf("%[^\n]%*c", s[i].name);

        /*
        scanf("%[^\n]", string) leaves the newline character (\n) in the input buffer.
        scanf("%[^\n]%*c", string) reads and discards the newline character, clearing it from the buffer.
        */

        printf("Enter the roll no. of Student-%d: ",i+1);
        scanf("%d", &s[i].roll);

        printf("Enter the mark_1 of Student-%d: ",i+1);
        scanf("%d", &s[i].mark_1);

        printf("Enter the mark_2 of Student-%d: ",i+1);
        scanf("%d", &s[i].mark_2);

        printf("Enter the mark_3 of Student-%d: ",i+1);
        scanf("%d", &s[i].mark_3);
    }

    int total_mark = 0;
    for (int i=0; i<n; i++){
        total_mark += s[i].mark_1 + s[i].mark_2 + s[i].mark_3;
    }

    int avg_mark = total_mark / (n * 3);
 
    printf("\nTotal Marks : %d \n", total_mark);
    printf("Average Marks : %d \n\n", avg_mark);

    return 0;
}
