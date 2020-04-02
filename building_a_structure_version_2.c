/* ****************************************
* Building a structure version 2
***************************************** */

#include <stdio.h>

int main()
{
  struct pixel
  {
    int horiz;
    int vertic;
    char colour;
  } center;

  center.horiz=360;
  center.vertic=345;
  center.colour='r';

  printf("This center has the following properties: horiz %d ; \t veric %d ; \t colour %c",center.horiz,center.vertic,center.colour );

  return (0);

}
