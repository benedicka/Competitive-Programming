#include<stdio.h>
#include<algorithm>
using namespace std;
long long dp[2010][2010];
int main()
{
	long long s,n,w[2010],v[2010];
	scanf("%lld %lld",&s,&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld %lld",&w[i],&v[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=s;j++)
		{
			if(j-w[i]<0 && i==0) dp[i][j] = 0;
			else if(i==0 && j-w[i]>=0) dp[i][j] = v[i];
			else if(j-w[i]<0) dp[i][j] = dp[i-1][j];
			else if(j-w[i]>=0) dp[i][j] = max(dp[i-1][j-w[i]]+v[i],dp[i-1][j]);
		
		}
	}
//	
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<=s;j++)
//		{
//			printf("%d ",dp[i][j]);
//		}
//		printf("\n");
//	}
	
	printf("%lld\n",dp[n-1][s]);
	
	return 0;
}