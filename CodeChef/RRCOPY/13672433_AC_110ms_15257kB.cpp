#include<stdio.h>

int main()
{
	bool ada[100010];
	int t,n,ans,x;
	scanf("%d",&t);
	while(t--)
	{
		ans = 0;
		scanf("%d",&n);
		for(int i=0;i<=n;i++)
		{
			ada[i] = 0;
		}
		while(n--)
		{
			scanf("%d",&x);
			if(ada[x]==0)
			{
				ada[x] = 1;	
				ans++;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}