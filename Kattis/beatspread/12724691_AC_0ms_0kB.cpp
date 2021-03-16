#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int a,b,t,x,y;
	scanf("%d",&t);
	while (t--)
	{
		scanf("%d %d",&a,&b);
		if (a<b) printf("impossible\n");
		else if ((a+b)%2!=0) printf("impossible\n");
		
		else
		{
			x=(a+b)/2;
			y=a-x;
			if (x>y)printf("%d %d\n",x,y);
			else printf("%d %d\n",y,x);
		}	
	}
	
	
	return 0;
}