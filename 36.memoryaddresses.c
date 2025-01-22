#include <stdio.h>

//memory = array of bytes in RAM.(STREET)
//memory block = single unit(byte) within memory to hold some value.(PERSON)
//memory address = address of where a memory block is located.(ADDRESS)
// we assign variable names to memory addresses

int main(){
    char a = 'X';
    int b = 1;
    double c = 1.0;

    printf("Char = %d bytes \n",sizeof(a));
    printf("Int = %d bytes \n",sizeof(b));
    printf("Double = %d bytes \n",sizeof(c));

    printf("%p \n", &a);
    printf("%p \n", &b);
    printf("%p \n", &c);
}
