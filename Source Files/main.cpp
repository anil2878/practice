#include <stdio.h>
#include "CommonHeader.h"

int main()
{
	printf("Hello world\n");
	printf("Common area is %d\n", findInterSectionTri(0,0, 1,1, 1,1, 4,4));
}