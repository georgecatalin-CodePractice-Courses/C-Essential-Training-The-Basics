/* *****************************************
* Define new datatype
****************************************** */

#include <stdio.h>

typedef float radius;

int main()
{
    radius r;

    r=19.3;
    printf("The aria of a circle with radiu %f is %f. \n",r,r*r*3.14);
    return (0);
}
