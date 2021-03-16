#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
long t,ax,ay,bx,by,cx,cy,dx,dy,s1,s2,area;
int main()
{
	scanf("%ld",&t);
	for(int tc=1;tc<=t;tc++)
	{
		scanf("%ld %ld %ld %ld %ld %ld",&ax,&ay,&bx,&by,&cx,&cy);
		dy = ay+cy-by;
		dx = ax+cx-bx;
		area = (dx+ax)*(dy-ay) + (ax+bx)*(ay-by) +(bx+cx)*(by-cy) +(cx+dx)*(cy-dy) ;
		printf("Case %d: %ld %ld %ld\n",tc,dx,dy,abs(area)/2);
	}
	return 0;
}