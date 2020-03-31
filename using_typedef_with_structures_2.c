/* ************************************
* Using typedef with structures model 2
* ********************************** */

#include <stdio.h>
#include <string.h>

int main()
{
    struct person
    {
        char name[50];
        int iq;
    };

    typedef struct person human;

    human me;

    strcpy(me.name,"George Calin");
    me.iq=100;

    printf("%s has an IQ of %d. \n",me.name,me.iq);
    return (0);
}
