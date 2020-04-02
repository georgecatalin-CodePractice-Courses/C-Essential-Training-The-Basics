/* ****************************************
* Building a structure version 3
***************************************** */

#include <stdio.h>

int main()
{
  struct pixel
  {
    int horiz;
    int vertic;
    char colour;
  } center, top, bottom;

  center.horiz=360;
  center.vertic=345;
  center.colour='r';

  top.horiz=555;
  top.vertic=345;
  top.colour='w';

  bottom.horiz=12;
  bottom.vertic=122;
  bottom.colour='y';


  printf("This center has the following properties: horiz %d ; \t veric %d ; \t colour %c",center.horiz,center.vertic,center.colour );
  printf("This top has the following properties: horiz %d ; \t veric %d ; \t colour %c",top.horiz,top.vertic,top.colour );
  printf("This bottom has the following properties: horiz %d ; \t veric %d ; \t colour %c",bottom.horiz,bottom.vertic,bottom.colour );

  return (0);

}
