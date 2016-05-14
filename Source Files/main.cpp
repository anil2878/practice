#include <stdio.h>
#include "CommonHeader.h"

int main()
{
	printf("Hello world\n");
	int arr[5]={1,2,6,5};
	int wA[5]={0};
	allPosbNums(arr, 0, 3, wA, 0);

	//printf("Common area is %d\n", findInterSectionTri(0,0, 1,1, 1,1, 4,4));
}