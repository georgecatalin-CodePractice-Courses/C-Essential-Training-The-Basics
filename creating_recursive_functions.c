/* ****************************************
* Creating recursive functions
***************************************** */

#include <stdio.h>

void recursive(int a)
{
    a++;
    printf("The value of a is %d. \n",a);
    recursive(a);
}



int main()
{
    recursive(0);
    return (0);
}
