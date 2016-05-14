
#include "CommonHeader.h"
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