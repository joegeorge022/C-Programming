#include <stdio.h>
#include <math.h>

double square(double x){
    return x*x;
}

double root(double y){
    return sqrt(y);
}

void birthday(char name[]){
    printf("\nHappy birthday %s !!!! \n",name);
}


int main(){
    double age=18;
    char name[] ="Joe";
    birthday("Joe");
    printf("\n You are %lf years old. \n",square(age));
    printf("Oh wait..! Wrong age. \n My bad😅😅. \n Lemme fix that for you \n");


    // in the below line square function returns 324 and root functions return 18 back.
    // quite unnecessary but we just leanred it works😁
    printf("You are %lf years old.\n \n",root(square(age)));

    return 0;
}
