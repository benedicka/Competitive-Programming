#include<stdio.h>
#include<algorithm>
using namespace std;
long long t,k1,k2,c,n,m,a[2010],b[2010],ans,cnt,juma[2010],jumb[2010];
long long dp[2010][2010];
int main()
{
	dp[0][0] = 0;
	scanf("%lld",&t);
	while(t--)
	{
		ans = 0;
		scanf("%lld %lld %lld",&k1,&k2,&c);
		scanf("%lld %lld",&n,&m);
		for(int i=1;i<=n;i++)
		{
			scanf("%lld",&a[i]);	
		} 
		for(int i=1;i<=m;i++)
		{
			scanf("%lld",&b[i]);	
		} 
		sort(a+1,a+1+n);
		sort(b+1,b+1+m);
		for(int i=1;i<=n;i++)
		{
			juma[i]=juma[i-1]+a[i];
			if(juma[i]>c) 
			{
				dp[i][0] = 0;
				continue;
			}
			dp[i][0] = dp[i-1][0]+(c-juma[i])*k1;
			if(dp[i][0]>ans) ans = dp[i][0];
		}
		for(int i=1;i<=m;i++)
		{
			jumb[i]=jumb[i-1]+b[i];
			if(jumb[i]>c)
			{
				dp[0][i] = 0;
				continue;
			}
			dp[0][i] = dp[0][i-1]+(c-jumb[i])*k2;
			if(dp[0][i]>ans) ans = dp[0][i];	
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cnt = juma[i]+jumb[j];
				if(cnt>c) break;
				dp[i][j] = max(dp[i-1][j]+k1*(c-cnt),dp[i][j-1]+k2*(c-cnt));	
				if(dp[i][j]>ans) ans = dp[i][j];	
			}
		}
		printf("%lld\n",ans);
	}
	return 0;
}