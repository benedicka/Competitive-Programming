#include <stdio.h>
int q1x,q1y,q2x,q2y;
int main()
{
	while(scanf("%d %d %d %d",&q1x,&q1y,&q2x,&q2y)!=EOF)
	{
		if(q1x==q2x==q1y==q2y && q1x==0) break;
		if( q1x==q2x && q1y==q2y) printf("0\n");
		else if(q1x+q1y== q2x+q2y || q1x-q1y==q2x-q2y || q1x==q2x || q1y==q2y) printf("1\n");
		else printf("2\n");
	}
	return 0;
}