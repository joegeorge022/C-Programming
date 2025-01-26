#include <stdio.h>

int main() {
    /*1.10 If the ages of Ram, Shyam and Ajay are input through the keyboard, 
    write aprogram to determine the youngest of the three.*/
    
    int ram, shyam, ajay, youngest;

    printf("Enter the age of Ram: ");
    scanf("%d", &ram);

    printf("Enter the age of Shyam: ");
    scanf("%d", &shyam);

    printf("Enter the age of Ajay: ");
    scanf("%d", &ajay);

    youngest = (ram<shyam) ? (ram<ajay ? ram:ajay) :(shyam<ajay ? shyam:ajay);  // ternary opearators 😮‍💨

    printf("The youngest is %d years old.\n", youngest);

    return 0;
}
