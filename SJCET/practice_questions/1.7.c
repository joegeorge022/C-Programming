#include <stdio.h>

int main() {
    /*1.7 Write a C program to read roll no, name and marks of three subjects and calculate the total, percentage.
    If the percentage of the marks >=75 then print First Class with Distinction
    If the percentage of the marks >=60 and <75 print First Class
    If the percentage of the marks <60 print Second Class*/


    char name[15]; //honestly tho if your name's longer than 15 youre cooked
    int roll, marks1, marks2, marks3, total, percentage;

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &roll);

    printf("Enter marks of three subjects (one by one): ");
    scanf("%d %d %d", &marks1, &marks2, &marks3);

    total = marks1+ marks2+ marks3;
    percentage =(total/300.0)*100;

    printf("Roll No: %d\n", roll);
    printf("Name: %s\n", name);
    printf("Total Marks: %d\n", total);
    printf("Percentage: %d \n", percentage);    

    if (percentage >=75)
        printf("First class with distinction. \n");
    else if (percentage>=60)
        printf("First class. \n");
    else
        printf("Second class. \n");

    return 0;
}
