/* *************************************
* Usinh typedef with structures model 3
************************************* */

#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct
    {
        char name[50];
        int iq;
    } human;

    human me;

    strcpy(me.name,"George Calin");
    me.iq=100;

    printf("%s has an IQ of %d.\n",me.name,me.iq);
    return (0);

}
