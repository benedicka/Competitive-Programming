#include<stdio.h>
#include<math.h>
int main()
{
	int t,n,c=1,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		ans = -1;
		while(n>1)
		{
			n-=5;
			if(n%3==0)
			{
				ans = n;
				break;
			}
		}
		if (ans<=0) ans = -1;
		printf("Case %d: %d\n",c,ans);
		c++;
	}
	
	
	
	
	return 0;
}