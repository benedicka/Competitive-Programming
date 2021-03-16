#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	long long x,y;
	int ans,c,d;
	do
	{
		ans=0;
		c=0;
		scanf("%lld %lld",&x,&y);
		if (x==0 && y==0) break;
		while (x!=0 || y!=0)
		{
			d=x%10+y%10+c;
			if (d>=10)
			{
				c=1;
				ans++;
			}
			else c=0;
			x=x/10;
			y=y/10;
		}

		if (ans==0)	printf ("No carry operation.\n");
		else if (ans==1) printf("1 carry operation.\n");
		else printf("%d carry operations.\n",ans);
	}while (x!=-1 || y!=-1);
	
	
	
	
	return 0;
}