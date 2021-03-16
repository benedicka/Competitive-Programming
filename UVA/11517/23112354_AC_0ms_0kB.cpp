#include<stdio.h>
#include<algorithm>
using namespace std;
int t,p,n,c[110],ans,jum,dp[10010];
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&p);
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&c[i]);
		}
		for(int i=0;i<=10000;i++)
		{	
			if(i==0) dp[i] =0;
			else dp[i] = 10000;
		}
		for(int i=0;i<n;i++)
		{
			for(int j=10000;j>=0;j--)
			{
				if(j+c[i]<=10000 && dp[j]+1<dp[j+c[i]])
				{
					//printf("%d %d ",j,c[i]);
					dp[j+c[i]] = dp[j]+1;
					//printf("dp[%d] = %d\n",j+c[i],dp[j+c[i]]);
				}
			}
		}
		for(int i=p;i<=10000;i++)
		{
			if(dp[i]!=10000)
			{
				printf("%d %d\n",i,dp[i]);
				break;
			}
		}
	}
	return 0;
}