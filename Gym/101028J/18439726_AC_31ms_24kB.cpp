#include<bits/stdc++.h>
using namespace std;
int t,n,a[110],dp[110],ans,x;
int getpow(int x)
{
	int tmp = 2,res =1,cnt = 1;
	if(x%2) return 0;
	while(tmp<=x)
	{
		tmp*=2;
		cnt++;
		if(x%tmp==0) res = cnt;
	}
	return res;
}
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		ans = 0;
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
			dp[i] = 0;
		}
		for(int i=1;i<=n;i++)
		{
			dp[i] = x = getpow(a[i]);
			for(int j=i-1;j>=0;j--)
			{
				if(a[j]<a[i])
				{
					
					dp[i] = max(dp[i],dp[j]+x);
					ans = max(ans,dp[i]);
				}
			}
		}
		printf("%d\n",ans);
	}	
	return 0;
}