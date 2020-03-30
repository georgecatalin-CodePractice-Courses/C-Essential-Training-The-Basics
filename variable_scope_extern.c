/* *************************************
* Understanding variable scope : extern
************************************* */

#include <stdio.h>

int a,b;

void sum()
{
    extern int a, b;
    a=91;
    b=7;

    printf("%d / %d = %d. \n",a,b,a/b);

}

int main()
{
    extern int a,b;

    printf("Calling the external function: \n");
    sum();

    puts("\n");
    printf("Calling the int main function: \n");
    printf("%d / %d = %d. \n",a,b, a/b);

    return (0);
}
