#include<stdio.h>
#include<algorithm>
using namespace std;
int t,n,w[1100],p[1100],g,mw,dp[1100][1100],ans;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		ans = 0;
		for(int i=0;i<n;i++)
		{
			scanf("%d %d",&p[i],&w[i]);
		}
		scanf("%d",&g);
		for(int k=0;k<g;k++)
		{
			scanf("%d",&mw);
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<=mw;j++)
				{
					if(j-w[i]<0 && i==0) dp[i][j] = 0;
					else if(i==0 && j-w[i]>=0) dp[i][j] = p[i];
					else if(j-w[i]<0) dp[i][j] = dp[i-1][j];
					else if(j-w[i]>=0) dp[i][j] = max(dp[i-1][j-w[i]]+p[i],dp[i-1][j]);
				}
			}
			ans+=dp[n-1][mw];
		}
		printf("%d\n",ans);
	}
	return 0;
}