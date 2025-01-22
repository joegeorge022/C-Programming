#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;

    printf("\n Is the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    printf("\n Numeric value of temperature: ");
    scanf("%f", &temp);

    if(unit == 'c'){
        temp = (temp*9/5)+32;
        printf("\n Temperarure in Fahrenheit is %f \n", temp);
    }
    else if(unit == 'f'){
        temp = (temp-32)*5/9;
        printf("\n Temperarure in Celsius is %f \n", temp);
    }
    else{
        printf("\n Invalid Input! \n");
    }

    return 0;
}
