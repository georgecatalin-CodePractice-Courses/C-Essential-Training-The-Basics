/* ***************************
* Understanding variable scope in C language
* Auto, extern and static
**************************** */

#include <stdio.h>

void sum()
{
    int a, b;
    a=91;
    b=7;

    printf("%d / %d = %d. \n",a,b,a/b);
}

int main()
{
    int a,b;
    a=59;
    b=4;

    printf("Calling the result from external function: \n");
    sum();

    printf("\n");

    printf("Calling the result from the main function:\n");
    printf("%d / %d = %d \n",a,b,a/b);

    return (0);
}
