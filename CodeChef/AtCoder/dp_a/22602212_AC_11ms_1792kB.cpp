#include<bits/stdc++.h>
using namespace std;
long long n,h[100010],dp[100010];

int main()
{
	scanf("%lld",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&h[i]);
	}
	for(int i=2;i<=n;i++)
	{
		if(i-1>=0) dp[i] = dp[i-1]+abs(h[i-1]-h[i]);
		if(i>2)
		{
			
			dp[i] = min(dp[i],dp[i-2]+abs(h[i-2]-h[i]));
		}
	}
	printf("%lld\n",dp[n]);
	return 0;
}