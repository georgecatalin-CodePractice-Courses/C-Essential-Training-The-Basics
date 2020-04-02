/* ************************************************************ 
* Buidling a structure variant 1
************************************************************* */

#include <stdio.h>

int main()
{
	struct pixel
	{
		int horiz;
		int vertic;
		char colour;
	};

	struct pixel center;

	center.horiz=380;
	center.vertic=344;
	center.colour='r';

	printf("This pixel has horiz %d and vertic %d and colour %c",center.horiz,center.vertic,center.colour);
	return (0);

}
