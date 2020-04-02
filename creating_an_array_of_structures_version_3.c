/* ****************************************************
* Creating an array of structures version 3
**************************************************** */

#include <stdio.h>

int main()
{
    struct pixel
    {
        int horiz;
        int vertic;
        int color;
    } box[3] = {
        {18, 36, 'r'},
        {20, 24, 'g'},
        {36, 41, 'b'}};

    int i;

    for (i = 0; i < 3; i++)
    {
        printf("#%d : \t %d - %d - %c \n",i+1, box[i].horiz, box[i].vertic,box[i].color);
    }

    return (0);
}