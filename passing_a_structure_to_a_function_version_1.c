/* ************************************************
* Passing a structure to a function version 1
************************************************** */

#include <stdio.h>

char *show_color(char c);

int main()
{
    struct pixel
    {
        int horiz;
        int vertic;
        char color;
    };

    struct pixel center;
    int i;

    center.horiz = 1024;
    center.vertic = 768;
    center.color = 'r';

    printf("%d - %d - %s\n", center.horiz, center.vertic, show_color(center.color));

    return (0);
}

char *show_color(char c)
{
    switch (c)
    {
    case 'r':
        return ("red");
        break;
    case 'g':
        return "green";
        break;
    default:
        return " I donno";
        break;
    }
}