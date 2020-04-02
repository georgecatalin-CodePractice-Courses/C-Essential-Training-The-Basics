/* ********************************************
* Building a structure version 4
********************************************* */

#include <stdio.h>

int main()
{
  struct pixel
  {
    int horiz;
    int vertic;
    char colour;
  } center={150,300,'g'};

  printf("%d - %d -%c",center.horiz,center.vertic,center.colour)

  return (0);

}
