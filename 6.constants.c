#include <stdio.h>

int main() {

    // constant = fixed value that cannot be changed or altered.

    // Constants can be set by adding "const" while assigning value.
    // NOT NECESARRY--->    Generally constants are stored with all letters uppercase. This is just a convention. 

    const float PI = 3.14159;

    PI = 100;   // ERROR--> This line would result in an error since we have assigned the variable PI with a constant value.

    printf("%f", PI);

    return 0;
}
