#include <stdio.h>

int main() {
    /*1.9 Write a C program to read temperature in centigrade and display a suitable message according to temperature state below
    Temperature < 0 then Freezing weather
    Temperature 0-10 then Very Cold weather
    Temperature 10-20 then Cold weather
    Temperature 20-30 then Normal in Temp
    Temperature 30-40 then Its Hot
    Temperature >=40 then Its Very Hot*/
    int temperature;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &temperature);

    if (temperature < 0) {
        printf("Freezing weather\n");
    } else if (temperature >= 0 && temperature < 10) {
        printf("Very Cold weather\n");
    } else if (temperature >= 10 && temperature < 20) {
        printf("Cold weather\n");
    } else if (temperature >= 20 && temperature < 30) {
        printf("Normal in Temp\n");
    } else if (temperature >= 30 && temperature < 40) {
        printf("It's Hot\n");
    } else {
        printf("It's Very Hot\n");
    }
}
