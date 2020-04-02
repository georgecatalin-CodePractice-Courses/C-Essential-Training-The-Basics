/* ***************************************************************************
* Creating an array of structures version 2
**************************************************************************** */


#include <stdio.h>

int main()
{
  struct pixel
  {
    int horiz;
    int vertic;
    char colour;
  } box[3];

  
  int i;

  box[0].horiz=123;
  box[0].vertic=23;
  box[0].colour='r';

  box[1].horiz=18;
  box[1].vertic=223;
  box[1].colour='g';

  box[2].horiz=22;
  box[2].vertic=232;
  box[2].colour='y';

  for ( i = 0; i < 3; i++)
  {
    printf("#%d \t %d - %d = %c \n",i+1, box[i].horiz, box[i].vertic, box[i].colour);
  }
  
  return (0);

}
