#include <stdio.h>

int main() {
    /*1.5 Write a C program to find the eligibility of admission for a professional course
    Eligibility Criteria: 
    Marks in Maths >=65,
    Marks in Physics >=55, 
    Marks in Chemistry>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140*/

    int maths, physics, chemistry, total;

    printf("Enter marks in Maths: ");
    scanf("%d", &maths);
    printf("Enter marks in Physics: ");
    scanf("%d", &physics);
    printf("Enter marks in Chemistry: ");
    scanf("%d", &chemistry);

    total = maths + physics + chemistry;

    //below line may seem a bit sus at first but just read it. (Remember && and || logical operators)
    if ((maths >= 65 && physics >= 55 && chemistry >= 50 && total >= 190) ||
        (maths + physics >= 140)) {
        printf("You are eligible for admission to the professional course.\n");
    } else {
        printf("You are not eligible for admission to the professional course.\n");
    }


    return 0;
}
