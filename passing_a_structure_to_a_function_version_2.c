/* ************************************************
* Passing a structure to a function version 2
************************************************** */

#include <stdio.h>

struct pixel
{
    int horiz;
    int vertic;
    char color;
};

void show_color(struct pixel p);

int main()
{
    struct pixel center;

    center.horiz = 1024;
    center.vertic = 768;
    center.color = 'r';

    show_color(center);

    return (0);
}

void show_color(struct pixel p)
{
    printf("%d - %d =  ", p.horiz, p.vertic);

    switch (p.color)
    {
    case 'r':
        printf("red");
        break;
    case 'g':
        printf("green");
        break;
    default:
        printf("I do not know");
        break;
    }
}