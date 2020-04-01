/* ****************************************
* Retaining values in a function - example with auto access modifier of variable
****************************************** */

#include <stdio.h>

int function()
{
    int a=0;

    a+=16;
    printf("The value of A in the function() is %d. \n",a);
    return (a);
}

int main()
{
    int a;

    a=function();
    printf("The value of A in main() is %d. \n", a);

    a=function();
    printf("The value of A in main() is %d. \n", a);

    a=function();
    printf("The value of A in main() is %d. \n", a);

    return (0);
}
