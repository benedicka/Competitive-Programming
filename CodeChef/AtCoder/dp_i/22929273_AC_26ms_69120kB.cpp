#include<bits/stdc++.h>
using namespace std;
int n;
double ans,p[3010],head,tail,dp[3010][3010];

int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lf",&p[i]);
	}	
	dp[0][0] = 1;
	for(int i=1;i<=n;i++)
	{
		head = p[i];
		tail = 1-p[i];
		dp[i][0] = dp[i-1][0]*tail;
		for(int j=1;j<=i;j++)
		{
			dp[i][j] = dp[i-1][j-1]*head+tail*dp[i-1][j];
		}
	}
	for(int i=(n/2)+1;i<=n;i++)
	{
		ans+=dp[n][i];
	}
	printf("%.10lf\n",ans);
	return 0;
}