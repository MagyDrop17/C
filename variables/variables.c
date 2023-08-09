#ifndef FILE_FOO_SEEN
#define FILE_FOO_SEEN

#include <stdio.h>

#endif
void main() {

    int num = -50; // -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647  %d
    char letter = 'a'; // -128 to 127                                       %c                           
    float decimal = 1.2; // 3.24E-38 to 3.4E+38                             %f
    double decimal2 = 1.2; // 1.7E-308 to 1.7E+308                          %f
    unsigned char letter2 = 'a'; // 0 to 65535                              %c                        
    unsigned int num2 = 50; // -128 to 127                                  %u                        
    unsigned short int num3 = 50; // 3.4E-4932 to 1.1E+4932                 %hu
    unsigned long int num4 = 50; // 0 to 4,294,967,295                      %lu
    long double decimal3 = 1.200000; // 3.4E-4932 to 1.1E+4932              %lf
    long int num5 = 50; // -2,147,483,648 to 2,147,483,647                  %ld



    printf("%d \n", num);
    printf("%c \n", letter);
    printf("%f \n", decimal);
    printf("%f \n", decimal2);
    printf("%c \n", letter2);
    printf("%u \n", num2);
    printf("%hu \n", num3);
    printf("%lu \n", num4);
    printf("%lf \n", decimal3);
    printf("%ld \n", num5);

}