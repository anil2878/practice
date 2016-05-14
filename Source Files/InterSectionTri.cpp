
#include "CommonHeader.h"

/*
Print all the possible numbers with the given number
Ex: 126 -- 1 2 6, 12 6, 1 26
*/
int printOut(int *wA, int len)
{
	for(int i=0;i<len;i++)
		printf("%d\t", wA[i]);
	printf("\n");
	return 0;
}


int allPosbNums(int *arr, int currLoc, int end, int *wA, int len)
{
	int val;
	if(currLoc == end)
	{
		wA[len] = arr[currLoc];
		printOut(wA, len+1);
		return 0;
	}
	wA[len] = arr[currLoc];
	allPosbNums(arr, currLoc+1, end, wA, len+1);

	if(currLoc+1 == end)
	{
		wA[len] = 10*arr[currLoc] + arr[currLoc+1];
		if(wA[len] <27)
			printOut(wA, len+1);
		return 0;
	}

	wA[len] = 10*arr[currLoc] + arr[currLoc+1];
	if(wA[len] <27)
		allPosbNums(arr, currLoc+2, end, wA, len+1);
	return 0;
}

/*
 *  find the intersection area of the rectangles
 * Assuming (x1,y1) and (x2,y2) are opposite vertexes of rectangle 1 
 * and (x3,y3) and (x4,y4) are opposite vertexes of rectangle 2
 */

int findInterSectionTri(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
	int minx, miny, maxx, maxy, diffx, diffy;
	maxx = MAX(x1,x3);
	maxy = MAX(y1,y3);

	minx = MIN(x2,x4);
	miny = MIN(y2,y4);

	diffx = minx-maxx;
	diffy = miny-maxy;
	if((diffx)>0 && (diffy)>0)
		return diffx*diffy;
	return 0;
}