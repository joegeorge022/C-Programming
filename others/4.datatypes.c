#include <stdio.h>
#include <stdbool.h>    // this is needed to work with booleans (true/false) in C. ✅

// 4. DATA TYPES

/*
   MAIN DATA TYPES   (these are the most commonly used ones.)
   - Char
   - Array of Chars
   - Integers
   - Doubles 
   - Booleans

   But also learn about the others.
*/ 


int main() {

// Char
    // single character
    char a = 'C';           //   %c
    printf("%c\n",a);

    // array of charcters 
    char b[] = "Joe";       //   %s
    printf("Your name is %s\n",b);

    // To store multiple charcters we must use [] after variable name while assigning.
    // This [] stores the data as an array.



// Float 
    // 4 bytes (32 bits of precision) 6-7 digits precision.
    float c =3.14159;          //  %f
    printf("%f\n",c);          // you can add more digits after the decimal place. you could type "%0.1f" for 1 decimal place and so on. for 16 decimal places use "%0.16f"
    

// Double 
    // 8 bytes (64 bits of precision)  15-16 digits precision.
    double d =3.141592653589793;   //  %lf
    printf("%0.15lf\n",d);             // you can add more digits in the same way "%0.15lf"
    

// Booleans
    //  1 byte (true/false)   //  1=true    0=false
    bool e = true;            // %d
    printf("%d\n",e);         // this outputs 1 since 1 is the probability of a true event. We studied this in math 🤝.
    

// Char AGAIN 😳😳 !!?
    // INTEGER CHAR
    // 1-byte (-128 to +127)  
    char f = 100;           //  %d    (prints as number) 
    printf("%c\n",f);       //  %c    (prints as character-converted according to ASCII chart)


    // UNSIGNED CHARACTER
    // 1 byte (0 to +255)
    unsigned char g =255;   //   %d or %c
    printf("%d\n",g);


    //SHORT INTEGER
    // 2 bytes (-32,768 to +32,767)
    short int h = 32767;    //   %d
    printf("%d\n",h);


    // UNSIGNED SHORT INTEGER
    // 2 bytes (0 to +65,535) 
    unsigned short int i = 65535;    //     %d
    printf("%d\n",i);


    // INTEGER  
    // 4 bytes (-2,147,483,648 to +2,147,483,647)
    int j = 2147483647;   //   %d
    printf("%d\n",j);


    // UNSIGNED INTEGER
    //4 bytes(0 to +4,294,967,295)
    unsigned int k = 4294967295L;   //     %u
    printf("%u\n",k);


    // LONG LONG INTEGER
    // 8 bytes (-9 quintillion to +9 quintillion)          
    long long int l = 9223372036854775807;        //    %lld
    printf("%lld\n",l);


    // UNSIGNED LONG LONG INTEGER
    // 8 bytes (0 to 18 quintillion )
    unsigned long long int m = 1844674407370955161;   //    %llu
    printf("%llu\n",m);

    return 0;
}
