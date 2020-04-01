/* *********************************
* Using sizeof() keyword
*********************************** */


#include <stdio.h>

int main()
{
    int a=3;
    float b=7.5;
    char c='a';
    double d=9.4;
    char string[]="Hello, Bibba!";
    int arrays[]={23,232};

    printf("The size of int datatype is %lu. \n", sizeof(a));

    printf("The size of float datatype is %lu. \n", sizeof(b));

    printf("The size of char datatype is %lu. \n", sizeof(c));

    printf("The size of double datatype is %lu. \n", sizeof(d));

    printf("The size of string  is %lu. \n", sizeof(string));

    printf("The size of array  is %lu. \n", sizeof(arrays));


    return (0);
}
