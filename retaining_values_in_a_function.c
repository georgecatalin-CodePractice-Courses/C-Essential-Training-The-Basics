/* ****************************************
*  Retaining values in a function - example 1
***************************************** */

#include <stdio.h>

void function()
{
    int a;

    a=16;

    printf("The value of A in function() is %d. \n",a);

}


int main()
{
    int a=10;

    printf("The value of A in main() is %d. \n",a);
    function();
    printf("The value of A in main() is %d. \n",a);
    return (0);

}
