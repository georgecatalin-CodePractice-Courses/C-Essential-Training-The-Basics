/* *******************************************
* Understanding math operators ++a and --a increment and decrement operator
* ***************************************** */

#include <stdio.h>

int main()
{
    int a,b;

    a=10;
    b=a;

    printf("The values for a++ and b-- modify the variable after their use. \n Example: a= %d, b=%d \n\n", ++a, --b); // expected result a=11, b=9
    printf("a=%d \n b=%d. \n", a, b); //expected result a=11, b=9

    return (0);
}
