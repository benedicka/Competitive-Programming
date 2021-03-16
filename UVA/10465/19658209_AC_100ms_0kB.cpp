#include<bits/stdc++.h>
using namespace std;
int a[3],t,ans, dp[10010],tme;

int main()
{
	while(scanf("%d %d %d",&a[0],&a[1],&t)!=EOF)
	{
		for(int i=0;i<=t;i++) dp[i] = 0;
		tme = 0;
		for(int i=1;i<=10000;i++)
		{
			if(a[0]*i>10000) break;
			dp[a[0]*i] = i;
		}
		for(int i=1;i<=10000;i++)
		{
			if(a[1]*i>10000) break;
			dp[a[1]*i] = i;
		}
		ans = 0;
		for(int i=0;i<2;i++)
		{
			for(int j=0;j<=t;j++)
			{
				if(j-a[i]>0 && dp[j-a[i]]>0)
				{
					dp[j] = max(dp[j-a[i]]+1,dp[j]);
				}
			}
		}
		for(int i=t;i>=0;i--)
		{
			if(dp[i]>0)
			{
				ans = dp[i];
				tme = i;
				break;
			}
		}
		printf("%d",ans);
		t-=tme;
		if(t>0 || ans==0)
		{
			printf(" %d",t);
		}
		printf("\n");
	}
	return 0;
}