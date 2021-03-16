#include<bits/stdc++.h>
using namespace std;
int n,m,x,y,cntb[1010],cntw[1010],cnt,dp[3][1010],tmpb,tmpw;
char s[1010][1010];

int main()
{
	scanf("%d %d %d %d",&n,&m,&x,&y);
	for(int i=0;i<n;i++)
	{
		scanf("%s",s[i]);
	}
	for(int i=0;i<m;i++)
	{
		cnt = 0;
		for(int j=0;j<n;j++)
		{
			if(s[j][i]=='#')cnt++;
		}
		cntb[i+1] = cntb[i]+ cnt;
		cntw[i+1] = cntw[i]+ n - cnt;
	}
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<=m;j++)
		{
			dp[i][j] = 10000000;
		}
	}
	dp[1][0] = dp[0][0] = 0;
	for(int i=x;i<=m;i++)
	{
		tmpb = tmpw = 0;
		for(int j=x;j<=y;j++)
		{
			if(i-j<0) break;
			dp[0][i] = min(dp[0][i],dp[1][i-j]+cntw[i]-cntw[i-j]);
			dp[1][i] = min(dp[1][i],dp[0][i-j]+cntb[i]-cntb[i-j]);
		}
		//printf("%d %d\n",dp[0][i],dp[1][i]);
	}
	printf("%d\n",min(dp[0][m],dp[1][m]));
	return 0;
}