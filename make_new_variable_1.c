/* *******************************
* Make new variable with typedef
******************************* */

#include <stdio.h>

int main()
{
    typedef float radius;
    radius r;

    r=4.3;
    printf("The radius of a circle with radius of %f is %f. \n",r,r*r*3.14);

    return (0);
}
