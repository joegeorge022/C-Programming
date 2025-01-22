#include <stdio.h>

// enum is a user defined data type in C. It is used to assign names to the integral constants 
enum day {mon, tue, wed, thu, fri, sat, sun};

// enums are not integers but can be reated like one

int main(){
    enum day today = sat;

    if(today == sat || today == sun){
        printf("Today is a weekend\n");
    } else {
        printf("Today is a weekday\n");
    }
}
