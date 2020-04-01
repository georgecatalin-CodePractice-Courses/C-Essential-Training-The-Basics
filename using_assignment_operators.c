/* **********************************
* using asignment operators += -= *= /=
************************************ */

#include <stdio.h>

int main()
{
    int a,b;

    a=10;
    b=a;

    printf("auto incrementation is %d + 5 = %d. /n",a, a+=5);
    printf("\n");
    printf("auto subtraction is %d -5 = %d. \n",a, a-=5);
    printf("\n");
    printf("auto multiplication is %d * 5 = %d. \n", b, b*=5);
    printf("\n");
    printf("auto division is %d / 5 = %d. \n", b,b/=5);

    return (0);
}
