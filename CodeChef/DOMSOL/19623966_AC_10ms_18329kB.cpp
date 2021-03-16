#include<bits/stdc++.h>
using namespace std;
long long x[3][100010],dp[100010],n;
int main()
{
	scanf("%lld",&n);
	for(int i=0;i<2;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%lld",&x[i][j]);
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(i-2>=0)
		{
			dp[i] = max(dp[i-1]+abs(x[0][i]-x[1][i]),dp[i-2]+abs(x[0][i]-x[0][i-1])+abs(x[1][i-1]-x[1][i]));
		}
		else 
		{
			dp[i] = abs(x[0][1]-x[1][1]);
		}
	}
	printf("%lld\n",dp[n]);
	return 0;
}