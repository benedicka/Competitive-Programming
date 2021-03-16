#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	long long a,dp[52];
	dp[0]=2;
	dp[1]=3;
	for (int i=2;i<53;i++)
	{
		dp[i]=dp[i-1]+dp[i-2];
	}
	scanf("%d",&t);
	for(int j=1;j<=t;j++)
	{
		scanf("%lld",&a);
		printf("Scenario #%d:\n%lld\n\n",j,dp[a-1]);
	}
	return 0;
}